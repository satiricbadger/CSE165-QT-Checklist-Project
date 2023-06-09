
#include "maplehelper.h"
#include "ui_maplehelper.h"
#include <QLocale>
#include <QIcon>
#include <QFile>
#include <QComboBox>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>
double mesos = 0;
double weeklyMesos = 1;
double dailyMesos = 1;

MapleHelper::MapleHelper(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MapleHelper)
{
    //UI set up
    ui->setupUi(this);
    ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));

    //Chart initialization
    //QBarSet *weeklyMesoSet =new QBarSet("Weekly Mesos");
    //QBarSet *dailyMesoSet =new QBarSet("Daily Mesos");
    *weeklyMesoSet << weeklyMesos;
    *dailyMesoSet << dailyMesos;
    //QBarSeries *series = new QBarSeries();
    series->append(weeklyMesoSet);
    series->append(dailyMesoSet);
    //QChart *chart = new QChart();
    chart->addSeries(series);
    chart->setTitle("Weekly vs Daily Income");
    //QStringList categories;
    categories << "Mesos";
    //QBarCategoryAxis *axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);
    //QValueAxis *axisY = new QValueAxis();
    axisY->setRange(0,5000000000);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);
    chart->legend()->setVisible(true);
    chart->legend()->setAlignment(Qt::AlignBottom);
    //QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);
    ui->verticalLayout->addWidget(chartView);

    //Initializing all icons from resource file.
    prevLucidDifficulty = ui->lucidDifficultyBox->currentIndex();
    prevWillDifficulty = ui->willDifficultyBox->currentIndex();
    QIcon zakumIcon(":/BossIcons/Icons/zakum.webp");
    QIcon magnusIcon(":/BossIcons/Icons/magnus.webp");
    QIcon hillaIcon(":/BossIcons/Icons/hilla.webp");
    QIcon pierreIcon(":/BossIcons/Icons/pierre.webp");
    QIcon queenIcon(":/BossIcons/Icons/cqueen.webp");
    QIcon vonbonIcon(":/BossIcons/Icons/vonbon.webp");
    QIcon vellumIcon(":/BossIcons/Icons/vellum.webp");
    QIcon pinkbeanIcon(":/BossIcons/Icons/pinkbean.webp");
    QIcon papalatusIcon(":/BossIcons/Icons/papalatus.webp");
    QIcon cygnusIcon(":/BossIcons/Icons/cygnus.webp");
    QIcon lotusIcon(":/BossIcons/Icons/lotus.webp");
    QIcon damienIcon(":/BossIcons/Icons/damien.webp");
    QIcon slimeIcon(":/BossIcons/Icons/slime.webp");
    QIcon lucidIcon(":/BossIcons/Icons/lucid.png");
    QIcon willIcon(":/BossIcons/Icons/will.webp");
    QIcon gloomIcon(":/BossIcons/Icons/gloom.webp");
    QIcon vhillaIcon(":/BossIcons/Icons/vhilla.webp");
    QIcon darknellIcon(":/BossIcons/Icons/darknell.webp");
    QIcon serenIcon(":/BossIcons/Icons/hseren.webp");
    QIcon kalosIcon(":/BossIcons/Icons/kalos.webp");
    QIcon pnoIcon(":/BossIcons/Icons/pno.webp");
    QIcon akechiIcon(":/BossIcons/Icons/akechi.webp");
    QIcon arkariumIcon(":/BossIcons/Icons/arkarium.webp");
    QIcon ursusIcon(":/BossIcons/Icons/ursus.webp");
    QIcon vonleonIcon(":/BossIcons/Icons/vonleon.webp");
    QIcon golluxIcon(":/BossIcons/Icons/gollux.webp");
    QIcon mesoIcon(":/BossIcons/Icons/meso.webp");
    QIcon vjIcon(":/SymbolsIcon/Icons/vanishing.webp");
    QIcon chuchuIcon(":/SymbolsIcon/Icons/chuchu.webp");
    QIcon lachIcon(":/SymbolsIcon/Icons/lach.webp");
    QIcon arcanaIcon(":/SymbolsIcon/Icons/arcana.webp");
    QIcon morassIcon(":/SymbolsIcon/Icons/morass.webp");
    QIcon esferaIcon(":/SymbolsIcon/Icons/esfera.webp");
    QIcon teneIcon(":/SymbolsIcon/Icons/spark.webp");
    QIcon cerniumIcon(":/SymbolsIcon/Icons/cernium.webp");
    QIcon arcusIcon(":/SymbolsIcon/Icons/arcus.webp");
    QIcon odiumIcon(":/SymbolsIcon/Icons/odium.webp");


    //Setting all initialized icons to respective object.
    ui->zakumBox->setIcon(zakumIcon);
    ui->magnusBox->setIcon(magnusIcon);
    ui->pierreBox->setIcon(pierreIcon);
    ui->queenBox->setIcon(queenIcon);
    ui->hillaBox->setIcon(hillaIcon);
    ui->papalatusBox->setIcon(papalatusIcon);
    ui->vonbonBox->setIcon(vonbonIcon);
    ui->vellumBox->setIcon(vellumIcon);
    ui->pinkbeanBox->setIcon(pinkbeanIcon);
    ui->cygnusBox->setIcon(cygnusIcon);
    ui->lotusBox->setIcon(lotusIcon);
    ui->damienBox->setIcon(damienIcon);
    ui->slimeBox->setIcon(slimeIcon);
    ui->lucidBox->setIcon(lucidIcon);
    ui->willBox->setIcon(willIcon);
    ui->gloomBox->setIcon(gloomIcon);
    ui->vhillaBox->setIcon(vhillaIcon);
    ui->darknellBox->setIcon(darknellIcon);
    ui->serenBox->setIcon(serenIcon);
    ui->kalosBox->setIcon(kalosIcon);
    ui->pnoBox->setIcon(pnoIcon);
    ui->akechiBox->setIcon(akechiIcon);
    ui->arkariumBox->setIcon(arkariumIcon);
    ui->ursusBox->setIcon(ursusIcon);
    ui->vonleonBox->setIcon(vonleonIcon);
    ui->golluxBox->setIcon(golluxIcon);

    ui->vanishingBox->setIcon(vjIcon);
    ui->chuchuBox->setIcon(chuchuIcon);
    ui->lachBox->setIcon(lachIcon);
    ui->arcanaBox->setIcon(arcanaIcon);
    ui->morassBox->setIcon(morassIcon);
    ui->esferaBox->setIcon(esferaIcon);
    ui->teneBox->setIcon(teneIcon);

    ui->cerniumBox->setIcon(cerniumIcon);
    ui->bcernBox->setIcon(cerniumIcon);
    ui->arcusBox->setIcon(arcusIcon);
    ui->odiumBox->setIcon(odiumIcon);

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
        weeklyMesos += 81000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->zakumBox->isChecked()){
        mesos -= 81000000;
        weeklyMesos -= 81000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}

