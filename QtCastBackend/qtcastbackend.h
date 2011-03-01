#ifndef QTCASTBACKEND_H
#define QTCASTBACKEND_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>
#include <QBitArray>

class QtCastBackend : public QObject
{
    Q_OBJECT
public:
    enum COMMAND{
        CMD_QUIT
    };
    explicit QtCastBackend(QObject *parent = 0);
    ~QtCastBackend();
    void executeCommand( const COMMAND cmd,
                         const unsigned short payloadSize,
                         QBitArray payload );

private:
    void init();

    QTcpServer *server;
    QTcpSocket *clientSocket;
    bool doQuit;

signals:
    void exit();

public slots:
    void newConnection();
    void readData();
    void clientDisconnect();

};

#endif // QTCASTBACKEND_H
