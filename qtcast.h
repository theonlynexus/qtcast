#ifndef QTCAST_H
#define QTCAST_H

#include "podcast.h"
#include "audiofile.h"

#include <QtGui/QMainWindow>
#include <QAbstractItemModel>
#include <QList>
#include <QLibrary>

#include <fmod.hpp>


namespace Ui
{
    class QtCastClass;
}

class QtCast : public QMainWindow
{
    Q_OBJECT

public:
    QtCast(QWidget *parent = 0);
    ~QtCast();

    inline FMOD_RESULT fmodCreateSound( QString filename,
           FMOD_MODE  mode, FMOD_CREATESOUNDEXINFO *  exinfo, FMOD::Sound **sound )
    {
        return fmodSystem->createSound( filename.toLocal8Bit(), mode, exinfo, sound );
    }

    friend class AudioFile;

private:
    int initFmodWin32();

    Ui::QtCastClass *ui;
    Podcast podcast;
    QAbstractItemModel *trackListModel;
    QList<AudioFileMeta> tracksList;
    QList<AudioFileMeta> basesList;
    int QtCast::initFmod_win32();

    int audioFileMetaId;

    QLibrary fmodLib;
    FMOD::System *fmodSystem;
    unsigned int fmodVersion;
    int fmodNumDrivers;

private slots:
    void on_actionOptions_triggered();
    void on_listTracks_clicked(QModelIndex index);
    void on_btnDelTrack_clicked();
    void on_actionAbout_triggered();
    void on_btnAddTrack_clicked();
    void on_actionExit_triggered();
    void on_editEdpisodeTitle_editingFinished();
    void on_spinBox_editingFinished();
    void on_editPodcastAuthor_editingFinished();
    void on_editPodcastName_editingFinished();
    void on_btnSelectLogo_clicked();
};

#endif // QTCAST_H
