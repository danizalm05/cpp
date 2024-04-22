/*
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr

 01:50:00 - 01:55:00
*/
#include "widget.h"
#include<QHBoxLayout>
#include<QTime>
#include<QTimer>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    setWindowTitle("LCD");
    resize(300,200);

    QHBoxLayout *hbox = new QHBoxLayout(this);

    lcd = new QLCDNumber(this);
    lcd->setFont(QFont("Times,14"));
    lcd->setStyleSheet("background-color:yellow");
    QTimer *timer = new QTimer(this);

    connect(timer,SIGNAL(timeout()),this, SLOT(showTime()));
    timer->start((1000));
    showTime();
    hbox->addWidget(lcd);
}

Widget::~Widget() {}

void Widget::showTime()
{
    QTime time = QTime::currentTime();
    QString text = time.toString("hh:mm");

    if(  (time.second() % 2 )  == 0 )
       text[2] = ' ';// Make the ":" in the midde to blink
    lcd->display(text);
}
