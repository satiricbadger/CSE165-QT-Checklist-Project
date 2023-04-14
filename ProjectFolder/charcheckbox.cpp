
#include "charcheckbox.h"
#include <QApplication>
#include <QPushButton>
#include <QListWidget>
#include <QVBoxLayout>
#include <QCheckBox>
CharCheckbox::CharCheckbox(QWidget *parent): QWidget{parent}
{
    //Set size of window
    setFixedSize(400,200);


    //Create and position the button.
    m_button = new QPushButton("Update mesos obtained.", this);
    m_button->setGeometry(10,10,180,30);

    //Does an event when m_button is clicked. Change this into a loot timer.
    connect(m_button,SIGNAL(clicked()), QApplication::instance(),SLOT(quit()));

    //Build weekly checkboxes.
    zakumCheck = new QCheckBox;
    zakumCheck->setText("Chaos Zakum");
    zakumCheck->setFont(QFont("Times",12));

    magnusCheck = new QCheckBox;
    magnusCheck->setText("Hard Magnus");
    magnusCheck->setFont(QFont("Times",12));

    hillaCheck = new QCheckBox;
    hillaCheck->setText("Hard Hilla");
    hillaCheck->setFont(QFont("Times",12));



    //Build VBox here.
    verticalBox = new QVBoxLayout(this);
    verticalBox->addWidget(zakumCheck);
    verticalBox->addWidget(magnusCheck);
    verticalBox->addWidget(hillaCheck);
    verticalBox->addLayout(verticalBox);


}

