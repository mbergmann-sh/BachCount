#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QApplication>
#include <QMainWindow>
#include <QDialog>
#include <QMessageBox>

#ifdef __ANDROID__
    #include <QtAndroidExtras>
#endif

//#include <QDebug>



namespace Ui
{
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    //int Agrimony;
    Q_OBJECT

public:
    MainWindow(QWidget *parent = 0);
    ~MainWindow();


private:
    Ui::MainWindow *ui;


private slots:
    void on_pbWillow_clicked();
    void on_pbWildRose_clicked();
    void on_pbWildOat_clicked();
    void on_pbWhiteChestnut_clicked();
    void on_pbWaterViolet_clicked();
    void on_pbWalnut_clicked();
    void on_pbVine_clicked();
    void on_pbVervain_clicked();
    void on_pbSweetChestnut_clicked();
    void on_pbStarOfBethlehem_clicked();
    void on_pbSclerantus_clicked();
    void on_pbRockWater_clicked();
    void on_pbRockRose_clicked();
    void on_pbRedChestnut_clicked();
    void on_pbPine_clicked();
    void on_pbOlive_clicked();
    void on_pbOak_clicked();
    void on_pbMustard_clicked();
    void on_pbMimulus_clicked();
    void on_pbLarch_clicked();
    void on_pbImpatiens_clicked();
    void on_pbHornbeam_clicked();
    void on_pbHoneysuckle_clicked();
    void on_pbHolly_clicked();
    void on_pbHeather_clicked();
    void on_pbGorse_clicked();
    void on_pbGentian_clicked();
    void on_pbElm_clicked();
    void on_pbCrabApple_clicked();
    void on_pbClematis_clicked();
    void on_pbChicory_clicked();
    void on_pbChestnutBud_clicked();
    void on_pbCherryPlum_clicked();
    void on_pbCerato_clicked();
    void on_pbCentaury_clicked();
    void on_pbReset_clicked();
    void on_pbBeech_clicked();
    void on_pbAspen_clicked();
    void on_pbAgrimony_clicked();
    void on_action_Reset_triggered();
    void on_actionProgramm_b_eenden_triggered();
    void on_action_ber_das_Programm_triggered();
};

#endif // MAINWINDOW_H
