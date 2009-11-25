#ifndef AUDIOFILELISTMODEL_H
#define AUDIOFILELISTMODEL_H

#include "audiofile.h"
#include "audiofilemeta.h"

#include <QAbstractListModel>
#include <QVariant>
#include <QList>


// class StringListModel : public QAbstractListModel
// {
//     Q_OBJECT
//
// public:
//     StringListModel(const QStringList &strings, QObject *parent = 0)
//         : QAbstractListModel(parent), stringList(strings) {}
//
//     int rowCount(const QModelIndex &parent = QModelIndex()) const;
//     QVariant data(const QModelIndex &index, int role) const;
//     QVariant headerData(int section, Qt::Orientation orientation,
//                         int role = Qt::DisplayRole) const;
//
// private:
//     QStringList stringList;
// };

class AudioFileListModel : public QAbstractListModel
{
    Q_OBJECT

public:
    AudioFileListModel(QObject *parent=0);
    AudioFileListModel(const QList<AudioFileMeta> &metas, QObject *parent = 0);

    QVariant data ( const QModelIndex & index, int role = Qt::DisplayRole ) const;
    QVariant headerData ( int section, Qt::Orientation orientation, int role = Qt::DisplayRole ) const;
    int rowCount ( const QModelIndex & parent = QModelIndex() ) const;

    Qt::ItemFlags flags ( const QModelIndex & index ) const;
    bool setData(const QModelIndex &index, const QVariant &variant, Qt::ItemDataRole role);

    bool insertRows(int position, int rows, const QModelIndex &index = QModelIndex());
    bool removeRows(int position, int rows, const QModelIndex &index = QModelIndex());
private:    
    QList<AudioFileMeta> list;
};

#endif // AUDIOFILELISTMODEL_H
