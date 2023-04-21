
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
};

#endif // MAPLEHELPER_H
