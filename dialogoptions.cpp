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
    {
        pantheios::log_DEBUG( "dialogOptions::on_listSources_activated: found ALSA plugin! ^.^");
        getAlsaCards();
    }
    else
    {
        pantheios::log_DEBUG( "dialogOptions::on_listSources_activated: no ALSA plugin." );
    }
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

QList<QString> dialogOptions::getAlsaCards()
{
//    for (add = 0; add + 1 < argc; i++) {
//            if (!strcmp(argv[add+1],"--help")) {
//                    usage();
//                    return 0;
//            }
//            if (argv[add+1][0] == '-') {
//                    add++;
//                    if (argv[add][1] == 'c') {
//                            card = snd_card_name(argv[++add]);
//                            if (card < 0) {
//                                    fprintf(stderr, "Invalid card: %s\n",argv[2]);
//                                    exit(1);
//                            }
//                    } else if (argv[add][1] == 'd') {
//                            device = atoi(argv[++add]);
//                            if (device < 0 || device > 128) {
//                                    fprintf(stderr, "Invalid device: %s\n",argv[2]);
//                                    exit(1);
//                            }
//                    } else if (argv[add][1] == 'h') {
//                            usage();
//                            return 0;
//                    } else if (argv[add][1] == 'p') {
//                            pathind = ++add;
//                    } else if (argv[add][1] == 'r') {
//                            the_mixer = new Mixer(card,device);
//                            if (the_mixer && the_mixer->Init()) read_config(the_mixer, pathind ? argv[pathind] : (const char *)NULL);
//                            delete the_mixer;
//                            return 0;
//                    } else if (argv[add][1] == 'w') {
//                            the_mixer = new Mixer(card,device);
//                            if (the_mixer && the_mixer->Init()) write_config(the_mixer);
//                            delete the_mixer;
//                            return 0;
//                    } else if (argv[add][1] == 'q') {
//                            quiet = 1;
//                    } else {
//                            fprintf(stderr, "Invalid option: %s\n", argv[add]+1);
//                            return 1;
//                    }
//            } else {
//                    break;
//            }
//    }
}

//gboolean  dialogOptions::alsasrcPluginFilter(GstPlugin *plugin, gpointer user_data)
//{
//    if( !strcmp( gst_plugin_get_name( plugin ), "alsasrc" ) )
//        return true;
//    else
//        return false;
//}
