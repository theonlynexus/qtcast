#include <QTcpSocket>

#include "commandserverthread.h"

CommandServerThread::CommandServerThread(int socketDescriptor, QObject *parent) :
    QThread(parent), socketDescriptor( socketDescriptor )
{
}


void CommandServerThread::run( )
{
    QTcpSocket tcpSocket;

    if (!tcpSocket.setSocketDescriptor(socketDescriptor))
    {
         emit error( tcpSocket.error() );
         return;
    }

}
