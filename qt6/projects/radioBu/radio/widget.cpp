/*
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr
01:23:53  01:26:00
*/



#include "widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    QHBoxLayout *hbox = new QHBoxLayout();

    rad1 = new QRadioButton(this);
    rad1->setText("Python");
    rad1->setFont(QFont("Times",14));
    rad1->setIcon(QIcon(":/images/boomerang.png"));
    rad1->setIconSize(QSize(40,40));
    connect(rad1,SIGNAL(toggled(bool)),this,SLOT(ChangeRad()));


    rad2 = new QRadioButton(this);
    rad2->setText("C++");
    rad2->setFont(QFont("Times",14));
    rad2->setIcon(QIcon(":/images/color_spaces.png"));
    rad2->setIconSize(QSize(40,40));
    connect(rad2,SIGNAL(toggled(bool)),this,SLOT(ChangeRad()));


    rad3 = new QRadioButton(this);
    rad3->setFont(QFont("Times",14));
    rad3->setIcon(QIcon(":/images/shoe.PNG"));
    rad3->setText("Java");
    rad3->setIconSize(QSize(40,40));
    connect(rad3,SIGNAL(toggled(bool)),this,SLOT(ChangeRad()));


    QVBoxLayout *vbox = new QVBoxLayout(this);
    label = new QLabel("Hello") ;
    label->setFont(QFont("Times",16));
    vbox->addWidget(label);

    hbox->addWidget(rad1);
    hbox->addWidget(rad2);
    hbox->addWidget(rad3);
    vbox->addLayout(hbox);

}

Widget::~Widget()
{

}

void Widget::ChangeRad()
{
    if(rad1->isChecked()){
       label->setText("Python");
    }

    if(rad2->isChecked()){
        label->setText("C++");
    }
    if(rad3->isChecked()){
        label->setText("Java");
    }
}
