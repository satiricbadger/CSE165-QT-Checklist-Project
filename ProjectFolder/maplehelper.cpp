
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


void MapleHelper::on_slimeBox_stateChanged(int arg1)
{
    if(ui->slimeBox->isChecked() && ui->slimeDifficultyBox->currentText() == "Normal"){
        mesos += 171610000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->slimeBox->isChecked() && ui->slimeDifficultyBox->currentText() == "Chaos"){
        mesos += 451562500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->slimeBox->isChecked() && ui->slimeDifficultyBox->currentText() == "Normal"){
        mesos -= 171610000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->slimeBox->isChecked() && ui->slimeDifficultyBox->currentText() == "Chaos"){
        mesos -= 451562500;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_lucidBox_stateChanged(int arg1)
{
    if(ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Easy"){
        mesos += 175562500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Normal"){
        mesos += 203062500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Hard"){
        mesos += 400000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Easy"){
        mesos -= 175562500;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Normal"){
        mesos -= 203062500;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Hard"){
        mesos -= 400000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_willBox_stateChanged(int arg1)
{
    if(ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Easy"){
        mesos += 191275000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Normal"){
        mesos += 232562500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Hard"){
        mesos += 441000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Easy"){
        mesos -= 191275000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Normal"){
        mesos -= 232562500;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Hard"){
        mesos -= 441000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_gloomBox_stateChanged(int arg1)
{
    if(ui->gloomBox->isChecked() && ui->gloomDifficultyBox->currentText() == "Normal"){
        mesos += 248062500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->gloomBox->isChecked() && ui->gloomDifficultyBox->currentText() == "Chaos"){
        mesos += 462250000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->gloomBox->isChecked() && ui->gloomDifficultyBox->currentText() == "Normal"){
        mesos -= 248062500;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->gloomBox->isChecked() && ui->gloomDifficultyBox->currentText() == "Chaos"){
        mesos -= 462250000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_vhillaBox_stateChanged(int arg1)
{
    if(ui->vhillaBox->isChecked() && ui->vhillaDifficultyBox->currentText() == "Normal"){
        mesos += 447600000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->vhillaBox->isChecked() && ui->vhillaDifficultyBox->currentText() == "Hard"){
        mesos += 552250000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->vhillaBox->isChecked() && ui->vhillaDifficultyBox->currentText() == "Normal"){
        mesos -= 447600000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->vhillaBox->isChecked() && ui->vhillaDifficultyBox->currentText() == "Hard"){
        mesos -= 552250000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_darknellBox_stateChanged(int arg1)
{
    if(ui->darknellBox->isChecked() && ui->darknellDifficultyBox->currentText() == "Normal"){
        mesos += 264062500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->darknellBox->isChecked() && ui->darknellDifficultyBox->currentText() == "Hard"){
        mesos += 484000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->darknellBox->isChecked() && ui->darknellDifficultyBox->currentText() == "Normal"){
        mesos -= 264062500;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->darknellBox->isChecked() && ui->darknellDifficultyBox->currentText() == "Hard"){
        mesos -= 484000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_serenBox_stateChanged(int arg1)
{
    if(ui->serenBox->isChecked() && ui->serenDifficultyBox->currentText() == "Normal"){
        mesos += 668437500; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->serenBox->isChecked() && ui->serenDifficultyBox->currentText() == "Hard"){
        mesos += 756250000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->serenBox->isChecked() && ui->serenDifficultyBox->currentText() == "Normal"){
        mesos -= 668437500;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->serenBox->isChecked() && ui->serenDifficultyBox->currentText() == "Hard"){
        mesos -= 756250000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_kalosBox_stateChanged(int arg1)
{
    if(ui->kalosBox->isChecked()){
        mesos += 1000000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->kalosBox->isChecked()){
        mesos -= 1000000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_pnoBox_stateChanged(int arg1)
{
    if(ui->pnoBox->isChecked()){
        mesos += 81000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->pnoBox->isChecked()){
        mesos -= 81000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_akechiBox_stateChanged(int arg1)
{
    if(ui->akechiBox->isChecked()){
        mesos += 144000000; //Value of the boss
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->akechiBox->isChecked()){
        mesos -= 144000000;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}

