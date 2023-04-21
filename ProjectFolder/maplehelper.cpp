
#include "maplehelper.h"
#include "ui_maplehelper.h"

double mesos = 10;
MapleHelper::MapleHelper(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MapleHelper)
{
    ui->setupUi(this);

    ui->mesoDisplay->setText(QString::number(mesos));
    QCheckBox *zakumBox = ui->zakumBox;
    zakumBox->setChecked(false);
//    connect(zakumBox,SIGNAL(Ui::MapleHelper::zakumBox->isChecked()),this,SLOT(MapleHelper::zakumChecked()));
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
        ui->mesoDisplay->setText(QString::number(mesos));
    }
    else if(!ui->zakumBox->isChecked()){
        mesos -= 81000000;
        ui->mesoDisplay->setText(QString::number(mesos));
    }
}

