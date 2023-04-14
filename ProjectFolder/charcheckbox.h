
#ifndef CHARCHECKBOX_H
#define CHARCHECKBOX_H


#include <QWidget>
#include <QCheckBox>
#include <QComboBox>
#include <QLineEdit>
#include <QLabel>
#include <QListWidget>
#include <QVBoxLayout>
class QPushButton;
class CharCheckbox : public QWidget
{
    Q_OBJECT
public:
    explicit CharCheckbox(QWidget *parent = nullptr);
private:
    QPushButton *m_button;
    QComboBox *comboBox;
    QCheckBox *checkBox;
    QLabel *results;
    QLineEdit *edit;
    QListWidget *listWidget;
    QVBoxLayout *verticalBox;

    //init all weekly boss checkboxes here
    QCheckBox *zakumCheck;
    QCheckBox *magnusCheck;
    QCheckBox *hillaCheck;
    QCheckBox *cpapCheck;
    QCheckBox *cPierreCheck;
    QCheckBox *cQueenCheck;
    QCheckBox *cVonBonCheck;
    QCheckBox *cVellumCheck;
    QCheckBox *cPinkBeanCheck;
    QCheckBox *nCygnusCheck;
    //For these bosses, make it check the difficulty of each boss, Normal or Hard, and adjust values based on the slider. Worst case do hard and normal
    QCheckBox *lotusCheck;
    QCheckBox *damienCheck;
    QCheckBox *slimeCheck;
    QCheckBox *lucidCheck;
    QCheckBox *willCheck;
    QCheckBox *gloomCheck;
    QCheckBox *vHillaCheck;
    QCheckBox *serenCheck;
    QCheckBox *kalosCheck;
    QCheckBox *pnoCheck;
    QCheckBox *akechiCheck;
signals:

};

#endif // CHARCHECKBOX_H
