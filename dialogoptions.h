#ifndef DIALOGOPTIONS_H
#define DIALOGOPTIONS_H

#include <QDialog>
#include <QModelIndex>
#include <QString>
#include <QList>
#include <qt/qaudiodeviceinfo.h>
#include <qt/qaudio.h>

namespace Ui {
    class dialogOptions;
}

class dialogOptions : public QDialog {
    Q_OBJECT
public:
    dialogOptions(QWidget *parent = 0);
    ~dialogOptions();

protected:
    void changeEvent(QEvent *e);

private:
    Ui::dialogOptions *ui;
    QList<QString> getAlsaCards();
    QList<QString> availableApis;
    QList<QString> availableCards;
    QList<QAudioDeviceInfo> qtInputCards;
    QList<QAudioDeviceInfo> qtOutputCards;

private slots:
    void on_listSources_activated(QModelIndex index);
};

#endif // DIALOGOPTIONS_H
