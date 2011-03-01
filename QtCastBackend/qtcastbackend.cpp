#include <QHostAddress>
#include <QThread>
#include <QEventLoop>
#include "qtcastbackend.h"

QtCastBackend::QtCastBackend(QObject *parent) :
    QObject(parent)
{
    init();
}

QtCastBackend::~QtCastBackend()
{
    server->close();
}

void QtCastBackend::init()
{
    doQuit = false;
    server = new QTcpServer( this );
    if( !connect( server, SIGNAL(newConnection()), this, SLOT(newConnection()) ) )
    { printf("Server.newConnection Connect failed!\n"); fflush(stdout); }
    server->setMaxPendingConnections( 1 );
    server->listen( QHostAddress::Any, 6666 );
    if(server->isListening())
    { printf("Server up and listening\n"); fflush(stdout); }
}

void QtCastBackend::executeCommand( const COMMAND cmd,
                     const unsigned short payloadSize,
                     QBitArray payload )
{
    switch( cmd )
    {
    case CMD_QUIT:
        doQuit = true;
        break;
    default:
        break;
    }
}


void QtCastBackend::newConnection()
{
    printf( "New connection.\n" ); fflush( stdout );
    clientSocket = server->nextPendingConnection();
    connect( clientSocket, SIGNAL(readyRead()), this, SLOT(readData()) );
    connect( clientSocket, SIGNAL(disconnected()), this, SLOT(clientDisconnect()) );
    /* Client connected, stop listening */
    server->close();
}

void QtCastBackend::readData()
{
    printf( "readData()\n" );
    fflush( stdout );
}

void QtCastBackend::clientDisconnect()
{
    printf( "clientDisconnect()\n" );
    fflush( stdout );
    if( doQuit )
        emit exit();
    else
        server->listen( QHostAddress::Any, 6666 );
}
