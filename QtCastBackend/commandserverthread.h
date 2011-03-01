#ifndef COMMANDSERVERTHREAD_H
#define COMMANDSERVERTHREAD_H

#include <QThread>

class CommandServerThread : public QThread
{
    Q_OBJECT
public:
    explicit CommandServerThread(int socketDescriptor, QObject *parent = 0);

    void run();

private:
    int socketDescriptor;

signals:
    void error( QTcpSocket::SocketError socketError );

public slots:

};

#endif // COMMANDSERVERTHREAD_H
