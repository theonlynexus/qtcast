#include "qtcast.h"
#include "ui_qtcast.h"
#include "audiofile.h"
#include "audiofilemeta.h"
#include "audiofilelistmodel.h"

#include "dialogoptions.h"
#include "ui_dialogoptions.h"

#include "QsLog.h"

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QGraphicsView>
#include <QToolBar>

#include <fmod.hpp>

QtCast::QtCast(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::QtCastClass)
{
    ui->setupUi(this);

    QToolBar* mainToolbar = (QToolBar*) this->findChild<QToolBar*>( "mainToolBar" );
    QAction* action = (QAction*)this->findChild<QAction*>( "actionLoad_Episode" );
    mainToolbar->addAction(action);
    action = (QAction*)this->findChild<QAction*>( "actionSave_Episode" );
    mainToolbar->addAction(action);

    qRegisterMetaType<AudioFileMeta>("AudioFileMeta");
    audioFileMetaId = QMetaType::type("AudioFileMeta");

    trackListModel = new AudioFileListModel(tracksList);
    ui->listTracks->setModel( trackListModel );
}

QtCast::~QtCast()
{
    delete ui;
}

void QtCast::on_btnSelectLogo_clicked()
{
     QString fileName = QFileDialog::getOpenFileName(this,
        tr("Select Logo"), "", tr("Image Files (*.png *.jpg *.bmp);;All files (*.*)"));

     // The user clicked "Cancel"
     if( 0 == fileName )
         return;

     // Try to load the image from file
     bool loaded = podcast.logo.load( fileName );

     // There was an error, alert the user
     if( !loaded )
     {
         QMessageBox::critical( this, "Error!", "Error while opening logo file."  );
         return;
     }
     podcast.logo = podcast.logo.scaled( 100, 100, Qt::KeepAspectRatio, Qt::SmoothTransformation );

     // Find the graphicsView and check
//     QLabel* lblLogo = (QLabel*) this->findChild<QLabel*>( "lblLogo" );
//     if( !lblLogo )
//     {
//        QMessageBox::critical( this, "Error!", "Could not find \"lblLogo\" component."  );
//        return;
//     }

     ui->lblLogo->setPixmap( QPixmap::fromImage( podcast.logo ) );
     ui->lblLogo->update();
}

void QtCast::on_editPodcastName_editingFinished()
{
    podcast.podcastTitle = ui->editPodcastName->text();
}

void QtCast::on_editPodcastAuthor_editingFinished()
{
    podcast.author = ui->editPodcastAuthor->text();
}

void QtCast::on_spinBox_editingFinished()
{
    podcast.episodeNumber = ui->spinBox->value();
}

void QtCast::on_editEdpisodeTitle_editingFinished()
{
    podcast.episodeTitle = ui->editEdpisodeTitle->text();
}

void QtCast::on_actionExit_triggered()
{
    this->close();
}

void QtCast::on_btnAddTrack_clicked()
{
    QLOG_DEBUG() << "QtCast::on_btnAddTrack_clicked()";
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Select Logo"), "", tr("Audio Files (*.ogg *.mp3 *.wav);;All files (*.*)"));

     // The user clicked "Cancel"
     if( 0 == fileName )
         return;

     QLOG_DEBUG() << "QtCast::on_btnAddTrack_clicked - User has selected file " <<
                           fileName.toLocal8Bit().constData();
     AudioFile file( fileName );
     AudioFileMeta meta( file.Meta() );
     QVariant variant( audioFileMetaId, &meta );

     QLOG_DEBUG() << "QtCast::on_btnAddTrack_clicked - Inserting row, current count: " <<
                            QString::number(trackListModel->rowCount()).toLocal8Bit().constData();

     trackListModel->insertRow( trackListModel->rowCount(), QModelIndex() );

     QLOG_DEBUG() << "QtCast::on_btnAddTrack_clicked - Row inserted, current count: " <<
                            QString::number(trackListModel->rowCount()).toLocal8Bit().constData();

     QModelIndex index = trackListModel->index( trackListModel->rowCount()-1, 0,
                                                QModelIndex() );
     if( ((AudioFileListModel*)trackListModel)->setData( index, variant, Qt::EditRole ) )
     {
         QLOG_DEBUG() <<  "QtCast::on_btnAddTrack_clicked - Row data set ";
         variant = trackListModel->data( index, Qt::EditRole );
         meta = variant.value<AudioFileMeta>();
         QLOG_DEBUG() << "QtCast::on_btnAddTrack_clicked - Row title: " <<
                               meta.title.toLocal8Bit().constData();
         QLOG_DEBUG() << "QtCast::on_btnAddTrack_clicked - Row artist: " <<
                               meta.artist.toLocal8Bit().constData();
         QLOG_DEBUG() << "QtCast::on_btnAddTrack_clicked - Row album: " <<
                               meta.album.toLocal8Bit().constData();
     }
     else
        QLOG_DEBUG() << "QtCast::on_btnAddTrack_clicked - Could not set data! ";


}

void QtCast::on_actionAbout_triggered()
{
     QMessageBox msgBox(this);
     msgBox.setText("QTcast, a podcast utility written in QT and FMOD.");
     msgBox.setInformativeText("About");
     msgBox.setStandardButtons(QMessageBox::Ok);
     msgBox.setDefaultButton(QMessageBox::Ok);
     msgBox.exec();
}


void QtCast::on_btnDelTrack_clicked()
{
    QModelIndex idx = ui->listTracks->currentIndex();

    if( idx.isValid() )
    {
        QLOG_DEBUG() << "QtCast::on_btnDelTrack_clicked - Removing idx " <<
                               QString::number(idx.row()).toLocal8Bit().constData();
        trackListModel->removeRow( idx.row() );        
    }

    return;
}

void QtCast::on_listTracks_clicked(QModelIndex index)
{
    QModelIndex idx = ui->listTracks->currentIndex();

    if( idx.isValid() )
    {
         QVariant variant = trackListModel->data( index, Qt::EditRole );
         AudioFileMeta meta = variant.value<AudioFileMeta>();

         ui->lineTrackArtist->setText( meta.artist );
         ui->lineTrackArtist->setCursorPosition(0);
         ui->lineTrackAlbum->setText( meta.album );
         ui->lineTrackAlbum->setCursorPosition(0);
         ui->lineTrackDuration->setText( "Cippa" );
         ui->lineTrackDuration->setCursorPosition(0);
         ui->lineTrackTitle->setText( meta.title );
         ui->lineTrackTitle->setCursorPosition(0);
    }
}

void QtCast::on_actionOptions_triggered()
{
    dialogOptions options( this );
    options.setModal( true );
    options.exec();
}
