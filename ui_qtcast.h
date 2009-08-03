/********************************************************************************
** Form generated from reading ui file 'qtcast.ui'
**
** Created: Tue Aug 4 04:51:08 2009
**      by: Qt User Interface Compiler version 4.5.0
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_QTCAST_H
#define UI_QTCAST_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QStatusBar>
#include <QtGui/QTabWidget>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtCastClass
{
public:
    QAction *actionLoad_Template;
    QAction *actionSave_Template;
    QAction *actionExit;
    QAction *actionExport_Episode;
    QAction *actionExport_Options;
    QAction *actionSave_Episode;
    QAction *actionLoad_Episode;
    QWidget *centralWidget;
    QTabWidget *tabSet;
    QWidget *Tab_PocastInfo;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *editPodcastName;
    QLabel *label_2;
    QLineEdit *editPodcastAuthor;
    QLabel *label_3;
    QSpinBox *spinBox;
    QLabel *label_4;
    QLineEdit *editEdpisodeTitle;
    QLabel *label_5;
    QLabel *lblLogo;
    QPushButton *btnSelectLogo;
    QWidget *tabTracks;
    QListView *listTracks;
    QPushButton *btnAddTrack;
    QPushButton *btnDelTrack;
    QGroupBox *groupBox;
    QCheckBox *checkBox;
    QWidget *tabBases;
    QListView *listBases;
    QPushButton *btnAddBase;
    QPushButton *btnDelBase;
    QGroupBox *groupBox_2;
    QCheckBox *checkBox_2;
    QWidget *tab_3;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_6;
    QLineEdit *lineEdit_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_8;
    QLineEdit *lineEdit_8;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QLabel *label_10;
    QProgressBar *progressBar;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QLabel *label_11;
    QProgressBar *progressBar_2;
    QSpacerItem *verticalSpacer_2;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuHelp;
    QMenu *menuExport;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *QtCastClass)
    {
        if (QtCastClass->objectName().isEmpty())
            QtCastClass->setObjectName(QString::fromUtf8("QtCastClass"));
        QtCastClass->resize(600, 516);
        actionLoad_Template = new QAction(QtCastClass);
        actionLoad_Template->setObjectName(QString::fromUtf8("actionLoad_Template"));
        actionSave_Template = new QAction(QtCastClass);
        actionSave_Template->setObjectName(QString::fromUtf8("actionSave_Template"));
        actionExit = new QAction(QtCastClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionExport_Episode = new QAction(QtCastClass);
        actionExport_Episode->setObjectName(QString::fromUtf8("actionExport_Episode"));
        actionExport_Options = new QAction(QtCastClass);
        actionExport_Options->setObjectName(QString::fromUtf8("actionExport_Options"));
        actionSave_Episode = new QAction(QtCastClass);
        actionSave_Episode->setObjectName(QString::fromUtf8("actionSave_Episode"));
        actionLoad_Episode = new QAction(QtCastClass);
        actionLoad_Episode->setObjectName(QString::fromUtf8("actionLoad_Episode"));
        centralWidget = new QWidget(QtCastClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        tabSet = new QTabWidget(centralWidget);
        tabSet->setObjectName(QString::fromUtf8("tabSet"));
        tabSet->setGeometry(QRect(10, 0, 541, 431));
        Tab_PocastInfo = new QWidget();
        Tab_PocastInfo->setObjectName(QString::fromUtf8("Tab_PocastInfo"));
        formLayoutWidget = new QWidget(Tab_PocastInfo);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 511, 341));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setMargin(11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        editPodcastName = new QLineEdit(formLayoutWidget);
        editPodcastName->setObjectName(QString::fromUtf8("editPodcastName"));

        formLayout->setWidget(0, QFormLayout::FieldRole, editPodcastName);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        editPodcastAuthor = new QLineEdit(formLayoutWidget);
        editPodcastAuthor->setObjectName(QString::fromUtf8("editPodcastAuthor"));

        formLayout->setWidget(1, QFormLayout::FieldRole, editPodcastAuthor);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        spinBox = new QSpinBox(formLayoutWidget);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        spinBox->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBox->setMaximum(99999);

        formLayout->setWidget(2, QFormLayout::FieldRole, spinBox);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        editEdpisodeTitle = new QLineEdit(formLayoutWidget);
        editEdpisodeTitle->setObjectName(QString::fromUtf8("editEdpisodeTitle"));

        formLayout->setWidget(3, QFormLayout::FieldRole, editEdpisodeTitle);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lblLogo = new QLabel(formLayoutWidget);
        lblLogo->setObjectName(QString::fromUtf8("lblLogo"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(100);
        sizePolicy.setVerticalStretch(100);
        sizePolicy.setHeightForWidth(lblLogo->sizePolicy().hasHeightForWidth());
        lblLogo->setSizePolicy(sizePolicy);
        lblLogo->setMinimumSize(QSize(100, 100));
        lblLogo->setMaximumSize(QSize(100, 100));
        lblLogo->setBaseSize(QSize(100, 100));
        lblLogo->setFrameShape(QFrame::StyledPanel);
        lblLogo->setFrameShadow(QFrame::Raised);
        lblLogo->setLineWidth(2);
        lblLogo->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(4, QFormLayout::FieldRole, lblLogo);

        btnSelectLogo = new QPushButton(formLayoutWidget);
        btnSelectLogo->setObjectName(QString::fromUtf8("btnSelectLogo"));

        formLayout->setWidget(5, QFormLayout::FieldRole, btnSelectLogo);

        tabSet->addTab(Tab_PocastInfo, QString());
        tabTracks = new QWidget();
        tabTracks->setObjectName(QString::fromUtf8("tabTracks"));
        listTracks = new QListView(tabTracks);
        listTracks->setObjectName(QString::fromUtf8("listTracks"));
        listTracks->setGeometry(QRect(10, 10, 261, 321));
        btnAddTrack = new QPushButton(tabTracks);
        btnAddTrack->setObjectName(QString::fromUtf8("btnAddTrack"));
        btnAddTrack->setGeometry(QRect(10, 350, 101, 28));
        btnDelTrack = new QPushButton(tabTracks);
        btnDelTrack->setObjectName(QString::fromUtf8("btnDelTrack"));
        btnDelTrack->setGeometry(QRect(170, 350, 101, 28));
        groupBox = new QGroupBox(tabTracks);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(290, 10, 231, 321));
        checkBox = new QCheckBox(groupBox);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(10, 20, 211, 23));
        tabSet->addTab(tabTracks, QString());
        tabBases = new QWidget();
        tabBases->setObjectName(QString::fromUtf8("tabBases"));
        listBases = new QListView(tabBases);
        listBases->setObjectName(QString::fromUtf8("listBases"));
        listBases->setGeometry(QRect(10, 10, 261, 331));
        btnAddBase = new QPushButton(tabBases);
        btnAddBase->setObjectName(QString::fromUtf8("btnAddBase"));
        btnAddBase->setGeometry(QRect(10, 350, 101, 28));
        btnDelBase = new QPushButton(tabBases);
        btnDelBase->setObjectName(QString::fromUtf8("btnDelBase"));
        btnDelBase->setGeometry(QRect(170, 350, 101, 28));
        groupBox_2 = new QGroupBox(tabBases);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(290, 10, 231, 331));
        checkBox_2 = new QCheckBox(groupBox_2);
        checkBox_2->setObjectName(QString::fromUtf8("checkBox_2"));
        checkBox_2->setGeometry(QRect(10, 20, 211, 23));
        tabSet->addTab(tabBases, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayoutWidget = new QWidget(tab_3);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 241, 271));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_6 = new QLabel(verticalLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_3->addWidget(label_6);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));

        horizontalLayout_3->addWidget(lineEdit_5);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_8 = new QLabel(verticalLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        lineEdit_8 = new QLineEdit(verticalLayoutWidget);
        lineEdit_8->setObjectName(QString::fromUtf8("lineEdit_8"));

        horizontalLayout_5->addWidget(lineEdit_8);

        label_9 = new QLabel(verticalLayoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_5->addWidget(label_9);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_5->addWidget(lineEdit_7);


        verticalLayout->addLayout(horizontalLayout_5);

        label_10 = new QLabel(verticalLayoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout->addWidget(label_10);

        progressBar = new QProgressBar(verticalLayoutWidget);
        progressBar->setObjectName(QString::fromUtf8("progressBar"));
        progressBar->setValue(24);

        verticalLayout->addWidget(progressBar);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_7 = new QLabel(verticalLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_4->addWidget(lineEdit_6);


        verticalLayout->addLayout(horizontalLayout_4);

        label_11 = new QLabel(verticalLayoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        verticalLayout->addWidget(label_11);

        progressBar_2 = new QProgressBar(verticalLayoutWidget);
        progressBar_2->setObjectName(QString::fromUtf8("progressBar_2"));
        progressBar_2->setValue(24);

        verticalLayout->addWidget(progressBar_2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayoutWidget_2 = new QWidget(tab_3);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(269, 9, 251, 381));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setMargin(11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        tabSet->addTab(tab_3, QString());
        QtCastClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(QtCastClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 28));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuExport = new QMenu(menuBar);
        menuExport->setObjectName(QString::fromUtf8("menuExport"));
        QtCastClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(QtCastClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        QtCastClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(QtCastClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        QtCastClass->setStatusBar(statusBar);
        toolBar = new QToolBar(QtCastClass);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        QtCastClass->addToolBar(Qt::TopToolBarArea, toolBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuExport->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuFile->addAction(actionLoad_Episode);
        menuFile->addAction(actionSave_Episode);
        menuFile->addSeparator();
        menuFile->addAction(actionLoad_Template);
        menuFile->addAction(actionSave_Template);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuExport->addAction(actionExport_Episode);
        menuExport->addSeparator();
        menuExport->addAction(actionExport_Options);

        retranslateUi(QtCastClass);

        tabSet->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QtCastClass);
    } // setupUi

    void retranslateUi(QMainWindow *QtCastClass)
    {
        QtCastClass->setWindowTitle(QApplication::translate("QtCastClass", "QtCast", 0, QApplication::UnicodeUTF8));
        actionLoad_Template->setText(QApplication::translate("QtCastClass", "Load Template", 0, QApplication::UnicodeUTF8));
        actionSave_Template->setText(QApplication::translate("QtCastClass", "Save Template", 0, QApplication::UnicodeUTF8));
        actionExit->setText(QApplication::translate("QtCastClass", "Exit", 0, QApplication::UnicodeUTF8));
        actionExport_Episode->setText(QApplication::translate("QtCastClass", "Export Episode", 0, QApplication::UnicodeUTF8));
        actionExport_Options->setText(QApplication::translate("QtCastClass", "Export Options", 0, QApplication::UnicodeUTF8));
        actionSave_Episode->setText(QApplication::translate("QtCastClass", "Save Episode", 0, QApplication::UnicodeUTF8));
        actionLoad_Episode->setText(QApplication::translate("QtCastClass", "Load Episode", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QtCastClass", "Podcast name:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QtCastClass", "Author:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QtCastClass", "Episode # and title:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QtCastClass", "Episode title:", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QtCastClass", "Logo:", 0, QApplication::UnicodeUTF8));
        lblLogo->setText(QApplication::translate("QtCastClass", "No Logo", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        btnSelectLogo->setToolTip(QApplication::translate("QtCastClass", "Click to select the logo file", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        btnSelectLogo->setText(QApplication::translate("QtCastClass", "Select Logo", 0, QApplication::UnicodeUTF8));
        tabSet->setTabText(tabSet->indexOf(Tab_PocastInfo), QApplication::translate("QtCastClass", "Podcast info", 0, QApplication::UnicodeUTF8));
        btnAddTrack->setText(QApplication::translate("QtCastClass", "Add track", 0, QApplication::UnicodeUTF8));
        btnDelTrack->setText(QApplication::translate("QtCastClass", "Del track", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("QtCastClass", "Options", 0, QApplication::UnicodeUTF8));
        checkBox->setText(QApplication::translate("QtCastClass", "Normalize output levels", 0, QApplication::UnicodeUTF8));
        tabSet->setTabText(tabSet->indexOf(tabTracks), QApplication::translate("QtCastClass", "Tracks", 0, QApplication::UnicodeUTF8));
        btnAddBase->setText(QApplication::translate("QtCastClass", "Add base", 0, QApplication::UnicodeUTF8));
        btnDelBase->setText(QApplication::translate("QtCastClass", "Del base", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("QtCastClass", "Options", 0, QApplication::UnicodeUTF8));
        checkBox_2->setText(QApplication::translate("QtCastClass", "Normalize output levels", 0, QApplication::UnicodeUTF8));
        tabSet->setTabText(tabSet->indexOf(tabBases), QApplication::translate("QtCastClass", "Bases", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QtCastClass", "Current track:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("QtCastClass", "Track time:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("QtCastClass", "Cur. time:", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("QtCastClass", "Track percentage", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("QtCastClass", "Current base:", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("QtCastClass", "Base loop percentage", 0, QApplication::UnicodeUTF8));
        tabSet->setTabText(tabSet->indexOf(tab_3), QApplication::translate("QtCastClass", "Record", 0, QApplication::UnicodeUTF8));
        menuFile->setTitle(QApplication::translate("QtCastClass", "File", 0, QApplication::UnicodeUTF8));
        menuHelp->setTitle(QApplication::translate("QtCastClass", "Help", 0, QApplication::UnicodeUTF8));
        menuExport->setTitle(QApplication::translate("QtCastClass", "Export", 0, QApplication::UnicodeUTF8));
        toolBar->setWindowTitle(QApplication::translate("QtCastClass", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QtCastClass: public Ui_QtCastClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCAST_H
