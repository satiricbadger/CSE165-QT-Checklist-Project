
#include "maplehelper.h"
#include "ui_maplehelper.h"
#include <QLocale>
double mesos = 0;
MapleHelper::MapleHelper(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MapleHelper)
{
    ui->setupUi(this);
    ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    QCheckBox *zakumBox = ui->zakumBox;
    zakumBox->setChecked(false);
    //connect(zakumBox,SIGNAL(Ui::zakumBox->isChecked()),this,SLOT(zakumChecked()));
}

MapleHelper::~MapleHelper()
{
    delete ui;
}
void MapleHelper::bossChecked(){
    mesos += 100000000;
}
void MapleHelper::zakumChecked(){
    mesos += 81000000; //Value of the boss
    ui->mesoDisplay->setText(QString::number(mesos));
}

void MapleHelper::difficultyCheck(){
    mesos += 150000000;

}
void MapleHelper::on_zakumBox_stateChanged(int arg1)
{
    if(ui->zakumBox->isChecked()){
        mesos += 81000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->zakumBox->isChecked()){
        mesos -= 81000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}

void MapleHelper::on_magnusBox_stateChanged(int arg1)
{
    if(ui->magnusBox->isChecked()){
        mesos += 95062500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->magnusBox->isChecked()){
        mesos -= 95062500;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_hillaBox_stateChanged(int arg1)
{
    if(ui->hillaBox->isChecked()){
        mesos += 56250000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->hillaBox->isChecked()){
        mesos -= 56250000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_papalatusBox_stateChanged(int arg1)
{
    if(ui->papalatusBox->isChecked()){
        mesos += 132250000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->papalatusBox->isChecked()){
        mesos -= 132250000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_pierreBox_stateChanged(int arg1)
{
    if(ui->pierreBox->isChecked()){
        mesos += 81000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->pierreBox->isChecked()){
        mesos -= 81000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_queenBox_stateChanged(int arg1)
{
    if(ui->queenBox->isChecked()){
        mesos += 81000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->queenBox->isChecked()){
        mesos -= 81000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_vonbonBox_stateChanged(int arg1)
{
    if(ui->vonbonBox->isChecked()){
        mesos += 81000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->vonbonBox->isChecked()){
        mesos -= 81000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_vellumBox_stateChanged(int arg1)
{
    if(ui->vellumBox->isChecked()){
        mesos += 105062500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->vellumBox->isChecked()){
        mesos -= 105062500;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_pinkbeanBox_stateChanged(int arg1)
{
    if(ui->pinkbeanBox->isChecked()){
        mesos += 64000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->pinkbeanBox->isChecked()){
        mesos -= 64000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_cygnusBox_stateChanged(int arg1)
{
    if(ui->cygnusBox->isChecked()){
        mesos += 72250000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->queenBox->isChecked()){
        mesos -= 72250000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_lotusBox_stateChanged(int arg1)
{
    if(ui->lotusBox->isChecked()){
        mesos += 162562500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->lotusBox->isChecked()){
        mesos -= 162562500;
        if(ui->lotusDifficultyBox->currentText() == "Hard"){
            mesos -= 208000000;
            ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
        }
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}



void MapleHelper::on_lotusDifficultyBox_textActivated(const QString &arg1)
{
    if(ui->lotusBox->isChecked()){
        if(ui->lotusDifficultyBox->currentText() == "Hard" ){
            mesos += 208000000;
            ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
        }
        else if(ui->lotusDifficultyBox->currentText() == "Normal"){
            mesos -= 208000000;
            ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
        }
    }
}


void MapleHelper::on_damienBox_stateChanged(int arg1)
{
    if(ui->damienBox->isChecked() && ui->damienDifficultyBox->currentText() == "Normal"){
        mesos += 169000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->damienBox->isChecked() && ui->damienDifficultyBox->currentText() == "Hard"){
        mesos += 351562500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->damienBox->isChecked() && ui->damienDifficultyBox->currentText() == "Normal"){
        mesos -= 169000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->damienBox->isChecked() && ui->damienDifficultyBox->currentText() == "Hard"){
        mesos -= 351562500;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}

