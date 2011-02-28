#ifndef QTCASTBACKEND_H
#define QTCASTBACKEND_H

#include <QObject>
#include <QTcpServer>
#include <QTcpSocket>

class QtCastBackend : public QObject
{
    Q_OBJECT
public:
    explicit QtCastBackend(QObject *parent = 0);
    ~QtCastBackend();

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