void MapleHelper::on_magnusBox_stateChanged(int arg1)
{
    if(ui->magnusBox->isChecked()){
        mesos += 95062500; //Value of the boss
        weeklyMesos += 95062500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->magnusBox->isChecked()){
        mesos -= 95062500;
        weeklyMesos -= 95062500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_hillaBox_stateChanged(int arg1)
{
    if(ui->hillaBox->isChecked()){
        mesos += 56250000; //Value of the boss
        weeklyMesos += 56250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->hillaBox->isChecked()){
        mesos -= 56250000;
        weeklyMesos -= 56250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_papalatusBox_stateChanged(int arg1)
{
    if(ui->papalatusBox->isChecked()){
        mesos += 132250000; //Value of the boss
        weeklyMesos += 132250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->papalatusBox->isChecked()){
        mesos -= 132250000;
        weeklyMesos -= 132250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_pierreBox_stateChanged(int arg1)
{
    if(ui->pierreBox->isChecked()){
        mesos += 81000000; //Value of the boss
        weeklyMesos += 81000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->pierreBox->isChecked()){
        mesos -= 81000000;
        weeklyMesos -= 81000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_queenBox_stateChanged(int arg1)
{
    if(ui->queenBox->isChecked()){
        mesos += 81000000; //Value of the boss
        weeklyMesos += 81000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->queenBox->isChecked()){
        mesos -= 81000000;
        weeklyMesos -= 81000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_vonbonBox_stateChanged(int arg1)
{
    if(ui->vonbonBox->isChecked()){
        mesos += 81000000; //Value of the boss
        weeklyMesos += 81000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->vonbonBox->isChecked()){
        mesos -= 81000000;
        weeklyMesos -= 81000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_vellumBox_stateChanged(int arg1)
{
    if(ui->vellumBox->isChecked()){
        mesos += 105062500; //Value of the boss
        weeklyMesos += 105062500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->vellumBox->isChecked()){
        mesos -= 105062500;
        weeklyMesos -= 105062500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_pinkbeanBox_stateChanged(int arg1)
{
    if(ui->pinkbeanBox->isChecked()){
        mesos += 64000000; //Value of the boss
        weeklyMesos += 64000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->pinkbeanBox->isChecked()){
        mesos -= 64000000;
        weeklyMesos -= 64000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_cygnusBox_stateChanged(int arg1)
{
    if(ui->cygnusBox->isChecked()){
        mesos += 72250000; //Value of the boss
        weeklyMesos += 72250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->queenBox->isChecked()){
        mesos -= 72250000;
        weeklyMesos -= 72250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_lotusBox_stateChanged(int arg1)
{
    if(ui->lotusBox->isChecked() && ui->lotusDifficultyBox->currentText() == "Normal"){
        mesos += 162562500; //Value of the boss
        weeklyMesos += 162562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->lotusBox->isChecked() && ui->lotusDifficultyBox->currentText() == "Hard"){
        mesos += 370562500; //Value of the boss
        weeklyMesos += 370562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->lotusBox->isChecked() && ui->lotusDifficultyBox->currentText() == "Normal"){
        mesos -= 162562500;
        weeklyMesos -= 162562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->lotusBox->isChecked() && ui->lotusDifficultyBox->currentText() == "Hard"){
        mesos -= 370562500;
        weeklyMesos-= 370562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}

void MapleHelper::on_damienBox_stateChanged(int arg1)
{
    if(ui->damienBox->isChecked() && ui->damienDifficultyBox->currentText() == "Normal"){
        mesos += 169000000; //Value of the boss
        weeklyMesos += 169000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->damienBox->isChecked() && ui->damienDifficultyBox->currentText() == "Hard"){
        mesos += 351562500; //Value of the boss
        weeklyMesos += 351562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->damienBox->isChecked() && ui->damienDifficultyBox->currentText() == "Normal"){
        mesos -= 169000000;
        weeklyMesos -= 169000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->damienBox->isChecked() && ui->damienDifficultyBox->currentText() == "Hard"){
        mesos -= 351562500;
        weeklyMesos -= 351562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_slimeBox_stateChanged(int arg1)
{
    if(ui->slimeBox->isChecked() && ui->slimeDifficultyBox->currentText() == "Normal"){
        mesos += 171610000; //Value of the boss
        weeklyMesos += 171610000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->slimeBox->isChecked() && ui->slimeDifficultyBox->currentText() == "Chaos"){
        mesos += 451562500; //Value of the boss
        weeklyMesos += 451562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->slimeBox->isChecked() && ui->slimeDifficultyBox->currentText() == "Normal"){
        mesos -= 171610000;
        weeklyMesos -= 171610000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->slimeBox->isChecked() && ui->slimeDifficultyBox->currentText() == "Chaos"){
        mesos -= 451562500;
        weeklyMesos -= 451562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_lucidBox_stateChanged(int arg1)
{
    QString difficulty = ui->lucidDifficultyBox->currentText();
    if(ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Easy"){
        mesos += 175562500; //Value of the boss
        weeklyMesos += 175562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Normal"){
        mesos += 203062500; //Value of the boss
        weeklyMesos += 203062500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Hard"){
        mesos += 400000000; //Value of the boss
        weeklyMesos += 400000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Easy"){
        mesos -= 175562500;
        weeklyMesos -= 175562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Normal"){
        mesos -= 203062500;
        weeklyMesos -= 203062500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->lucidBox->isChecked() && ui->lucidDifficultyBox->currentText() == "Hard"){
        mesos -= 400000000;
        weeklyMesos -= 400000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_willBox_stateChanged(int arg1)
{
    if(ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Easy"){
        mesos += 191275000; //Value of the boss
        weeklyMesos += 191275000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Normal"){
        mesos += 232562500; //Value of the boss
        weeklyMesos += 232562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Hard"){
        mesos += 441000000; //Value of the boss
        weeklyMesos += 441000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Easy"){
        mesos -= 191275000;
        weeklyMesos -= 191275000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Normal"){
        mesos -= 232562500;
        weeklyMesos -= 232562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->willBox->isChecked() && ui->willDifficultyBox->currentText() == "Hard"){
        mesos -= 441000000;
        weeklyMesos -= 441000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }

}


void MapleHelper::on_gloomBox_stateChanged(int arg1)
{
    if(ui->gloomBox->isChecked() && ui->gloomDifficultyBox->currentText() == "Normal"){
        mesos += 248062500; //Value of the boss
        weeklyMesos += 248062500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->gloomBox->isChecked() && ui->gloomDifficultyBox->currentText() == "Chaos"){
        mesos += 462250000; //Value of the boss
        weeklyMesos += 462250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->gloomBox->isChecked() && ui->gloomDifficultyBox->currentText() == "Normal"){
        mesos -= 248062500;
        weeklyMesos -= 248062500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->gloomBox->isChecked() && ui->gloomDifficultyBox->currentText() == "Chaos"){
        mesos -= 462250000;
        weeklyMesos -= 462250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_vhillaBox_stateChanged(int arg1)
{
    if(ui->vhillaBox->isChecked() && ui->vhillaDifficultyBox->currentText() == "Normal"){
        mesos += 447600000; //Value of the boss
        weeklyMesos += 447600000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->vhillaBox->isChecked() && ui->vhillaDifficultyBox->currentText() == "Hard"){
        mesos += 552250000; //Value of the boss
        weeklyMesos += 552250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->vhillaBox->isChecked() && ui->vhillaDifficultyBox->currentText() == "Normal"){
        mesos -= 447600000;
        weeklyMesos -= 447600000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->vhillaBox->isChecked() && ui->vhillaDifficultyBox->currentText() == "Hard"){
        mesos -= 552250000;
        weeklyMesos -= 552250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_darknellBox_stateChanged(int arg1)
{
    if(ui->darknellBox->isChecked() && ui->darknellDifficultyBox->currentText() == "Normal"){
        mesos += 264062500; //Value of the boss
        weeklyMesos += 264062500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->darknellBox->isChecked() && ui->darknellDifficultyBox->currentText() == "Hard"){
        mesos += 484000000; //Value of the boss
        weeklyMesos += 484000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->darknellBox->isChecked() && ui->darknellDifficultyBox->currentText() == "Normal"){
        mesos -= 264062500;
        weeklyMesos -= 264062500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->darknellBox->isChecked() && ui->darknellDifficultyBox->currentText() == "Hard"){
        mesos -= 484000000;
        weeklyMesos -= 484000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_serenBox_stateChanged(int arg1)
{
    if(ui->serenBox->isChecked() && ui->serenDifficultyBox->currentText() == "Normal"){
        mesos += 668437500; //Value of the boss
        weeklyMesos += 668437500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(ui->serenBox->isChecked() && ui->serenDifficultyBox->currentText() == "Hard"){
        mesos += 756250000; //Value of the boss
        weeklyMesos += 756250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->serenBox->isChecked() && ui->serenDifficultyBox->currentText() == "Normal"){
        mesos -= 668437500;
        weeklyMesos -= 668437500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->serenBox->isChecked() && ui->serenDifficultyBox->currentText() == "Hard"){
        mesos -= 756250000;
        weeklyMesos -= 756250000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_kalosBox_stateChanged(int arg1)
{
    if(ui->kalosBox->isChecked()){
        mesos += 1000000000; //Value of the boss
        weeklyMesos += 1000000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->kalosBox->isChecked()){
        mesos -= 1000000000;
        weeklyMesos -= 1000000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_pnoBox_stateChanged(int arg1)
{
    if(ui->pnoBox->isChecked()){
        mesos += 81000000; //Value of the boss
        weeklyMesos += 81000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->pnoBox->isChecked()){
        mesos -= 81000000;
        weeklyMesos-= 81000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_akechiBox_stateChanged(int arg1)
{
    if(ui->akechiBox->isChecked()){
        mesos += 144000000; //Value of the boss
        weeklyMesos += 144000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->akechiBox->isChecked()){
        mesos -= 144000000;
        weeklyMesos -= 144000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_arkariumBox_stateChanged(int arg1)
{
    if(ui->arkariumBox->isChecked()){
        mesos += 88207500; //Value of the boss
        dailyMesos += 88207500;
        dailyMesoSet->replace(0,dailyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->arkariumBox->isChecked()){
        mesos -= 88207500;
        dailyMesos -= 88207500;
        dailyMesoSet->replace(0,dailyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_mesoDisplay_textEdited(const QString &arg1)
{
    QString mesoValue = ui->mesoDisplay->text();
    int numberOfMeso = mesoValue.toInt();
    if(numberOfMeso < 0){
        mesos = 0;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_mesoDisplay_textChanged(const QString &arg1)
{
    QString mesoValue = ui->mesoDisplay->text();
    int numberOfMeso = mesoValue.toInt();
    if(numberOfMeso < 0){
        mesos = 0;
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_ursusBox_stateChanged(int arg1)
{
    if(ui->ursusBox->isChecked()){
        mesos += 110000000; //Value of the boss
        dailyMesos += 110000000;
        dailyMesoSet->replace(0,dailyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->ursusBox->isChecked()){
        mesos -= 110000000;
        dailyMesos -= 110000000;
        dailyMesoSet->replace(0,dailyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_vonleonBox_stateChanged(int arg1)
{
    if(ui->vonleonBox->isChecked()){
        mesos += 85750000; //Value of the boss
        dailyMesos += 85750000;
        dailyMesoSet->replace(0,dailyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    else if(!ui->vonleonBox->isChecked()){
        mesos -= 85750000;
        dailyMesos -= 85750000;
        dailyMesoSet->replace(0,dailyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_lotusDifficultyBox_currentIndexChanged(int index)
{
    if(ui->lotusDifficultyBox->currentIndex() == 1 && ui->lotusBox->isChecked()){ //When selecting from Normal to Hard, add mesos
        mesos += 208000000;
        weeklyMesos += 208000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->lotusDifficultyBox->currentIndex() == 0 && ui->lotusBox->isChecked()){ //When selecting from Hard to Normal, subtract the hard mesos.
        mesos -= 208000000;
        weeklyMesos -= 208000000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_damienDifficultyBox_currentIndexChanged(int index)
{
    if(ui->damienDifficultyBox->currentIndex() == 1 && ui->damienBox->isChecked()){ //When selecting from Normal to Hard, add mesos
        mesos += 182562500;
        weeklyMesos += 182562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->damienDifficultyBox->currentIndex() == 0 && ui->damienBox->isChecked()){ //When selecting from Hard to Normal, subtract the hard mesos.
        mesos -= 182562500;
        weeklyMesos -= 182562500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_slimeDifficultyBox_currentIndexChanged(int index)
{
    if(ui->slimeDifficultyBox->currentIndex() == 1 && ui->slimeBox->isChecked()){ //When selecting from Normal to Chaos, add mesos
        mesos += 279952500;
        weeklyMesos += 279952500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->slimeDifficultyBox->currentIndex() == 0 && ui->slimeBox->isChecked()){ //When selecting from Chaos to Normal, subtract the hard mesos.
        mesos -= 279952500;
        weeklyMesos -= 279952500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_lucidDifficultyBox_currentIndexChanged(int index)
{
    if (ui->lucidBox->isChecked()) {
        int currentLevel = ui->lucidDifficultyBox->currentIndex();
        if (prevLucidDifficulty == 0 && currentLevel == 1) { // Easy to Normal
            mesos += 27500000;
            weeklyMesos += 27500000;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        } else if (prevLucidDifficulty == 0 && currentLevel == 2) { // Easy to Hard
            mesos += 224437750;
            weeklyMesos += 224437750;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        } else if (prevLucidDifficulty == 1 && currentLevel == 0) { // Normal to Easy
            mesos -= 27500000;
            weeklyMesos -= 27500000;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        } else if (prevLucidDifficulty == 1 && currentLevel == 2) { // Normal to Hard
            mesos += 196937500;
            weeklyMesos += 196937500;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        } else if (prevLucidDifficulty == 2 && currentLevel == 0) { // Hard to Easy
            mesos -= 224437750;
            weeklyMesos -= 224437750;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        } else if (prevLucidDifficulty == 2 && currentLevel == 1) { // Hard to Normal
            mesos -= 196937500;
            weeklyMesos -= 196937500;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        }
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
        prevLucidDifficulty = currentLevel;
    }
}


void MapleHelper::on_willDifficultyBox_currentIndexChanged(int index)
{
    if (ui->willBox->isChecked()) {
        int currentLevel = ui->willDifficultyBox->currentIndex();
        if (prevWillDifficulty == 0 && currentLevel == 1) { // Easy to Normal
            mesos += 41287500;
            weeklyMesos += 41287500;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        } else if (prevWillDifficulty == 0 && currentLevel == 2) { // Easy to Hard
            mesos += 249725000;
            weeklyMesos += 249725000;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        } else if (prevWillDifficulty == 1 && currentLevel == 0) { // Normal to Easy
            mesos -= 41287500;
            weeklyMesos -= 41287500;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        } else if (prevWillDifficulty == 1 && currentLevel == 2) { // Normal to Hard
            mesos += 196937500;
            weeklyMesos += 196937500;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        } else if (prevWillDifficulty == 2 && currentLevel == 0) { // Hard to Easy
            mesos -= 249725000;
            weeklyMesos -= 249725000;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        } else if (prevWillDifficulty == 2 && currentLevel == 1) { // Hard to Normal
            mesos -= 208437500;
            weeklyMesos -= 208437500;
            weeklyMesoSet->replace(0,weeklyMesos);
            chart->update();
        }
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
        prevWillDifficulty = currentLevel;
    }
}


void MapleHelper::on_gloomDifficultyBox_currentIndexChanged(int index)
{
    if(ui->gloomDifficultyBox->currentIndex() == 1 && ui->gloomBox->isChecked()){ //When selecting from Normal to Chaos, add mesos
        mesos += 214187500;
        weeklyMesos += 214187500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->gloomDifficultyBox->currentIndex() == 0 && ui->gloomBox->isChecked()){ //When selecting from Chaos to Normal, subtract the hard mesos.
        mesos -= 214187500;
        weeklyMesos -= 214187500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_vhillaDifficultyBox_currentIndexChanged(int index)
{
    if(ui->vhillaDifficultyBox->currentIndex() == 1 && ui->vhillaBox->isChecked()){ //When selecting from Normal to Chaos, add mesos
        mesos += 104650000;
        weeklyMesos += 104650000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->vhillaDifficultyBox->currentIndex() == 0 && ui->vhillaBox->isChecked()){ //When selecting from Chaos to Normal, subtract the hard mesos.
        mesos -= 104650000;
        weeklyMesos -= 104650000;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_darknellDifficultyBox_currentIndexChanged(int index)
{
    if(ui->darknellDifficultyBox->currentIndex() == 1 && ui->darknellBox->isChecked()){ //When selecting from Normal to Chaos, add mesos
        mesos += 219937500;
        weeklyMesos += 219937500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->darknellDifficultyBox->currentIndex() == 0 && ui->darknellBox->isChecked()){ //When selecting from Chaos to Normal, subtract the hard mesos.
        mesos -= 219937500;
        weeklyMesos -= 219937500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}


void MapleHelper::on_serenDifficultyBox_currentIndexChanged(int index)
{
    if(ui->serenDifficultyBox->currentIndex() == 1 && ui->serenBox->isChecked()){ //When selecting from Normal to Chaos, add mesos
        mesos += 87812500;
        weeklyMesos += 87812500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
    if(ui->serenDifficultyBox->currentIndex() == 0 && ui->serenBox->isChecked()){ //When selecting from Chaos to Normal, subtract the hard mesos.
        mesos -= 87812500;
        weeklyMesos -= 87812500;
        weeklyMesoSet->replace(0,weeklyMesos);
        chart->update();
        ui->mesoDisplay->setText(QString::number(mesos, 'f', 0));
    }
}

