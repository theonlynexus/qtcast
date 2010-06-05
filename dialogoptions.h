#ifndef DIALOGOPTIONS_H
#define DIALOGOPTIONS_H

#include <QDialog>
#include <QModelIndex>

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

private slots:
    void on_listSources_activated(QModelIndex index);
};

#endif // DIALOGOPTIONS_H
