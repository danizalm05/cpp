/* QFontBox
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr

02:36:00 - 02:43 :00
*/



#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);
    QHBoxLayout *hbox = new QHBoxLayout();
    QLabel *label = new QLabel();
    label->setText("Select Account Type");
    label->setFont(QFont("Times",14));
    combo = new QComboBox();
    combo->setFont(QFont("Times",14));
    combo->addItem("Deposit Account");
    combo->addItem("Saving Account");
    combo->addItem("Running Account");
    /* connect(, SIGNAL(f(value)),  , SLOT(f())); */


    labelResult = new QLabel("hhh");
    QVBoxLayout *vbox = new QVBoxLayout(this);
    labelResult->setFont(QFont("Times",14));
    vbox->addWidget(labelResult);

    fontCombo =new QFontComboBox();
    connect(combo,SIGNAL(currentTextChanged(QString)),this , SLOT(comboChanged()));
    connect(fontCombo,SIGNAL(currentFontChanged(QFont)),this , SLOT(changeFont()  ));



    edit = new QTextEdit();

    hbox->addWidget(label);
    hbox->addWidget(combo);
    vbox->addLayout(hbox);
    vbox->addWidget(fontCombo);
    vbox->addWidget(edit);
}

Widget::~Widget() {}

void Widget::comboChanged()
{
    QString item = combo->currentText();
    labelResult->setText("Type : "+item);

}

void Widget::changeFont()
{
    //int fontIndex = fontCombo->currentText();
    QFont myFont = QFont(fontCombo->itemText(fontCombo->currentIndex()));
    edit->setFont(myFont);
    labelResult->setFont(myFont);
}
