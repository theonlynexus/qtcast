#ifndef QTCAST_H
#define QTCAST_H

#include "podcast.h"
#include "audiofile.h"

#include <QtGui/QMainWindow>
#include <QAbstractItemModel>
#include <QList>


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

private:
    Ui::QtCastClass *ui;

    Podcast podcast;
    QAbstractItemModel *trackListModel;
    QList<AudioFileMeta> tracksList;
    QList<AudioFileMeta> basesList;

    int audioFileMetaId;


private slots:
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
