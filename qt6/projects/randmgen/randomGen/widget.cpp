/*   Random Generator
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr

01:55:00 - 02:01:00
*/


#include "widget.h"
#include<QVBoxLayout>
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Random Generator");
    resize(300,200);

    QVBoxLayout *vbox = new QVBoxLayout(this);
    lcd = new QLCDNumber(this);
    lcd->setStyleSheet("background-color:red");
    lcd->setFont(QFont("Times",14));

    QPushButton *btn = new QPushButton(this);
    btn->setFont(QFont("Times",14));
    btn->setText("Generate");
    connect(btn,SIGNAL(clicked( )),this,SLOT(randGenerator()));
    vbox->addWidget(lcd);
    vbox->addWidget(btn);
}

Widget::~Widget() {}

void Widget::randGenerator()
{
    int randomNumber = rand();
    lcd->display(randomNumber);


}
