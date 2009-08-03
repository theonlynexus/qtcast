#ifndef PODCAST_H
#define PODCAST_H

#include <QString>
#include <QStringList>
#include <QImage>

// Forward declaration of the QtCast class to be used
// for friendship
class QtCast;

class Podcast
{
private:
    Podcast();

    QString podcastTitle;
    QString episodeTitle;
    unsigned int episodeNumber;
    QString author;
    QImage logo;

    QStringList tracksFilenames;
    QStringList basesFilenames;
    /*
    numbers << "One" << "Two" << "Three" << "Four" << "Five";
    QAbstractItemModel *model = new StringListModel(numbers);
    QListView *view = new QListView;
    view->setModel(model);
    */

    // QtCast is a friend class, allowed to break
    // encapsulation
    friend class QtCast;
};

#endif // PODCAST_H
