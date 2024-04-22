/* QComboBox
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr

02:01:00 - 02:12:00
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
    connect(combo,SIGNAL(currentTextChanged(QString)),this , SLOT(comboChanged()));
    labelResult = new QLabel("hhh");
    QVBoxLayout *vbox = new QVBoxLayout(this);
    labelResult->setFont(QFont("Times",14));
    vbox->addWidget(labelResult);


    hbox->addWidget(label);
    hbox->addWidget(combo);
    vbox->addLayout(hbox);

}

Widget::~Widget() {}

void Widget::comboChanged()
{
    QString item = combo->currentText();
    labelResult->setText("Type : "+item);

}
