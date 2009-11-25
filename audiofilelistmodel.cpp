#include "audiofilelistmodel.h"

/* C++ program, so Pantheios init is automatic! */
#include <pantheios/pantheios.hpp>
#include <pantheios/frontends/fe.simple.h>
#include <pantheios/inserters/integer.hpp>

AudioFileListModel::AudioFileListModel(QObject *parent)
     : QAbstractListModel(parent)
{
}

AudioFileListModel::AudioFileListModel(const QList<AudioFileMeta> &metas
                                       , QObject *parent )
         : QAbstractListModel(parent)
{
    list = metas;
}

QVariant AudioFileListModel::data ( const QModelIndex & index, int role ) const
{
     if (!index.isValid())
        return QVariant();

    if (index.row() >= list.size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return ((AudioFileMeta)(list.at(index.row()))).title;
    else if (role == Qt::EditRole)
        return QVariant( QMetaType::type("AudioFileMeta"),
                         &list.at(index.row()) ) ;
    else
        return QVariant();
}

QVariant AudioFileListModel::headerData ( int section, Qt::Orientation orientation, int role ) const
{
    if (role != Qt::DisplayRole)
        return QVariant();

    if (orientation == Qt::Horizontal)
        return QString("Column %1").arg(section);
    else
        return QString("Row %1").arg(section);
}

int AudioFileListModel::rowCount(const QModelIndex &parent) const
{
    return list.count();
}

 Qt::ItemFlags AudioFileListModel::flags(const QModelIndex &index) const
 {
     if (!index.isValid())
         return Qt::ItemIsEnabled;

     return QAbstractItemModel::flags(index) | Qt::ItemIsEditable;
 }

bool AudioFileListModel::setData( const QModelIndex &index,
                                  const QVariant &variant,
                                  Qt::ItemDataRole role )
{
    pantheios::log_DEBUG( "AudioFileListModel::setData - Row title: ",
                       variant.value<AudioFileMeta>().title.toLocal8Bit().constData() );
    pantheios::log_DEBUG( "AudioFileListModel::setData - Row artist: ",
                       variant.value<AudioFileMeta>().artist.toLocal8Bit().constData() );
    pantheios::log_DEBUG( "AudioFileListModel::setData - Row album: ",
                       variant.value<AudioFileMeta>().album.toLocal8Bit().constData() );

    if (index.isValid() && role == Qt::EditRole)
    {
        if( variant.canConvert<AudioFileMeta>() )
        {
            list.replace(index.row(), variant.value<AudioFileMeta>());
            emit dataChanged(index, index);
            return true;
        }
    }
    return false;
}

bool AudioFileListModel::insertRows(int position, int rows, const QModelIndex &parent)
{
    beginInsertRows(QModelIndex(), position, position+rows-1);

    for (int row = 0; row < rows; ++row)
    {
        list.insert(position, AudioFileMeta());
    }

    endInsertRows();
    return true;
}

bool AudioFileListModel::removeRows(int position, int rows, const QModelIndex &parent)
{
    beginRemoveRows(QModelIndex(), position, position+rows-1);

    for (int row = 0; row < rows; ++row)
    {
        list.removeAt(position);
    }

    endRemoveRows();
    return true;
}

