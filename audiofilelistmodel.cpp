#include "audiofilelistmodel.h"

AudioFileListModel::AudioFileListModel(QObject *parent)
     : QAbstractListModel(parent)
{
}

AudioFileListModel::AudioFileListModel(const QList<AudioFile> &files, QObject *parent )
         : QAbstractListModel(parent)
{
    list = files;
}

QVariant AudioFileListModel::data ( const QModelIndex & index, int role ) const
{
     if (!index.isValid())
        return QVariant();

    if (index.row() >= list.size())
        return QVariant();

    if (role == Qt::DisplayRole)
        return ((AudioFile)list.at(index.row())).Title();
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

bool AudioFileListModel::setData(const QModelIndex &index, const QVariant &variant, Qt::ItemDataRole role)
{
    if (index.isValid() && role == Qt::EditRole)
    {
        list.replace(index.row(), variant.value<AudioFile>());
        emit dataChanged(index, index);
        return true;
    }
    return false;
}

bool AudioFileListModel::insertRows(int position, int rows, const QModelIndex &parent)
{
    beginInsertRows(QModelIndex(), position, position+rows-1);

    for (int row = 0; row < rows; ++row)
    {
        list.insert(position, AudioFile());
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


Q_DECLARE_METATYPE(AudioFile)
