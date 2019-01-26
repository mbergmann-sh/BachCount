#include "mainwindow.h"
#include "ui_mainwindow.h"

#define MESSAGE \
    MainWindow::tr("<h2>BachCount v1.0</h2>" \
                   "&copy; 2009 Michael Bergmann" \
               "<br>ist ein Programm zur Ausz&auml;hlung von Bachbl&uuml;ten-H&auml;ufigkeiten" \
                "<p>Erfassung der Anzahlen der h&auml;ufigsten Reminiszenzen zur Verwendung " \
               "bei der Auswertung von diagnostischen Frageb&ouml;gen " \
               "innerhalb der Bachbl&uuml;ten-Therapie. " \
               "<p>Fehlerberichte an: michael@mbergmann.de "\
               "<p>Programmiert in C++ unter Verwendung der frei " \
               "<br>verf&uuml;gbaren Qt5 GUI-Bibliotheken (&copy; TrollTech)" \
               "<p>Dieses Programm darf kostenlos weitergegeben werden.<br>Die Weitergabe gegen Bezahlung ist untersagt.")

// Globale Variablen
int Agrimony=0, Aspen=0, Beech=0, Centaury=0, Cerato=0, CherryPlum=0;
int ChestnutBud=0, Chicory=0, Clematis=0, CrabApple=0, Elm=0, Gentian=0, Gorse=0;
int Heather=0, Holly=0, Honeysuckle=0, Hornbeam=0, Impatiens=0, Larch=0, Mimulus=0, Mustard=0;
int Oak=0, Olive=0, Pine=0, RedChestnut=0, RockRose=0, RockWater=0, Sclerantus=0, StarOfBethlehem=0;
int SweetChestnut=0, Vervain=0, Vine=0, Walnut=0, WaterViolet=0, WhiteChestnut=0, WildOat=0, WildRose=0, Willow=0;


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_action_ber_das_Programm_triggered()
{
    // About anzeigen
    QMessageBox::StandardButton reply;
    reply = QMessageBox::information(this, tr("Info zum Programm"), MESSAGE);
}


void MainWindow::on_actionProgramm_b_eenden_triggered()
{
     // Programm beenden
    close();
}

void MainWindow::on_action_Reset_triggered()
{
    // Zähler zurücksetzen
    ui->leAgrimony->setText("0");
    ui->leAspen->setText("0");
    ui->leBeech->setText("0");
    ui->leCentaury->setText("0");
    ui->leCerato->setText("0");
    ui->leCherryPlum->setText("0");
    ui->leChestnutBud->setText("0");
    ui->leChicory->setText("0");
    ui->leClematis->setText("0");
    ui->leCrabApple->setText("0");
    ui->leElm->setText("0");
    ui->leGentian->setText("0");
    ui->leGorse->setText("0");
    ui->leHeather->setText("0");
    ui->leHolly->setText("0");
    ui->leHoneysuckle->setText("0");
    ui->leHornbeam->setText("0");
    ui->leImpatiens->setText("0");
    ui->leLarch->setText("0");
    ui->leMimulus->setText("0");
    ui->leMustard->setText("0");
    ui->leOak->setText("0");
    ui->leOlive->setText("0");
    ui->lePine->setText("0");
    ui->leRedChestnut->setText("0");
    ui->leRockRose->setText("0");
    ui->leRockWater->setText("0");
    ui->leSclerantus->setText("0");
    ui->leStarOfBethlehem->setText("0");
    ui->leSweetChestnut->setText("0");
    ui->leVervain->setText("0");
    ui->leVine->setText("0");
    ui->leWalnut->setText("0");
    ui->leWaterViolet->setText("0");
    ui->leWhiteChestnut->setText("0");
    ui->leWildOat->setText("0");
    ui->leWildRose->setText("0");
    ui->leWillow->setText("0");
    Agrimony=0;
    Aspen=0;
    Beech=0;
    Centaury=0;
    Cerato=0;
    CherryPlum=0;
    ChestnutBud=0;
    Chicory=0;
    Clematis=0;
    CrabApple=0;
    Elm=0;
    Gentian=0;
    Gorse=0;
    Heather=0;
    Holly=0;
    Honeysuckle=0;
    Hornbeam=0;
    Impatiens=0;
    Larch=0;
    Mimulus=0;
    Mustard=0;
    Oak=0;
    Olive=0;
    Pine=0;
    RedChestnut=0;
    RockRose=0;
    RockWater=0;
    Sclerantus=0;
    StarOfBethlehem=0;
    SweetChestnut=0;
    Vervain=0;
    Vine=0;
    Walnut=0;
    WaterViolet=0;
    WhiteChestnut=0;
    WildOat=0;
    WildRose=0;
    Willow=0;
}

void MainWindow::on_pbReset_clicked()
{
    on_action_Reset_triggered();
}

void MainWindow::on_pbAgrimony_clicked()
{
   Agrimony++;
   ui->leAgrimony->setText(QString::number(Agrimony));
}

void MainWindow::on_pbAspen_clicked()
{
   Aspen++;
   ui->leAspen->setText(QString::number(Aspen));
}

void MainWindow::on_pbBeech_clicked()
{
   Beech++;
   ui->leBeech->setText(QString::number(Beech));
}

