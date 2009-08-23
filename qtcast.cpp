#include "qtcast.h"
#include "ui_qtcast.h"
#include "AudioFile.h"

#include <gst/gst.h>
#include <glib.h>

#include <QFile>
#include <QFileDialog>
#include <QMessageBox>
#include <QGraphicsView>
#include <QToolBar>

QtCast::QtCast(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::QtCastClass)
{
    ui->setupUi(this);

    const gchar *nano_str;
    guint major, minor, micro, nano;

    gst_init(0, 0);

    gst_version (&major, &minor, &micro, &nano);

    if (nano == 1)
    nano_str = "(CVS)";
    else if (nano == 2)
    nano_str = "(Prerelease)";
    else
    nano_str = "";

    printf ("This program is linked against GStreamer %d.%d.%d %s\n",
          major, minor, micro, nano_str);

    GstElement *pipeline, *source, *demuxer, *decoder, *conv, *sink;
    GstBus *bus;

    QToolBar* mainToolbar = (QToolBar*) this->findChild<QToolBar*>( "mainToolBar" );
    QAction* action = (QAction*)this->findChild<QAction*>( "actionLoad_Episode" );
    mainToolbar->addAction(action);
    action = (QAction*)this->findChild<QAction*>( "actionSave_Episode" );
    mainToolbar->addAction(action);
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
     QLabel* lblLogo = (QLabel*) this->findChild<QLabel*>( "lblLogo" );
     if( !lblLogo )
     {
        QMessageBox::critical( this, "Error!", "Could not find \"lblLogo\" component."  );
        return;
     }

     lblLogo->setPixmap( QPixmap::fromImage( podcast.logo ) );
     lblLogo->update();
}

void QtCast::on_editPodcastName_editingFinished()
{
    QLineEdit* editPodcastTitle = (QLineEdit*) this->findChild<QLineEdit*>( "editPodcastTitle" );
    podcast.podcastTitle = editPodcastTitle->text();
}

void QtCast::on_editPodcastAuthor_editingFinished()
{
    QLineEdit* editAuthor = (QLineEdit*) this->findChild<QLineEdit*>( "editAuthor" );
    podcast.author = editAuthor->text();
}

void QtCast::on_spinBox_editingFinished()
{
    QSpinBox* spinEpisodeNumber = (QSpinBox*) this->findChild<QSpinBox*>( "spinBox" );
    podcast.episodeNumber = spinEpisodeNumber->value();
}

void QtCast::on_editEdpisodeTitle_editingFinished()
{
    QLineEdit* editEpisodeTitle = (QLineEdit*) this->findChild<QLineEdit*>( "editEdpisodeTitle" );
    podcast.episodeTitle = editEpisodeTitle->text();
}

void QtCast::on_actionExit_triggered()
{
    this->close();
}

void QtCast::on_btnAddTrack_clicked()
{
    QString fileName = QFileDialog::getOpenFileName(this,
        tr("Select Logo"), "", tr("Audio Files (*.ogg *.mp3 *.wav);;All files (*.*)"));

     // The user clicked "Cancel"
     if( 0 == fileName )
         return;

     AudioFile file( fileName );
}

void QtCast::on_actionAbout_triggered()
{
     QMessageBox msgBox;
     msgBox.setText("QTcast, a podcast utility written in QT and gstreamer.");
     msgBox.setInformativeText("About");
     msgBox.setStandardButtons(QMessageBox::Ok);
     msgBox.setDefaultButton(QMessageBox::Ok);
     msgBox.exec();
}
