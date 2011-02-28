#ifndef FMODWRAPPER_H
#define FMODWRAPPER_H

#include <QObject>

#include <fmod.hpp>

class FmodWrapper : public QObject
{
    Q_OBJECT
public:
    explicit FmodWrapper(QObject *parent = 0);
    int initFmodWin32();

signals:

public slots:

private:
    FMOD::System *fmodSystem;
    unsigned int fmodVersion;
    int fmodNumDrivers;

};

#endif // FMODWRAPPER_H
