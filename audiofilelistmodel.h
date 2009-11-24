#ifndef AUDIOFILELISTMODEL_H
#define AUDIOFILELISTMODEL_H

#include "audiofile.h"

#include <QAbstractListModel>
#include <QVariant>
#include <QList>


class AudioFileListModel : public QAbstractListModel
{
    Q_OBJECT

public:
    AudioFileListModel(const QList<AudioFile> &files, QObject *parent = 0)
         : QAbstractListModel(parent), list(files) {}
//    Qt::ItemFlags flags ( const QModelIndex & index ) const;
//    bool setData(const QModelIndex &index, const QVariant &value, int role);
    QVariant data ( const QModelIndex & index, int role = Qt::DisplayRole ) const;
    QVariant headerData ( int section, Qt::Orientation orientation, int role = Qt::DisplayRole ) const;
    int rowCount ( const QModelIndex & parent = QModelIndex() ) const;

    bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex());
    bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex());
private:    
    QList<AudioFile> list;
};

#endif // AUDIOFILELISTMODEL_H