void MainWindow::on_pbCentaury_clicked()
{
   Centaury++;
   ui->leCentaury->setText(QString::number(Centaury));
}

void MainWindow::on_pbCerato_clicked()
{
   Cerato++;
   ui->leCerato->setText(QString::number(Cerato));
}

void MainWindow::on_pbCherryPlum_clicked()
{
   CherryPlum++;
   ui->leCherryPlum->setText(QString::number(CherryPlum));
}

void MainWindow::on_pbChestnutBud_clicked()
{
   ChestnutBud++;
   ui->leChestnutBud->setText(QString::number(ChestnutBud));
}

void MainWindow::on_pbChicory_clicked()
{
   Chicory++;
   ui->leChicory->setText(QString::number(Chicory));
}

void MainWindow::on_pbClematis_clicked()
{
   Clematis++;
   ui->leClematis->setText(QString::number(Clematis));
}

void MainWindow::on_pbCrabApple_clicked()
{
   CrabApple++;
   ui->leCrabApple->setText(QString::number(CrabApple));
}

void MainWindow::on_pbElm_clicked()
{
   Elm++;
   ui->leElm->setText(QString::number(Elm));
}

void MainWindow::on_pbGentian_clicked()
{
   Gentian++;
   ui->leGentian->setText(QString::number(Gentian));
}

void MainWindow::on_pbGorse_clicked()
{
   Gorse++;
   ui->leGorse->setText(QString::number(Gorse));
}

void MainWindow::on_pbHeather_clicked()
{
   Heather++;
   ui->leHeather->setText(QString::number(Heather));
}

void MainWindow::on_pbHolly_clicked()
{
   Holly++;
   ui->leHolly->setText(QString::number(Holly));
}

void MainWindow::on_pbHoneysuckle_clicked()
{
   Honeysuckle++;
   ui->leHoneysuckle->setText(QString::number(Honeysuckle));
}

void MainWindow::on_pbHornbeam_clicked()
{
   Hornbeam++;
   ui->leHornbeam->setText(QString::number(Hornbeam));
}

void MainWindow::on_pbImpatiens_clicked()
{
   Impatiens++;
   ui->leImpatiens->setText(QString::number(Impatiens));
}

void MainWindow::on_pbLarch_clicked()
{
   Larch++;
   ui->leLarch->setText(QString::number(Larch));
}

void MainWindow::on_pbMimulus_clicked()
{
   Mimulus++;
   ui->leMimulus->setText(QString::number(Mimulus));
}

void MainWindow::on_pbMustard_clicked()
{
   Mustard++;
   ui->leMustard->setText(QString::number(Mustard));
}

void MainWindow::on_pbOak_clicked()
{
   Oak++;
   ui->leOak->setText(QString::number(Oak));
}

void MainWindow::on_pbOlive_clicked()
{
   Olive++;
   ui->leOlive->setText(QString::number(Olive));
}

void MainWindow::on_pbPine_clicked()
{
   Pine++;
   ui->lePine->setText(QString::number(Pine));
}

void MainWindow::on_pbRedChestnut_clicked()
{
   RedChestnut++;
   ui->leRedChestnut->setText(QString::number(RedChestnut));
}

void MainWindow::on_pbRockRose_clicked()
{
   RockRose++;
   ui->leRockRose->setText(QString::number(RockRose));
}

void MainWindow::on_pbRockWater_clicked()
{
   RockWater++;
   ui->leRockWater->setText(QString::number(RockWater));
}

void MainWindow::on_pbSclerantus_clicked()
{
   Sclerantus++;
   ui->leSclerantus->setText(QString::number(Sclerantus));
}

void MainWindow::on_pbStarOfBethlehem_clicked()
{
   StarOfBethlehem++;
   ui->leStarOfBethlehem->setText(QString::number(StarOfBethlehem));
}

void MainWindow::on_pbSweetChestnut_clicked()
{
   SweetChestnut++;
   ui->leSweetChestnut->setText(QString::number(SweetChestnut));
}

void MainWindow::on_pbVervain_clicked()
{
   Vervain++;
   ui->leVervain->setText(QString::number(Vervain));
}

void MainWindow::on_pbVine_clicked()
{
   Vine++;
   ui->leVine->setText(QString::number(Vine));
}

void MainWindow::on_pbWalnut_clicked()
{
   Walnut++;
   ui->leWalnut->setText(QString::number(Walnut));
}

void MainWindow::on_pbWaterViolet_clicked()
{
   WaterViolet++;
   ui->leWaterViolet->setText(QString::number(WaterViolet));
}

void MainWindow::on_pbWhiteChestnut_clicked()
{
   WhiteChestnut++;
   ui->leWhiteChestnut->setText(QString::number(WhiteChestnut));
}

void MainWindow::on_pbWildOat_clicked()
{
   WildOat++;
   ui->leWildOat->setText(QString::number(WildOat));
}

void MainWindow::on_pbWildRose_clicked()
{
   WildRose++;
   ui->leWildRose->setText(QString::number(WildRose));
}

void MainWindow::on_pbWillow_clicked()
{
   Willow++;
   ui->leWillow->setText(QString::number(Willow));
}
