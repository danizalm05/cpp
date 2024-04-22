/*Grid
 * https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr
        59:00 - 01:01:00
*/
#include "widget.h"
#include<QGridLayout>
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("GridLayout") ;
    resize(500,400);

    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("1");

    QPushButton *btn2 = new QPushButton(this);
    btn2->setText("2");
    QPushButton *btn3 = new QPushButton(this);
    btn3->setText("3");
    QPushButton *btn4 = new QPushButton(this);
    btn4->setText("4");

    QGridLayout *grid = new QGridLayout(this);
    grid->addWidget(btn1,0,0);
    grid->addWidget(btn2,0,1);
    grid->addWidget(btn3,1,0);
    grid->addWidget(btn4,1,1);



}

Widget::~Widget() {}
