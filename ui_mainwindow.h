/********************************************************************************
** Form generated from reading ui file 'mainwindow.ui'
**
** Created: Wed Sep 9 06:41:09 2009
**      by: Qt User Interface Compiler version 4.5.2
**
** WARNING! All changes made in this file will be lost when recompiling ui file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QGridLayout>
#include <QHeaderView>
#include <QLineEdit>
#include <QMainWindow>
#include <QMenu>
#include <QMenuBar>
#include <QPushButton>
#include <QSpacerItem>
#include <QStatusBar>
#include <QToolBar>
#include <QVBoxLayout>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_ber_das_Programm;
    QAction *actionProgramm_b_eenden;
    QAction *action_Reset;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QGridLayout *gridLayout;
    QPushButton *pbAgrimony;
    QLineEdit *leAgrimony;
    QSpacerItem *horizontalSpacer;
    QPushButton *pbMimulus;
    QLineEdit *leMimulus;
    QSpacerItem *horizontalSpacer_34;
    QPushButton *pbAspen;
    QLineEdit *leAspen;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pbMustard;
    QLineEdit *leMustard;
    QSpacerItem *horizontalSpacer_53;
    QPushButton *pbBeech;
    QLineEdit *leBeech;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pbOak;
    QLineEdit *leOak;
    QSpacerItem *horizontalSpacer_38;
    QPushButton *pbCentaury;
    QLineEdit *leCentaury;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pbOlive;
    QLineEdit *leOlive;
    QSpacerItem *horizontalSpacer_39;
    QPushButton *pbCerato;
    QLineEdit *leCerato;
    QSpacerItem *horizontalSpacer_7;
    QPushButton *pbPine;
    QLineEdit *lePine;
    QSpacerItem *horizontalSpacer_33;
    QPushButton *pbCherryPlum;
    QLineEdit *leCherryPlum;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *pbRedChestnut;
    QLineEdit *leRedChestnut;
    QSpacerItem *horizontalSpacer_37;
    QPushButton *pbChestnutBud;
    QLineEdit *leChestnutBud;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *pbRockRose;
    QLineEdit *leRockRose;
    QSpacerItem *horizontalSpacer_58;
    QPushButton *pbChicory;
    QLineEdit *leChicory;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *pbRockWater;
    QLineEdit *leRockWater;
    QSpacerItem *horizontalSpacer_31;
    QPushButton *pbClematis;
    QLineEdit *leClematis;
    QSpacerItem *horizontalSpacer_18;
    QPushButton *pbSclerantus;
    QLineEdit *leSclerantus;
    QSpacerItem *horizontalSpacer_46;
    QPushButton *pbCrabApple;
    QLineEdit *leCrabApple;
    QSpacerItem *horizontalSpacer_17;
    QPushButton *pbStarOfBethlehem;
    QLineEdit *leStarOfBethlehem;
    QSpacerItem *horizontalSpacer_47;
    QPushButton *pbElm;
    QLineEdit *leElm;
    QSpacerItem *horizontalSpacer_23;
    QPushButton *pbSweetChestnut;
    QLineEdit *leSweetChestnut;
    QSpacerItem *horizontalSpacer_54;
    QPushButton *pbGentian;
    QLineEdit *leGentian;
    QSpacerItem *horizontalSpacer_21;
    QPushButton *pbVervain;
    QLineEdit *leVervain;
    QSpacerItem *horizontalSpacer_36;
    QPushButton *pbGorse;
    QLineEdit *leGorse;
    QSpacerItem *horizontalSpacer_15;
    QPushButton *pbVine;
    QLineEdit *leVine;
    QSpacerItem *horizontalSpacer_55;
    QPushButton *pbHeather;
    QLineEdit *leHeather;
    QSpacerItem *horizontalSpacer_16;
    QPushButton *pbWalnut;
    QLineEdit *leWalnut;
    QSpacerItem *horizontalSpacer_44;
    QPushButton *pbHolly;
    QLineEdit *leHolly;
    QSpacerItem *horizontalSpacer_13;
    QPushButton *pbWaterViolet;
    QLineEdit *leWaterViolet;
    QSpacerItem *horizontalSpacer_42;
    QPushButton *pbHoneysuckle;
    QLineEdit *leHoneysuckle;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *pbWhiteChestnut;
    QLineEdit *leWhiteChestnut;
    QSpacerItem *horizontalSpacer_43;
    QPushButton *pbHornbeam;
    QLineEdit *leHornbeam;
    QSpacerItem *horizontalSpacer_26;
    QPushButton *pbWildOat;
    QLineEdit *leWildOat;
    QSpacerItem *horizontalSpacer_49;
    QPushButton *pbImpatiens;
    QLineEdit *leImpatiens;
    QSpacerItem *horizontalSpacer_28;
    QPushButton *pbWildRose;
    QLineEdit *leWildRose;
    QSpacerItem *horizontalSpacer_41;
    QPushButton *pbLarch;
    QLineEdit *leLarch;
    QSpacerItem *horizontalSpacer_29;
    QPushButton *pbWillow;
    QLineEdit *leWillow;
    QSpacerItem *horizontalSpacer_48;
    QSpacerItem *verticalSpacer;
    QPushButton *pbReset;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu_Datei;
    QMenu *menu_Hilfe;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(454, 759);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/icons/bovo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        action_ber_das_Programm = new QAction(MainWindow);
        action_ber_das_Programm->setObjectName(QString::fromUtf8("action_ber_das_Programm"));
        actionProgramm_b_eenden = new QAction(MainWindow);
        actionProgramm_b_eenden->setObjectName(QString::fromUtf8("actionProgramm_b_eenden"));
        action_Reset = new QAction(MainWindow);
        action_Reset->setObjectName(QString::fromUtf8("action_Reset"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setMargin(11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pbAgrimony = new QPushButton(centralWidget);
        pbAgrimony->setObjectName(QString::fromUtf8("pbAgrimony"));

        gridLayout->addWidget(pbAgrimony, 0, 0, 1, 1);

        leAgrimony = new QLineEdit(centralWidget);
        leAgrimony->setObjectName(QString::fromUtf8("leAgrimony"));
        leAgrimony->setLayoutDirection(Qt::LeftToRight);
        leAgrimony->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leAgrimony->setReadOnly(false);

        gridLayout->addWidget(leAgrimony, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 0, 2, 1, 1);

        pbMimulus = new QPushButton(centralWidget);
        pbMimulus->setObjectName(QString::fromUtf8("pbMimulus"));

        gridLayout->addWidget(pbMimulus, 0, 3, 1, 1);

        leMimulus = new QLineEdit(centralWidget);
        leMimulus->setObjectName(QString::fromUtf8("leMimulus"));
        leMimulus->setLayoutDirection(Qt::LeftToRight);
        leMimulus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leMimulus->setReadOnly(true);

        gridLayout->addWidget(leMimulus, 0, 4, 1, 1);

        horizontalSpacer_34 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_34, 0, 5, 1, 1);

        pbAspen = new QPushButton(centralWidget);
        pbAspen->setObjectName(QString::fromUtf8("pbAspen"));

        gridLayout->addWidget(pbAspen, 1, 0, 1, 1);

        leAspen = new QLineEdit(centralWidget);
        leAspen->setObjectName(QString::fromUtf8("leAspen"));
        leAspen->setLayoutDirection(Qt::LeftToRight);
        leAspen->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leAspen->setReadOnly(true);

        gridLayout->addWidget(leAspen, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        pbMustard = new QPushButton(centralWidget);
        pbMustard->setObjectName(QString::fromUtf8("pbMustard"));

        gridLayout->addWidget(pbMustard, 1, 3, 1, 1);

        leMustard = new QLineEdit(centralWidget);
        leMustard->setObjectName(QString::fromUtf8("leMustard"));
        leMustard->setLayoutDirection(Qt::LeftToRight);
        leMustard->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leMustard->setReadOnly(true);

        gridLayout->addWidget(leMustard, 1, 4, 1, 1);

        horizontalSpacer_53 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_53, 1, 5, 1, 1);

        pbBeech = new QPushButton(centralWidget);
        pbBeech->setObjectName(QString::fromUtf8("pbBeech"));

        gridLayout->addWidget(pbBeech, 2, 0, 1, 1);

        leBeech = new QLineEdit(centralWidget);
        leBeech->setObjectName(QString::fromUtf8("leBeech"));
        leBeech->setLayoutDirection(Qt::LeftToRight);
        leBeech->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leBeech->setReadOnly(true);

        gridLayout->addWidget(leBeech, 2, 1, 1, 1);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_5, 2, 2, 1, 1);

        pbOak = new QPushButton(centralWidget);
        pbOak->setObjectName(QString::fromUtf8("pbOak"));

        gridLayout->addWidget(pbOak, 2, 3, 1, 1);

        leOak = new QLineEdit(centralWidget);
        leOak->setObjectName(QString::fromUtf8("leOak"));
        leOak->setLayoutDirection(Qt::LeftToRight);
        leOak->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leOak->setReadOnly(true);

        gridLayout->addWidget(leOak, 2, 4, 1, 1);

        horizontalSpacer_38 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_38, 2, 5, 1, 1);

        pbCentaury = new QPushButton(centralWidget);
        pbCentaury->setObjectName(QString::fromUtf8("pbCentaury"));

        gridLayout->addWidget(pbCentaury, 3, 0, 1, 1);

        leCentaury = new QLineEdit(centralWidget);
        leCentaury->setObjectName(QString::fromUtf8("leCentaury"));
        leCentaury->setLayoutDirection(Qt::LeftToRight);
        leCentaury->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leCentaury->setReadOnly(true);

        gridLayout->addWidget(leCentaury, 3, 1, 1, 1);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_4, 3, 2, 1, 1);

        pbOlive = new QPushButton(centralWidget);
        pbOlive->setObjectName(QString::fromUtf8("pbOlive"));

        gridLayout->addWidget(pbOlive, 3, 3, 1, 1);

        leOlive = new QLineEdit(centralWidget);
        leOlive->setObjectName(QString::fromUtf8("leOlive"));
        leOlive->setLayoutDirection(Qt::LeftToRight);
        leOlive->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leOlive->setReadOnly(true);

        gridLayout->addWidget(leOlive, 3, 4, 1, 1);

        horizontalSpacer_39 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_39, 3, 5, 1, 1);

        pbCerato = new QPushButton(centralWidget);
        pbCerato->setObjectName(QString::fromUtf8("pbCerato"));

        gridLayout->addWidget(pbCerato, 4, 0, 1, 1);

        leCerato = new QLineEdit(centralWidget);
        leCerato->setObjectName(QString::fromUtf8("leCerato"));
        leCerato->setLayoutDirection(Qt::LeftToRight);
        leCerato->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leCerato->setReadOnly(true);

        gridLayout->addWidget(leCerato, 4, 1, 1, 1);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_7, 4, 2, 1, 1);

        pbPine = new QPushButton(centralWidget);
        pbPine->setObjectName(QString::fromUtf8("pbPine"));

        gridLayout->addWidget(pbPine, 4, 3, 1, 1);

        lePine = new QLineEdit(centralWidget);
        lePine->setObjectName(QString::fromUtf8("lePine"));
        lePine->setLayoutDirection(Qt::LeftToRight);
        lePine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        lePine->setReadOnly(true);

        gridLayout->addWidget(lePine, 4, 4, 1, 1);

        horizontalSpacer_33 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_33, 4, 5, 1, 1);

        pbCherryPlum = new QPushButton(centralWidget);
        pbCherryPlum->setObjectName(QString::fromUtf8("pbCherryPlum"));

        gridLayout->addWidget(pbCherryPlum, 5, 0, 1, 1);

        leCherryPlum = new QLineEdit(centralWidget);
        leCherryPlum->setObjectName(QString::fromUtf8("leCherryPlum"));
        leCherryPlum->setLayoutDirection(Qt::LeftToRight);
        leCherryPlum->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leCherryPlum->setReadOnly(true);

        gridLayout->addWidget(leCherryPlum, 5, 1, 1, 1);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_8, 5, 2, 1, 1);

        pbRedChestnut = new QPushButton(centralWidget);
        pbRedChestnut->setObjectName(QString::fromUtf8("pbRedChestnut"));

        gridLayout->addWidget(pbRedChestnut, 5, 3, 1, 1);

        leRedChestnut = new QLineEdit(centralWidget);
        leRedChestnut->setObjectName(QString::fromUtf8("leRedChestnut"));
        leRedChestnut->setLayoutDirection(Qt::LeftToRight);
        leRedChestnut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leRedChestnut->setReadOnly(true);

        gridLayout->addWidget(leRedChestnut, 5, 4, 1, 1);

        horizontalSpacer_37 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_37, 5, 5, 1, 1);

        pbChestnutBud = new QPushButton(centralWidget);
        pbChestnutBud->setObjectName(QString::fromUtf8("pbChestnutBud"));

        gridLayout->addWidget(pbChestnutBud, 6, 0, 1, 1);

        leChestnutBud = new QLineEdit(centralWidget);
        leChestnutBud->setObjectName(QString::fromUtf8("leChestnutBud"));
        leChestnutBud->setLayoutDirection(Qt::LeftToRight);
        leChestnutBud->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leChestnutBud->setReadOnly(true);

        gridLayout->addWidget(leChestnutBud, 6, 1, 1, 1);

        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_10, 6, 2, 1, 1);

        pbRockRose = new QPushButton(centralWidget);
        pbRockRose->setObjectName(QString::fromUtf8("pbRockRose"));

        gridLayout->addWidget(pbRockRose, 6, 3, 1, 1);

        leRockRose = new QLineEdit(centralWidget);
        leRockRose->setObjectName(QString::fromUtf8("leRockRose"));
        leRockRose->setLayoutDirection(Qt::LeftToRight);
        leRockRose->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leRockRose->setReadOnly(true);

        gridLayout->addWidget(leRockRose, 6, 4, 1, 1);

        horizontalSpacer_58 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_58, 6, 5, 1, 1);

        pbChicory = new QPushButton(centralWidget);
        pbChicory->setObjectName(QString::fromUtf8("pbChicory"));

        gridLayout->addWidget(pbChicory, 7, 0, 1, 1);

        leChicory = new QLineEdit(centralWidget);
        leChicory->setObjectName(QString::fromUtf8("leChicory"));
        leChicory->setLayoutDirection(Qt::LeftToRight);
        leChicory->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leChicory->setReadOnly(true);

        gridLayout->addWidget(leChicory, 7, 1, 1, 1);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_9, 7, 2, 1, 1);

        pbRockWater = new QPushButton(centralWidget);
        pbRockWater->setObjectName(QString::fromUtf8("pbRockWater"));

        gridLayout->addWidget(pbRockWater, 7, 3, 1, 1);

        leRockWater = new QLineEdit(centralWidget);
        leRockWater->setObjectName(QString::fromUtf8("leRockWater"));
        leRockWater->setLayoutDirection(Qt::LeftToRight);
        leRockWater->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leRockWater->setReadOnly(true);

        gridLayout->addWidget(leRockWater, 7, 4, 1, 1);

        horizontalSpacer_31 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_31, 7, 5, 1, 1);

        pbClematis = new QPushButton(centralWidget);
        pbClematis->setObjectName(QString::fromUtf8("pbClematis"));

        gridLayout->addWidget(pbClematis, 8, 0, 1, 1);

        leClematis = new QLineEdit(centralWidget);
        leClematis->setObjectName(QString::fromUtf8("leClematis"));
        leClematis->setLayoutDirection(Qt::LeftToRight);
        leClematis->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leClematis->setReadOnly(true);

        gridLayout->addWidget(leClematis, 8, 1, 1, 1);

        horizontalSpacer_18 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_18, 8, 2, 1, 1);

        pbSclerantus = new QPushButton(centralWidget);
        pbSclerantus->setObjectName(QString::fromUtf8("pbSclerantus"));

        gridLayout->addWidget(pbSclerantus, 8, 3, 1, 1);

        leSclerantus = new QLineEdit(centralWidget);
        leSclerantus->setObjectName(QString::fromUtf8("leSclerantus"));
        leSclerantus->setLayoutDirection(Qt::LeftToRight);
        leSclerantus->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leSclerantus->setReadOnly(true);

        gridLayout->addWidget(leSclerantus, 8, 4, 1, 1);

        horizontalSpacer_46 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_46, 8, 5, 1, 1);

        pbCrabApple = new QPushButton(centralWidget);
        pbCrabApple->setObjectName(QString::fromUtf8("pbCrabApple"));

        gridLayout->addWidget(pbCrabApple, 9, 0, 1, 1);

        leCrabApple = new QLineEdit(centralWidget);
        leCrabApple->setObjectName(QString::fromUtf8("leCrabApple"));
        leCrabApple->setLayoutDirection(Qt::LeftToRight);
        leCrabApple->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leCrabApple->setReadOnly(true);

        gridLayout->addWidget(leCrabApple, 9, 1, 1, 1);

        horizontalSpacer_17 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_17, 9, 2, 1, 1);

        pbStarOfBethlehem = new QPushButton(centralWidget);
        pbStarOfBethlehem->setObjectName(QString::fromUtf8("pbStarOfBethlehem"));

        gridLayout->addWidget(pbStarOfBethlehem, 9, 3, 1, 1);

        leStarOfBethlehem = new QLineEdit(centralWidget);
        leStarOfBethlehem->setObjectName(QString::fromUtf8("leStarOfBethlehem"));
        leStarOfBethlehem->setLayoutDirection(Qt::LeftToRight);
        leStarOfBethlehem->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leStarOfBethlehem->setReadOnly(true);

        gridLayout->addWidget(leStarOfBethlehem, 9, 4, 1, 1);

        horizontalSpacer_47 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_47, 9, 5, 1, 1);

        pbElm = new QPushButton(centralWidget);
        pbElm->setObjectName(QString::fromUtf8("pbElm"));

        gridLayout->addWidget(pbElm, 10, 0, 1, 1);

        leElm = new QLineEdit(centralWidget);
        leElm->setObjectName(QString::fromUtf8("leElm"));
        leElm->setLayoutDirection(Qt::LeftToRight);
        leElm->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leElm->setReadOnly(true);

        gridLayout->addWidget(leElm, 10, 1, 1, 1);

        horizontalSpacer_23 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_23, 10, 2, 1, 1);

        pbSweetChestnut = new QPushButton(centralWidget);
        pbSweetChestnut->setObjectName(QString::fromUtf8("pbSweetChestnut"));

        gridLayout->addWidget(pbSweetChestnut, 10, 3, 1, 1);

        leSweetChestnut = new QLineEdit(centralWidget);
        leSweetChestnut->setObjectName(QString::fromUtf8("leSweetChestnut"));
        leSweetChestnut->setLayoutDirection(Qt::LeftToRight);
        leSweetChestnut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leSweetChestnut->setReadOnly(true);

        gridLayout->addWidget(leSweetChestnut, 10, 4, 1, 1);

        horizontalSpacer_54 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_54, 10, 5, 1, 1);

        pbGentian = new QPushButton(centralWidget);
        pbGentian->setObjectName(QString::fromUtf8("pbGentian"));

        gridLayout->addWidget(pbGentian, 11, 0, 1, 1);

        leGentian = new QLineEdit(centralWidget);
        leGentian->setObjectName(QString::fromUtf8("leGentian"));
        leGentian->setLayoutDirection(Qt::LeftToRight);
        leGentian->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leGentian->setReadOnly(true);

        gridLayout->addWidget(leGentian, 11, 1, 1, 1);

        horizontalSpacer_21 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_21, 11, 2, 1, 1);

        pbVervain = new QPushButton(centralWidget);
        pbVervain->setObjectName(QString::fromUtf8("pbVervain"));

        gridLayout->addWidget(pbVervain, 11, 3, 1, 1);

        leVervain = new QLineEdit(centralWidget);
        leVervain->setObjectName(QString::fromUtf8("leVervain"));
        leVervain->setLayoutDirection(Qt::LeftToRight);
        leVervain->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leVervain->setReadOnly(true);

        gridLayout->addWidget(leVervain, 11, 4, 1, 1);

        horizontalSpacer_36 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_36, 11, 5, 1, 1);

        pbGorse = new QPushButton(centralWidget);
        pbGorse->setObjectName(QString::fromUtf8("pbGorse"));

        gridLayout->addWidget(pbGorse, 12, 0, 1, 1);

        leGorse = new QLineEdit(centralWidget);
        leGorse->setObjectName(QString::fromUtf8("leGorse"));
        leGorse->setLayoutDirection(Qt::LeftToRight);
        leGorse->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leGorse->setReadOnly(true);

        gridLayout->addWidget(leGorse, 12, 1, 1, 1);

        horizontalSpacer_15 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_15, 12, 2, 1, 1);

        pbVine = new QPushButton(centralWidget);
        pbVine->setObjectName(QString::fromUtf8("pbVine"));

        gridLayout->addWidget(pbVine, 12, 3, 1, 1);

        leVine = new QLineEdit(centralWidget);
        leVine->setObjectName(QString::fromUtf8("leVine"));
        leVine->setLayoutDirection(Qt::LeftToRight);
        leVine->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leVine->setReadOnly(true);

        gridLayout->addWidget(leVine, 12, 4, 1, 1);

        horizontalSpacer_55 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_55, 12, 5, 1, 1);

        pbHeather = new QPushButton(centralWidget);
        pbHeather->setObjectName(QString::fromUtf8("pbHeather"));

        gridLayout->addWidget(pbHeather, 13, 0, 1, 1);

        leHeather = new QLineEdit(centralWidget);
        leHeather->setObjectName(QString::fromUtf8("leHeather"));
        leHeather->setLayoutDirection(Qt::LeftToRight);
        leHeather->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leHeather->setReadOnly(true);

        gridLayout->addWidget(leHeather, 13, 1, 1, 1);

        horizontalSpacer_16 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_16, 13, 2, 1, 1);

        pbWalnut = new QPushButton(centralWidget);
        pbWalnut->setObjectName(QString::fromUtf8("pbWalnut"));

        gridLayout->addWidget(pbWalnut, 13, 3, 1, 1);

        leWalnut = new QLineEdit(centralWidget);
        leWalnut->setObjectName(QString::fromUtf8("leWalnut"));
        leWalnut->setLayoutDirection(Qt::LeftToRight);
        leWalnut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leWalnut->setReadOnly(true);

        gridLayout->addWidget(leWalnut, 13, 4, 1, 1);

        horizontalSpacer_44 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_44, 13, 5, 1, 1);

        pbHolly = new QPushButton(centralWidget);
        pbHolly->setObjectName(QString::fromUtf8("pbHolly"));

        gridLayout->addWidget(pbHolly, 14, 0, 1, 1);

        leHolly = new QLineEdit(centralWidget);
        leHolly->setObjectName(QString::fromUtf8("leHolly"));
        leHolly->setLayoutDirection(Qt::LeftToRight);
        leHolly->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leHolly->setReadOnly(true);

        gridLayout->addWidget(leHolly, 14, 1, 1, 1);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_13, 14, 2, 1, 1);

        pbWaterViolet = new QPushButton(centralWidget);
        pbWaterViolet->setObjectName(QString::fromUtf8("pbWaterViolet"));

        gridLayout->addWidget(pbWaterViolet, 14, 3, 1, 1);

        leWaterViolet = new QLineEdit(centralWidget);
        leWaterViolet->setObjectName(QString::fromUtf8("leWaterViolet"));
        leWaterViolet->setLayoutDirection(Qt::LeftToRight);
        leWaterViolet->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leWaterViolet->setReadOnly(true);

        gridLayout->addWidget(leWaterViolet, 14, 4, 1, 1);

        horizontalSpacer_42 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_42, 14, 5, 1, 1);

        pbHoneysuckle = new QPushButton(centralWidget);
        pbHoneysuckle->setObjectName(QString::fromUtf8("pbHoneysuckle"));

        gridLayout->addWidget(pbHoneysuckle, 15, 0, 1, 1);

        leHoneysuckle = new QLineEdit(centralWidget);
        leHoneysuckle->setObjectName(QString::fromUtf8("leHoneysuckle"));
        leHoneysuckle->setLayoutDirection(Qt::LeftToRight);
        leHoneysuckle->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leHoneysuckle->setReadOnly(true);

        gridLayout->addWidget(leHoneysuckle, 15, 1, 1, 1);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_14, 15, 2, 1, 1);

        pbWhiteChestnut = new QPushButton(centralWidget);
        pbWhiteChestnut->setObjectName(QString::fromUtf8("pbWhiteChestnut"));

        gridLayout->addWidget(pbWhiteChestnut, 15, 3, 1, 1);

        leWhiteChestnut = new QLineEdit(centralWidget);
        leWhiteChestnut->setObjectName(QString::fromUtf8("leWhiteChestnut"));
        leWhiteChestnut->setLayoutDirection(Qt::LeftToRight);
        leWhiteChestnut->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leWhiteChestnut->setReadOnly(true);

        gridLayout->addWidget(leWhiteChestnut, 15, 4, 1, 1);

        horizontalSpacer_43 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_43, 15, 5, 1, 1);

        pbHornbeam = new QPushButton(centralWidget);
        pbHornbeam->setObjectName(QString::fromUtf8("pbHornbeam"));

        gridLayout->addWidget(pbHornbeam, 16, 0, 1, 1);

        leHornbeam = new QLineEdit(centralWidget);
        leHornbeam->setObjectName(QString::fromUtf8("leHornbeam"));
        leHornbeam->setLayoutDirection(Qt::LeftToRight);
        leHornbeam->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leHornbeam->setReadOnly(true);

        gridLayout->addWidget(leHornbeam, 16, 1, 1, 1);

        horizontalSpacer_26 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_26, 16, 2, 1, 1);

        pbWildOat = new QPushButton(centralWidget);
        pbWildOat->setObjectName(QString::fromUtf8("pbWildOat"));

        gridLayout->addWidget(pbWildOat, 16, 3, 1, 1);

        leWildOat = new QLineEdit(centralWidget);
        leWildOat->setObjectName(QString::fromUtf8("leWildOat"));
        leWildOat->setLayoutDirection(Qt::LeftToRight);
        leWildOat->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leWildOat->setReadOnly(true);

        gridLayout->addWidget(leWildOat, 16, 4, 1, 1);

        horizontalSpacer_49 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_49, 16, 5, 1, 1);

        pbImpatiens = new QPushButton(centralWidget);
        pbImpatiens->setObjectName(QString::fromUtf8("pbImpatiens"));

        gridLayout->addWidget(pbImpatiens, 17, 0, 1, 1);

        leImpatiens = new QLineEdit(centralWidget);
        leImpatiens->setObjectName(QString::fromUtf8("leImpatiens"));
        leImpatiens->setLayoutDirection(Qt::LeftToRight);
        leImpatiens->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leImpatiens->setReadOnly(true);

        gridLayout->addWidget(leImpatiens, 17, 1, 1, 1);

        horizontalSpacer_28 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_28, 17, 2, 1, 1);

        pbWildRose = new QPushButton(centralWidget);
        pbWildRose->setObjectName(QString::fromUtf8("pbWildRose"));

        gridLayout->addWidget(pbWildRose, 17, 3, 1, 1);

        leWildRose = new QLineEdit(centralWidget);
        leWildRose->setObjectName(QString::fromUtf8("leWildRose"));
        leWildRose->setLayoutDirection(Qt::LeftToRight);
        leWildRose->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leWildRose->setReadOnly(true);

        gridLayout->addWidget(leWildRose, 17, 4, 1, 1);

        horizontalSpacer_41 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_41, 17, 5, 1, 1);

        pbLarch = new QPushButton(centralWidget);
        pbLarch->setObjectName(QString::fromUtf8("pbLarch"));

        gridLayout->addWidget(pbLarch, 18, 0, 1, 1);

        leLarch = new QLineEdit(centralWidget);
        leLarch->setObjectName(QString::fromUtf8("leLarch"));
        leLarch->setLayoutDirection(Qt::LeftToRight);
        leLarch->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leLarch->setReadOnly(true);

        gridLayout->addWidget(leLarch, 18, 1, 1, 1);

        horizontalSpacer_29 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_29, 18, 2, 1, 1);

        pbWillow = new QPushButton(centralWidget);
        pbWillow->setObjectName(QString::fromUtf8("pbWillow"));

        gridLayout->addWidget(pbWillow, 18, 3, 1, 1);

        leWillow = new QLineEdit(centralWidget);
        leWillow->setObjectName(QString::fromUtf8("leWillow"));
        leWillow->setLayoutDirection(Qt::LeftToRight);
        leWillow->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        leWillow->setReadOnly(true);

        gridLayout->addWidget(leWillow, 18, 4, 1, 1);

        horizontalSpacer_48 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_48, 18, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        verticalSpacer = new QSpacerItem(20, 29, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        pbReset = new QPushButton(centralWidget);
        pbReset->setObjectName(QString::fromUtf8("pbReset"));

        verticalLayout->addWidget(pbReset);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 454, 25));
        menu_Datei = new QMenu(menuBar);
        menu_Datei->setObjectName(QString::fromUtf8("menu_Datei"));
        menu_Hilfe = new QMenu(menuBar);
        menu_Hilfe->setObjectName(QString::fromUtf8("menu_Hilfe"));
        MainWindow->setMenuBar(menuBar);
        QWidget::setTabOrder(pbAgrimony, pbAspen);
        QWidget::setTabOrder(pbAspen, pbBeech);
        QWidget::setTabOrder(pbBeech, pbCentaury);
        QWidget::setTabOrder(pbCentaury, pbCerato);
        QWidget::setTabOrder(pbCerato, pbCherryPlum);
        QWidget::setTabOrder(pbCherryPlum, pbChestnutBud);
        QWidget::setTabOrder(pbChestnutBud, pbChicory);
        QWidget::setTabOrder(pbChicory, pbClematis);
        QWidget::setTabOrder(pbClematis, pbCrabApple);
        QWidget::setTabOrder(pbCrabApple, pbElm);
        QWidget::setTabOrder(pbElm, pbGentian);
        QWidget::setTabOrder(pbGentian, pbGorse);
        QWidget::setTabOrder(pbGorse, pbHeather);
        QWidget::setTabOrder(pbHeather, pbHolly);
        QWidget::setTabOrder(pbHolly, pbHoneysuckle);
        QWidget::setTabOrder(pbHoneysuckle, pbHornbeam);
        QWidget::setTabOrder(pbHornbeam, pbImpatiens);
        QWidget::setTabOrder(pbImpatiens, pbLarch);
        QWidget::setTabOrder(pbLarch, pbMimulus);
        QWidget::setTabOrder(pbMimulus, pbMustard);
        QWidget::setTabOrder(pbMustard, pbOak);
        QWidget::setTabOrder(pbOak, pbOlive);
        QWidget::setTabOrder(pbOlive, pbPine);
        QWidget::setTabOrder(pbPine, pbRedChestnut);
        QWidget::setTabOrder(pbRedChestnut, pbRockRose);
        QWidget::setTabOrder(pbRockRose, pbRockWater);
        QWidget::setTabOrder(pbRockWater, pbSclerantus);
        QWidget::setTabOrder(pbSclerantus, pbStarOfBethlehem);
        QWidget::setTabOrder(pbStarOfBethlehem, pbSweetChestnut);
        QWidget::setTabOrder(pbSweetChestnut, pbVervain);
        QWidget::setTabOrder(pbVervain, pbVine);
        QWidget::setTabOrder(pbVine, pbWalnut);
        QWidget::setTabOrder(pbWalnut, pbWaterViolet);
        QWidget::setTabOrder(pbWaterViolet, pbWhiteChestnut);
        QWidget::setTabOrder(pbWhiteChestnut, pbWildOat);
        QWidget::setTabOrder(pbWildOat, pbWildRose);
        QWidget::setTabOrder(pbWildRose, pbWillow);

        menuBar->addAction(menu_Datei->menuAction());
        menuBar->addAction(menu_Hilfe->menuAction());
        menu_Datei->addSeparator();
        menu_Datei->addSeparator();
        menu_Datei->addAction(action_Reset);
        menu_Datei->addAction(actionProgramm_b_eenden);
        menu_Datei->addSeparator();
        menu_Hilfe->addAction(action_ber_das_Programm);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "BachCount v1.0 (c) M. Bergmann", 0));
        action_ber_das_Programm->setText(QApplication::translate("MainWindow", "\303\234&ber das Programm", 0));
        actionProgramm_b_eenden->setText(QApplication::translate("MainWindow", "Programm b&eenden", 0));
        action_Reset->setText(QApplication::translate("MainWindow", "Rese&t", 0));
        action_Reset->setShortcut(QApplication::translate("MainWindow", "Esc", 0));
        pbAgrimony->setText(QApplication::translate("MainWindow", "Agrimony", 0));
        leAgrimony->setInputMask(QString());
        leAgrimony->setText(QApplication::translate("MainWindow", "0", 0));
        pbMimulus->setText(QApplication::translate("MainWindow", "Mimulus", 0));
        leMimulus->setInputMask(QString());
        leMimulus->setText(QApplication::translate("MainWindow", "0", 0));
        pbAspen->setText(QApplication::translate("MainWindow", "Aspen", 0));
        leAspen->setInputMask(QString());
        leAspen->setText(QApplication::translate("MainWindow", "0", 0));
        pbMustard->setText(QApplication::translate("MainWindow", "Mustard", 0));
        leMustard->setInputMask(QString());
        leMustard->setText(QApplication::translate("MainWindow", "0", 0));
        pbBeech->setText(QApplication::translate("MainWindow", "Beech", 0));
        leBeech->setInputMask(QString());
        leBeech->setText(QApplication::translate("MainWindow", "0", 0));
        pbOak->setText(QApplication::translate("MainWindow", "Oak", 0));
        leOak->setInputMask(QString());
        leOak->setText(QApplication::translate("MainWindow", "0", 0));
        pbCentaury->setText(QApplication::translate("MainWindow", "Centaury", 0));
        leCentaury->setInputMask(QString());
        leCentaury->setText(QApplication::translate("MainWindow", "0", 0));
        pbOlive->setText(QApplication::translate("MainWindow", "Olive", 0));
        leOlive->setInputMask(QString());
        leOlive->setText(QApplication::translate("MainWindow", "0", 0));
        pbCerato->setText(QApplication::translate("MainWindow", "Cerato", 0));
        leCerato->setInputMask(QString());
        leCerato->setText(QApplication::translate("MainWindow", "0", 0));
        pbPine->setText(QApplication::translate("MainWindow", "Pine", 0));
        lePine->setInputMask(QString());
        lePine->setText(QApplication::translate("MainWindow", "0", 0));
        pbCherryPlum->setText(QApplication::translate("MainWindow", "Cherry Plum", 0));
        leCherryPlum->setInputMask(QString());
        leCherryPlum->setText(QApplication::translate("MainWindow", "0", 0));
        pbRedChestnut->setText(QApplication::translate("MainWindow", "Red Chestnut", 0));
        leRedChestnut->setInputMask(QString());
        leRedChestnut->setText(QApplication::translate("MainWindow", "0", 0));
        pbChestnutBud->setText(QApplication::translate("MainWindow", "Chestnut Bud", 0));
        leChestnutBud->setInputMask(QString());
        leChestnutBud->setText(QApplication::translate("MainWindow", "0", 0));
        pbRockRose->setText(QApplication::translate("MainWindow", "Rock Rose", 0));
        leRockRose->setInputMask(QString());
        leRockRose->setText(QApplication::translate("MainWindow", "0", 0));
        pbChicory->setText(QApplication::translate("MainWindow", "Chicory", 0));
        leChicory->setInputMask(QString());
        leChicory->setText(QApplication::translate("MainWindow", "0", 0));
        pbRockWater->setText(QApplication::translate("MainWindow", "Rock Water", 0));
        leRockWater->setInputMask(QString());
        leRockWater->setText(QApplication::translate("MainWindow", "0", 0));
        pbClematis->setText(QApplication::translate("MainWindow", "Clematis", 0));
        leClematis->setInputMask(QString());
        leClematis->setText(QApplication::translate("MainWindow", "0", 0));
        pbSclerantus->setText(QApplication::translate("MainWindow", "Sclerantus", 0));
        leSclerantus->setInputMask(QString());
        leSclerantus->setText(QApplication::translate("MainWindow", "0", 0));
        pbCrabApple->setText(QApplication::translate("MainWindow", "Crab Apple", 0));
        leCrabApple->setInputMask(QString());
        leCrabApple->setText(QApplication::translate("MainWindow", "0", 0));
        pbStarOfBethlehem->setText(QApplication::translate("MainWindow", "Star of Bethlehem", 0));
        leStarOfBethlehem->setInputMask(QString());
        leStarOfBethlehem->setText(QApplication::translate("MainWindow", "0", 0));
        pbElm->setText(QApplication::translate("MainWindow", "Elm", 0));
        leElm->setInputMask(QString());
        leElm->setText(QApplication::translate("MainWindow", "0", 0));
        pbSweetChestnut->setText(QApplication::translate("MainWindow", "Sweet Chestnut", 0));
        leSweetChestnut->setInputMask(QString());
        leSweetChestnut->setText(QApplication::translate("MainWindow", "0", 0));
        pbGentian->setText(QApplication::translate("MainWindow", "Gentian", 0));
        leGentian->setInputMask(QString());
        leGentian->setText(QApplication::translate("MainWindow", "0", 0));
        pbVervain->setText(QApplication::translate("MainWindow", "Vervain", 0));
        leVervain->setInputMask(QString());
        leVervain->setText(QApplication::translate("MainWindow", "0", 0));
        pbGorse->setText(QApplication::translate("MainWindow", "Gorse", 0));
        leGorse->setInputMask(QString());
        leGorse->setText(QApplication::translate("MainWindow", "0", 0));
        pbVine->setText(QApplication::translate("MainWindow", "Vine", 0));
        leVine->setInputMask(QString());
        leVine->setText(QApplication::translate("MainWindow", "0", 0));
        pbHeather->setText(QApplication::translate("MainWindow", "Heather", 0));
        leHeather->setInputMask(QString());
        leHeather->setText(QApplication::translate("MainWindow", "0", 0));
        pbWalnut->setText(QApplication::translate("MainWindow", "Walnut", 0));
        leWalnut->setInputMask(QString());
        leWalnut->setText(QApplication::translate("MainWindow", "0", 0));
        pbHolly->setText(QApplication::translate("MainWindow", "Holly", 0));
        leHolly->setInputMask(QString());
        leHolly->setText(QApplication::translate("MainWindow", "0", 0));
        pbWaterViolet->setText(QApplication::translate("MainWindow", "Water Violet", 0));
        leWaterViolet->setInputMask(QString());
        leWaterViolet->setText(QApplication::translate("MainWindow", "0", 0));
        pbHoneysuckle->setText(QApplication::translate("MainWindow", "Honeysuckle", 0));
        leHoneysuckle->setInputMask(QString());
        leHoneysuckle->setText(QApplication::translate("MainWindow", "0", 0));
        pbWhiteChestnut->setText(QApplication::translate("MainWindow", "White Chestnut", 0));
        leWhiteChestnut->setInputMask(QString());
        leWhiteChestnut->setText(QApplication::translate("MainWindow", "0", 0));
        pbHornbeam->setText(QApplication::translate("MainWindow", "Hornbeam", 0));
        leHornbeam->setInputMask(QString());
        leHornbeam->setText(QApplication::translate("MainWindow", "0", 0));
        pbWildOat->setText(QApplication::translate("MainWindow", "Wild Oat", 0));
        leWildOat->setInputMask(QString());
        leWildOat->setText(QApplication::translate("MainWindow", "0", 0));
        pbImpatiens->setText(QApplication::translate("MainWindow", "Impatiens", 0));
        leImpatiens->setInputMask(QString());
        leImpatiens->setText(QApplication::translate("MainWindow", "0", 0));
        pbWildRose->setText(QApplication::translate("MainWindow", "Wild Rose", 0));
        leWildRose->setInputMask(QString());
        leWildRose->setText(QApplication::translate("MainWindow", "0", 0));
        pbLarch->setText(QApplication::translate("MainWindow", "Larch", 0));
        leLarch->setInputMask(QString());
        leLarch->setText(QApplication::translate("MainWindow", "0", 0));
        pbWillow->setText(QApplication::translate("MainWindow", "Willow", 0));
        leWillow->setInputMask(QString());
        leWillow->setText(QApplication::translate("MainWindow", "0", 0));
        pbReset->setText(QApplication::translate("MainWindow", "Rese&t", 0));
        menu_Datei->setTitle(QApplication::translate("MainWindow", "&Datei", 0));
        menu_Hilfe->setTitle(QApplication::translate("MainWindow", "&Hilfe", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
