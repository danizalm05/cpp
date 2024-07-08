/*
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr
 01:26:00 01:39:00
*/


#include "widget.h"
#include <QHBoxLayout>
#include <QVBoxLayout>

//#include <QLabel>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    QHBoxLayout *hbox = new   QHBoxLayout();
    check1 = new QCheckBox();
    check1->setText(("Python"));
    check1->setFont(QFont("Times",14) );
    check1->setIcon(QIcon(":/images/boomerang.png"));
    check1->setIconSize(QSize(40,40));
    connect(check1,SIGNAL(stateChanged(int)),SLOT(ChangeCheck( )));

    check2 = new QCheckBox();
    check2->setText(("C++"));
    check2->setFont(QFont("Times",14) );
    check2->setIcon(QIcon(":/images/shoe.PNG"));
    check2->setIconSize(QSize(40,40));
    connect(check2,SIGNAL(stateChanged(int)),SLOT(ChangeCheck( )));

    check3 = new QCheckBox();
    check3->setText(("Java"));
    check3->setFont(QFont("Times",14) );
    check3->setIcon(QIcon(":/images/color_spaces.png"));
    check3->setIconSize(QSize(40,40));
    connect(check3,SIGNAL(stateChanged(int)),SLOT(ChangeCheck( )));

    label = new QLabel("Hello");
    label ->setFont(QFont("Sanserif",16) );

    QVBoxLayout *vbox = new   QVBoxLayout(this);
    vbox->addWidget(label);
    hbox->addWidget(check1);
    hbox->addWidget(check2);
    hbox->addWidget(check3);

    vbox->addLayout(hbox);
}


Widget::~Widget() {}

void Widget::ChangeCheck()
{
    QString value = "";
    if(check1->isChecked()){
        value = check1->text();
    }
    if(check2->isChecked()){
        value = check2->text();
    }

    if(check3->isChecked()){
        value = check3->text();
    }
    label->setText("You have selected :" + value);;

}
