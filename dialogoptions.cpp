#include "dialogoptions.h"
#include "ui_dialogoptions.h"

#include <gst/gst.h>

/* C++ program, so Pantheios init is automatic! */
#include <pantheios/pantheios.hpp>
#include <pantheios/frontends/fe.simple.h>
#include <pantheios/inserters/integer.hpp>


dialogOptions::dialogOptions(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dialogOptions)
{
    ui->setupUi(this);

    GstRegistry* registry = gst_registry_get_default();
    GstPlugin* plugin = gst_registry_find_plugin( registry,"alsa");

    if( plugin )
        pantheios::log_DEBUG( "dialogOptions::on_listSources_activated: found ALSA plugin! ^.^");
    else
        pantheios::log_DEBUG( "dialogOptions::on_listSources_activated: no ALSA plugin." );


}

dialogOptions::~dialogOptions()
{
    delete ui;
}

void dialogOptions::changeEvent(QEvent *e)
{
    QDialog::changeEvent(e);
    switch (e->type()) {
    case QEvent::LanguageChange:
        ui->retranslateUi(this);
        break;
    default:
        break;
    }
}

void dialogOptions::on_listSources_activated(QModelIndex index)
{

}

//gboolean  dialogOptions::alsasrcPluginFilter(GstPlugin *plugin, gpointer user_data)
//{
//    if( !strcmp( gst_plugin_get_name( plugin ), "alsasrc" ) )
//        return true;
//    else
//        return false;
//}
