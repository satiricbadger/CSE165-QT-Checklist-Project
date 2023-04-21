
#include "maplehelper.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MapleHelper w;
    w.show();
    return a.exec();
}
