
#ifndef MAPLEHELPER_H
#define MAPLEHELPER_H

#include <QMainWindow>



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
    void on_lotusDifficultyBox_textActivated(const QString &arg1);
    void on_damienBox_stateChanged(int arg1);
};

#endif // MAPLEHELPER_H
