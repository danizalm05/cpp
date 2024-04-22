
/*
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr
  01:39:00 01:47:00
*/
#include "widget.h"
#include<QHBoxLayout>
#include<QLabel>
Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new QHBoxLayout(this);
    QLabel *label = new QLabel();
    label->setText("Price : ");
    label->setFont(QFont("Times",15));

    price = new QLineEdit();
    price->setFont(QFont("Times",15));

    total = new QLineEdit();
    total->setFont(QFont("Times",15));

    spinbox = new QSpinBox();
    spinbox->setFont(QFont("Times",15));

    connect(spinbox,SIGNAL(valueChanged(int)),this,SLOT(changeSpin()));
    hbox->addWidget(label);
    hbox->addWidget(price);
    hbox->addWidget(spinbox);
    hbox->addWidget(total);


}

Widget::~Widget() {}

void Widget::changeSpin()
{
  int myprice = price->text().toInt();
  int totalNumber = spinbox->value() *  myprice;
  total->setText(QString::number(totalNumber));
}
