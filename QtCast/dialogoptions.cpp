#include "dialogoptions.h"
#include "ui_dialogoptions.h"

#include "QsLog.h"

#include <QFile>
#include <QtMultimedia>
#include <QAudio>
#include <QAudioDeviceInfo>


dialogOptions::dialogOptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogOptions)
{
    ui->setupUi(this);

    qtInputCards = QAudioDeviceInfo::availableDevices( QAudio::AudioInput );
    qtOutputCards = QAudioDeviceInfo::availableDevices( QAudio::AudioOutput );

    for( int i=0; i<qtInputCards.count(); ++i )
        QLOG_DEBUG() << qtInputCards.at(i).deviceName();
    for( int i=0; i<qtOutputCards.count(); ++i )
        QLOG_DEBUG() << qtOutputCards.at(i).deviceName();
}

dialogOptions::~dialogOptions()
{
    delete ui;
}

void dialogOptions::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void dialogOptions::on_listSources_activated(QModelIndex index)
{

}

QList<QString> dialogOptions::getAlsaCards()
{
    QList<QString> names;

    QFile file("/proc/asound/pcm");
    file.open( QIODevice::ReadOnly );
    const qint64 maxSize = 128;
    char data[maxSize];
    qint64 bytes = 1;
    while( bytes >= 0 )
    {
        bytes =  file.readLine( &data[0], maxSize );
        QString name(data);
        QStringList parts = name.split( " : " );
        switch( parts.count() )
        {
        case 3: // Either playback OR capture
            if( parts.at(2).contains( "capture" ) )
                names.append( parts.at(1) );
            break;
        case 4: // playback AND capture
            if( parts.at(2).contains( "capture" ) ||
                parts.at(3).contains( "capture" ) )
                names.append( parts.at(1) );
            break;
        default:
            break;
        }
    }
    file.close();
    return names;
}
