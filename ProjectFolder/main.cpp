
#include <QApplication>
#include <QPushButton>
#include "charcheckbox.h"
int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    CharCheckbox checkbox;
    checkbox.show();
    return app.exec();

}
