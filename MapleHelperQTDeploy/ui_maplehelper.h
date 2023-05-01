/********************************************************************************
** Form generated from reading UI file 'maplehelper.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAPLEHELPER_H
#define UI_MAPLEHELPER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MapleHelper
{
public:
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QCheckBox *zakumBox;
    QCheckBox *magnusBox;
    QCheckBox *hillaBox;
    QCheckBox *papalatusBox;
    QCheckBox *pierreBox;
    QCheckBox *queenBox;
    QCheckBox *vonbonBox;
    QCheckBox *pinkbeanBox;
    QCheckBox *cygnusBox;
    QCheckBox *lotusBox;
    QComboBox *lotusDifficultyBox;
    QCheckBox *damienBox;
    QComboBox *damienDifficultyBox;
    QCheckBox *slimeBox;
    QComboBox *slimeDifficultyBox;
    QCheckBox *lucidBox;
    QComboBox *lucidDifficultyBox;
    QCheckBox *willBox;
    QComboBox *willDifficultyBox;
    QCheckBox *gloomBox;
    QComboBox *gloomDifficultyBox;
    QCheckBox *vhillaBox;
    QComboBox *vhillaDifficultyBox;
    QCheckBox *darknellBox;
    QComboBox *darknellDifficultyBox;
    QCheckBox *serenBox;
    QComboBox *serenDifficultyBox;
    QCheckBox *kalosBox;
    QCheckBox *pnoBox;
    QCheckBox *akechiBox;
    QCheckBox *vellumBox;
    QLineEdit *mesoDisplay;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout_2;
    QCheckBox *arkariumBox;
    QCheckBox *ursusBox;
    QCheckBox *vonleonBox;
    QCheckBox *golluxBox;
    QLabel *weeklyTag;
    QLabel *dailyTag;
    QWidget *formLayoutWidget_3;
    QFormLayout *formLayout_3;
    QCheckBox *vanishingBox;
    QCheckBox *chuchuBox;
    QCheckBox *lachBox;
    QCheckBox *arcanaBox;
    QCheckBox *morassBox;
    QCheckBox *esferaBox;
    QCheckBox *teneBox;
    QLabel *label;
    QWidget *formLayoutWidget_4;
    QFormLayout *formLayout_4;
    QCheckBox *cerniumBox;
    QCheckBox *bcernBox;
    QCheckBox *arcusBox;
    QCheckBox *odiumBox;
    QLabel *label_2;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MapleHelper)
    {
        if (MapleHelper->objectName().isEmpty())
            MapleHelper->setObjectName("MapleHelper");
        MapleHelper->resize(1378, 690);
        centralwidget = new QWidget(MapleHelper);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(60, 20, 231, 604));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        zakumBox = new QCheckBox(formLayoutWidget);
        zakumBox->setObjectName("zakumBox");

        formLayout->setWidget(0, QFormLayout::LabelRole, zakumBox);

        magnusBox = new QCheckBox(formLayoutWidget);
        magnusBox->setObjectName("magnusBox");

        formLayout->setWidget(1, QFormLayout::LabelRole, magnusBox);

        hillaBox = new QCheckBox(formLayoutWidget);
        hillaBox->setObjectName("hillaBox");

        formLayout->setWidget(2, QFormLayout::LabelRole, hillaBox);

        papalatusBox = new QCheckBox(formLayoutWidget);
        papalatusBox->setObjectName("papalatusBox");

        formLayout->setWidget(3, QFormLayout::LabelRole, papalatusBox);

        pierreBox = new QCheckBox(formLayoutWidget);
        pierreBox->setObjectName("pierreBox");

        formLayout->setWidget(4, QFormLayout::LabelRole, pierreBox);

        queenBox = new QCheckBox(formLayoutWidget);
        queenBox->setObjectName("queenBox");

        formLayout->setWidget(5, QFormLayout::LabelRole, queenBox);

        vonbonBox = new QCheckBox(formLayoutWidget);
        vonbonBox->setObjectName("vonbonBox");

        formLayout->setWidget(7, QFormLayout::LabelRole, vonbonBox);

        pinkbeanBox = new QCheckBox(formLayoutWidget);
        pinkbeanBox->setObjectName("pinkbeanBox");

        formLayout->setWidget(10, QFormLayout::LabelRole, pinkbeanBox);

        cygnusBox = new QCheckBox(formLayoutWidget);
        cygnusBox->setObjectName("cygnusBox");

        formLayout->setWidget(11, QFormLayout::LabelRole, cygnusBox);

        lotusBox = new QCheckBox(formLayoutWidget);
        lotusBox->setObjectName("lotusBox");

        formLayout->setWidget(12, QFormLayout::LabelRole, lotusBox);

        lotusDifficultyBox = new QComboBox(formLayoutWidget);
        lotusDifficultyBox->addItem(QString());
        lotusDifficultyBox->addItem(QString());
        lotusDifficultyBox->setObjectName("lotusDifficultyBox");
        lotusDifficultyBox->setEditable(false);

        formLayout->setWidget(12, QFormLayout::FieldRole, lotusDifficultyBox);

        damienBox = new QCheckBox(formLayoutWidget);
        damienBox->setObjectName("damienBox");

        formLayout->setWidget(13, QFormLayout::LabelRole, damienBox);

        damienDifficultyBox = new QComboBox(formLayoutWidget);
        damienDifficultyBox->addItem(QString());
        damienDifficultyBox->addItem(QString());
        damienDifficultyBox->setObjectName("damienDifficultyBox");

        formLayout->setWidget(13, QFormLayout::FieldRole, damienDifficultyBox);

        slimeBox = new QCheckBox(formLayoutWidget);
        slimeBox->setObjectName("slimeBox");

        formLayout->setWidget(14, QFormLayout::LabelRole, slimeBox);

        slimeDifficultyBox = new QComboBox(formLayoutWidget);
        slimeDifficultyBox->addItem(QString());
        slimeDifficultyBox->addItem(QString());
        slimeDifficultyBox->setObjectName("slimeDifficultyBox");

        formLayout->setWidget(14, QFormLayout::FieldRole, slimeDifficultyBox);

        lucidBox = new QCheckBox(formLayoutWidget);
        lucidBox->setObjectName("lucidBox");

        formLayout->setWidget(15, QFormLayout::LabelRole, lucidBox);

        lucidDifficultyBox = new QComboBox(formLayoutWidget);
        lucidDifficultyBox->addItem(QString());
        lucidDifficultyBox->addItem(QString());
        lucidDifficultyBox->addItem(QString());
        lucidDifficultyBox->setObjectName("lucidDifficultyBox");

        formLayout->setWidget(15, QFormLayout::FieldRole, lucidDifficultyBox);

        willBox = new QCheckBox(formLayoutWidget);
        willBox->setObjectName("willBox");

        formLayout->setWidget(17, QFormLayout::LabelRole, willBox);

        willDifficultyBox = new QComboBox(formLayoutWidget);
        willDifficultyBox->addItem(QString());
        willDifficultyBox->addItem(QString());
        willDifficultyBox->addItem(QString());
        willDifficultyBox->setObjectName("willDifficultyBox");

        formLayout->setWidget(17, QFormLayout::FieldRole, willDifficultyBox);

        gloomBox = new QCheckBox(formLayoutWidget);
        gloomBox->setObjectName("gloomBox");

        formLayout->setWidget(18, QFormLayout::LabelRole, gloomBox);

        gloomDifficultyBox = new QComboBox(formLayoutWidget);
        gloomDifficultyBox->addItem(QString());
        gloomDifficultyBox->addItem(QString());
        gloomDifficultyBox->setObjectName("gloomDifficultyBox");

        formLayout->setWidget(18, QFormLayout::FieldRole, gloomDifficultyBox);

        vhillaBox = new QCheckBox(formLayoutWidget);
        vhillaBox->setObjectName("vhillaBox");

        formLayout->setWidget(19, QFormLayout::LabelRole, vhillaBox);

        vhillaDifficultyBox = new QComboBox(formLayoutWidget);
        vhillaDifficultyBox->addItem(QString());
        vhillaDifficultyBox->addItem(QString());
        vhillaDifficultyBox->setObjectName("vhillaDifficultyBox");

        formLayout->setWidget(19, QFormLayout::FieldRole, vhillaDifficultyBox);

        darknellBox = new QCheckBox(formLayoutWidget);
        darknellBox->setObjectName("darknellBox");

        formLayout->setWidget(20, QFormLayout::LabelRole, darknellBox);

        darknellDifficultyBox = new QComboBox(formLayoutWidget);
        darknellDifficultyBox->addItem(QString());
        darknellDifficultyBox->addItem(QString());
        darknellDifficultyBox->setObjectName("darknellDifficultyBox");

        formLayout->setWidget(20, QFormLayout::FieldRole, darknellDifficultyBox);

        serenBox = new QCheckBox(formLayoutWidget);
        serenBox->setObjectName("serenBox");

        formLayout->setWidget(21, QFormLayout::LabelRole, serenBox);

        serenDifficultyBox = new QComboBox(formLayoutWidget);
        serenDifficultyBox->addItem(QString());
        serenDifficultyBox->addItem(QString());
        serenDifficultyBox->setObjectName("serenDifficultyBox");

        formLayout->setWidget(21, QFormLayout::FieldRole, serenDifficultyBox);

        kalosBox = new QCheckBox(formLayoutWidget);
        kalosBox->setObjectName("kalosBox");

        formLayout->setWidget(22, QFormLayout::LabelRole, kalosBox);

        pnoBox = new QCheckBox(formLayoutWidget);
        pnoBox->setObjectName("pnoBox");

        formLayout->setWidget(23, QFormLayout::LabelRole, pnoBox);

        akechiBox = new QCheckBox(formLayoutWidget);
        akechiBox->setObjectName("akechiBox");

        formLayout->setWidget(24, QFormLayout::LabelRole, akechiBox);

        vellumBox = new QCheckBox(formLayoutWidget);
        vellumBox->setObjectName("vellumBox");

        formLayout->setWidget(9, QFormLayout::LabelRole, vellumBox);

        mesoDisplay = new QLineEdit(centralwidget);
        mesoDisplay->setObjectName("mesoDisplay");
        mesoDisplay->setGeometry(QRect(810, 30, 371, 41));
        QFont font;
        font.setPointSize(14);
        font.setBold(true);
        mesoDisplay->setFont(font);
        mesoDisplay->setLayoutDirection(Qt::LeftToRight);
        mesoDisplay->setMaxLength(32767);
        mesoDisplay->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        mesoDisplay->setReadOnly(true);
        mesoDisplay->setClearButtonEnabled(false);
        formLayoutWidget_2 = new QWidget(centralwidget);
        formLayoutWidget_2->setObjectName("formLayoutWidget_2");
        formLayoutWidget_2->setGeometry(QRect(340, 20, 191, 100));
        formLayout_2 = new QFormLayout(formLayoutWidget_2);
        formLayout_2->setObjectName("formLayout_2");
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        arkariumBox = new QCheckBox(formLayoutWidget_2);
        arkariumBox->setObjectName("arkariumBox");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, arkariumBox);

        ursusBox = new QCheckBox(formLayoutWidget_2);
        ursusBox->setObjectName("ursusBox");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, ursusBox);

        vonleonBox = new QCheckBox(formLayoutWidget_2);
        vonleonBox->setObjectName("vonleonBox");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, vonleonBox);

        golluxBox = new QCheckBox(formLayoutWidget_2);
        golluxBox->setObjectName("golluxBox");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, golluxBox);

        weeklyTag = new QLabel(centralwidget);
        weeklyTag->setObjectName("weeklyTag");
        weeklyTag->setGeometry(QRect(120, 0, 91, 16));
        dailyTag = new QLabel(centralwidget);
        dailyTag->setObjectName("dailyTag");
        dailyTag->setGeometry(QRect(400, 0, 81, 16));
        formLayoutWidget_3 = new QWidget(centralwidget);
        formLayoutWidget_3->setObjectName("formLayoutWidget_3");
        formLayoutWidget_3->setGeometry(QRect(350, 170, 160, 178));
        formLayout_3 = new QFormLayout(formLayoutWidget_3);
        formLayout_3->setObjectName("formLayout_3");
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        vanishingBox = new QCheckBox(formLayoutWidget_3);
        vanishingBox->setObjectName("vanishingBox");

        formLayout_3->setWidget(0, QFormLayout::LabelRole, vanishingBox);

        chuchuBox = new QCheckBox(formLayoutWidget_3);
        chuchuBox->setObjectName("chuchuBox");

        formLayout_3->setWidget(1, QFormLayout::LabelRole, chuchuBox);

        lachBox = new QCheckBox(formLayoutWidget_3);
        lachBox->setObjectName("lachBox");

        formLayout_3->setWidget(2, QFormLayout::LabelRole, lachBox);

        arcanaBox = new QCheckBox(formLayoutWidget_3);
        arcanaBox->setObjectName("arcanaBox");

        formLayout_3->setWidget(3, QFormLayout::LabelRole, arcanaBox);

        morassBox = new QCheckBox(formLayoutWidget_3);
        morassBox->setObjectName("morassBox");

        formLayout_3->setWidget(4, QFormLayout::LabelRole, morassBox);

        esferaBox = new QCheckBox(formLayoutWidget_3);
        esferaBox->setObjectName("esferaBox");

        formLayout_3->setWidget(5, QFormLayout::LabelRole, esferaBox);

        teneBox = new QCheckBox(formLayoutWidget_3);
        teneBox->setObjectName("teneBox");

        formLayout_3->setWidget(6, QFormLayout::LabelRole, teneBox);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(370, 150, 141, 16));
        formLayoutWidget_4 = new QWidget(centralwidget);
        formLayoutWidget_4->setObjectName("formLayoutWidget_4");
        formLayoutWidget_4->setGeometry(QRect(350, 400, 160, 100));
        formLayout_4 = new QFormLayout(formLayoutWidget_4);
        formLayout_4->setObjectName("formLayout_4");
        formLayout_4->setContentsMargins(0, 0, 0, 0);
        cerniumBox = new QCheckBox(formLayoutWidget_4);
        cerniumBox->setObjectName("cerniumBox");

        formLayout_4->setWidget(0, QFormLayout::LabelRole, cerniumBox);

        bcernBox = new QCheckBox(formLayoutWidget_4);
        bcernBox->setObjectName("bcernBox");

        formLayout_4->setWidget(1, QFormLayout::LabelRole, bcernBox);

        arcusBox = new QCheckBox(formLayoutWidget_4);
        arcusBox->setObjectName("arcusBox");

        formLayout_4->setWidget(2, QFormLayout::LabelRole, arcusBox);

        odiumBox = new QCheckBox(formLayoutWidget_4);
        odiumBox->setObjectName("odiumBox");

        formLayout_4->setWidget(3, QFormLayout::LabelRole, odiumBox);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(370, 380, 121, 16));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(660, 120, 621, 401));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        MapleHelper->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MapleHelper);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1378, 22));
        MapleHelper->setMenuBar(menubar);
        statusbar = new QStatusBar(MapleHelper);
        statusbar->setObjectName("statusbar");
        MapleHelper->setStatusBar(statusbar);

        retranslateUi(MapleHelper);

        QMetaObject::connectSlotsByName(MapleHelper);
    } // setupUi

    void retranslateUi(QMainWindow *MapleHelper)
    {
        MapleHelper->setWindowTitle(QCoreApplication::translate("MapleHelper", "MapleHelper", nullptr));
        zakumBox->setText(QCoreApplication::translate("MapleHelper", "Chaos Zakum", nullptr));
        magnusBox->setText(QCoreApplication::translate("MapleHelper", "Hard Magnus", nullptr));
        hillaBox->setText(QCoreApplication::translate("MapleHelper", "Hard Hilla", nullptr));
        papalatusBox->setText(QCoreApplication::translate("MapleHelper", "Chaos Papalatus", nullptr));
        pierreBox->setText(QCoreApplication::translate("MapleHelper", "Chaos Pierre", nullptr));
        queenBox->setText(QCoreApplication::translate("MapleHelper", "Chaos Queen", nullptr));
        vonbonBox->setText(QCoreApplication::translate("MapleHelper", "Chaos Von Bon", nullptr));
        pinkbeanBox->setText(QCoreApplication::translate("MapleHelper", "Chaos Pink Bean", nullptr));
        cygnusBox->setText(QCoreApplication::translate("MapleHelper", "Cygnus", nullptr));
        lotusBox->setText(QCoreApplication::translate("MapleHelper", "Lotus", nullptr));
        lotusDifficultyBox->setItemText(0, QCoreApplication::translate("MapleHelper", "Normal", nullptr));
        lotusDifficultyBox->setItemText(1, QCoreApplication::translate("MapleHelper", "Hard", nullptr));

        damienBox->setText(QCoreApplication::translate("MapleHelper", "Damien", nullptr));
        damienDifficultyBox->setItemText(0, QCoreApplication::translate("MapleHelper", "Normal", nullptr));
        damienDifficultyBox->setItemText(1, QCoreApplication::translate("MapleHelper", "Hard", nullptr));

        slimeBox->setText(QCoreApplication::translate("MapleHelper", "Guardian Angel Slime", nullptr));
        slimeDifficultyBox->setItemText(0, QCoreApplication::translate("MapleHelper", "Normal", nullptr));
        slimeDifficultyBox->setItemText(1, QCoreApplication::translate("MapleHelper", "Chaos", nullptr));

        lucidBox->setText(QCoreApplication::translate("MapleHelper", "Lucid", nullptr));
        lucidDifficultyBox->setItemText(0, QCoreApplication::translate("MapleHelper", "Easy", nullptr));
        lucidDifficultyBox->setItemText(1, QCoreApplication::translate("MapleHelper", "Normal", nullptr));
        lucidDifficultyBox->setItemText(2, QCoreApplication::translate("MapleHelper", "Hard", nullptr));

        willBox->setText(QCoreApplication::translate("MapleHelper", "Will", nullptr));
        willDifficultyBox->setItemText(0, QCoreApplication::translate("MapleHelper", "Easy", nullptr));
        willDifficultyBox->setItemText(1, QCoreApplication::translate("MapleHelper", "Normal", nullptr));
        willDifficultyBox->setItemText(2, QCoreApplication::translate("MapleHelper", "Hard", nullptr));

        gloomBox->setText(QCoreApplication::translate("MapleHelper", "Gloom", nullptr));
        gloomDifficultyBox->setItemText(0, QCoreApplication::translate("MapleHelper", "Normal", nullptr));
        gloomDifficultyBox->setItemText(1, QCoreApplication::translate("MapleHelper", "Chaos", nullptr));

        vhillaBox->setText(QCoreApplication::translate("MapleHelper", "Verus Hilla", nullptr));
        vhillaDifficultyBox->setItemText(0, QCoreApplication::translate("MapleHelper", "Normal", nullptr));
        vhillaDifficultyBox->setItemText(1, QCoreApplication::translate("MapleHelper", "Hard", nullptr));

        darknellBox->setText(QCoreApplication::translate("MapleHelper", "Darknell", nullptr));
        darknellDifficultyBox->setItemText(0, QCoreApplication::translate("MapleHelper", "Normal", nullptr));
        darknellDifficultyBox->setItemText(1, QCoreApplication::translate("MapleHelper", "Hard", nullptr));

        serenBox->setText(QCoreApplication::translate("MapleHelper", "Seren", nullptr));
        serenDifficultyBox->setItemText(0, QCoreApplication::translate("MapleHelper", "Normal", nullptr));
        serenDifficultyBox->setItemText(1, QCoreApplication::translate("MapleHelper", "Hard", nullptr));

        kalosBox->setText(QCoreApplication::translate("MapleHelper", "Kalos", nullptr));
        pnoBox->setText(QCoreApplication::translate("MapleHelper", "Princess No", nullptr));
        akechiBox->setText(QCoreApplication::translate("MapleHelper", "Akechi ", nullptr));
        vellumBox->setText(QCoreApplication::translate("MapleHelper", "Chaos Vellum", nullptr));
        mesoDisplay->setText(QCoreApplication::translate("MapleHelper", "0", nullptr));
        arkariumBox->setText(QCoreApplication::translate("MapleHelper", "Arkarium", nullptr));
        ursusBox->setText(QCoreApplication::translate("MapleHelper", "3x Ursus", nullptr));
        vonleonBox->setText(QCoreApplication::translate("MapleHelper", "Hard Von Leon", nullptr));
        golluxBox->setText(QCoreApplication::translate("MapleHelper", "Gollux", nullptr));
        weeklyTag->setText(QCoreApplication::translate("MapleHelper", "Weekly Bosses", nullptr));
        dailyTag->setText(QCoreApplication::translate("MapleHelper", "Daily Bosses", nullptr));
        vanishingBox->setText(QCoreApplication::translate("MapleHelper", "Vanishing Journey", nullptr));
        chuchuBox->setText(QCoreApplication::translate("MapleHelper", "Chu Chu Island", nullptr));
        lachBox->setText(QCoreApplication::translate("MapleHelper", "Lachelein", nullptr));
        arcanaBox->setText(QCoreApplication::translate("MapleHelper", "Arcana", nullptr));
        morassBox->setText(QCoreApplication::translate("MapleHelper", "Morass", nullptr));
        esferaBox->setText(QCoreApplication::translate("MapleHelper", "Esfera", nullptr));
        teneBox->setText(QCoreApplication::translate("MapleHelper", "Tenebris", nullptr));
        label->setText(QCoreApplication::translate("MapleHelper", "Arcane River Dailies", nullptr));
        cerniumBox->setText(QCoreApplication::translate("MapleHelper", "Cernium", nullptr));
        bcernBox->setText(QCoreApplication::translate("MapleHelper", "Burning Cernium", nullptr));
        arcusBox->setText(QCoreApplication::translate("MapleHelper", "Hotel Arcus", nullptr));
        odiumBox->setText(QCoreApplication::translate("MapleHelper", "Odium", nullptr));
        label_2->setText(QCoreApplication::translate("MapleHelper", "Sacred Symbol Dailies", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MapleHelper: public Ui_MapleHelper {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAPLEHELPER_H
