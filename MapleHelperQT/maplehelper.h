
#ifndef MAPLEHELPER_H
#define MAPLEHELPER_H

#include <QMainWindow>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QValueAxis>
#include <QtCharts/QBarSet>
#include <QtCharts/QBarSeries>
#include <QtCharts/QChart>
#include <QtCharts/QChartView>


QT_BEGIN_NAMESPACE
namespace Ui { class MapleHelper; }
QT_END_NAMESPACE

class MapleHelper : public QMainWindow

{
    Q_OBJECT

public:
    MapleHelper(QWidget *parent = nullptr);
    ~MapleHelper();

private:
    Ui::MapleHelper *ui;
    int prevLucidDifficulty;
    int prevWillDifficulty;
    void updateChart();
    QBarSet *weeklyMesoSet =new QBarSet("Weekly Mesos");
    QBarSet *dailyMesoSet =new QBarSet("Daily Mesos");
    QBarSeries *series = new QBarSeries();
    QChart *chart = new QChart();
    QStringList categories;
    QBarCategoryAxis *axisX = new QBarCategoryAxis();
    QValueAxis *axisY = new QValueAxis();
    QChartView *chartView = new QChartView(chart);


private slots:
    void bossChecked();
    void zakumChecked();
    void difficultyCheck();
    void on_zakumBox_stateChanged(int arg1);
    void on_magnusBox_stateChanged(int arg1);
    void on_hillaBox_stateChanged(int arg1);
    void on_papalatusBox_stateChanged(int arg1);
    void on_pierreBox_stateChanged(int arg1);
    void on_queenBox_stateChanged(int arg1);
    void on_vonbonBox_stateChanged(int arg1);
    void on_vellumBox_stateChanged(int arg1);
    void on_pinkbeanBox_stateChanged(int arg1);
    void on_cygnusBox_stateChanged(int arg1);
    void on_lotusBox_stateChanged(int arg1);
    void on_damienBox_stateChanged(int arg1);
    void on_slimeBox_stateChanged(int arg1);
    void on_lucidBox_stateChanged(int arg1);
    void on_willBox_stateChanged(int arg1);
    void on_gloomBox_stateChanged(int arg1);
    void on_vhillaBox_stateChanged(int arg1);
    void on_darknellBox_stateChanged(int arg1);
    void on_serenBox_stateChanged(int arg1);
    void on_kalosBox_stateChanged(int arg1);
    void on_pnoBox_stateChanged(int arg1);
    void on_akechiBox_stateChanged(int arg1);
    void on_arkariumBox_stateChanged(int arg1);
    void on_mesoDisplay_textEdited(const QString &arg1);
    void on_mesoDisplay_textChanged(const QString &arg1);
    void on_ursusBox_stateChanged(int arg1);
    void on_vonleonBox_stateChanged(int arg1);
    void on_lotusDifficultyBox_currentIndexChanged(int index);
    void on_damienDifficultyBox_currentIndexChanged(int index);
    void on_slimeDifficultyBox_currentIndexChanged(int index);
    void on_lucidDifficultyBox_currentIndexChanged(int index);
    void on_willDifficultyBox_currentIndexChanged(int index);
    void on_gloomDifficultyBox_currentIndexChanged(int index);
    void on_vhillaDifficultyBox_currentIndexChanged(int index);
    void on_darknellDifficultyBox_currentIndexChanged(int index);
    void on_serenDifficultyBox_currentIndexChanged(int index);
};

#endif // MAPLEHELPER_H
