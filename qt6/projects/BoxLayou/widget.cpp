/*Box horiatal Layout
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr
 48:56 - 54:00

Box vertical Layout
54:00 - 58:00
*/


#include "widget.h"
#include<QHBoxLayout>
#include<QVBoxLayout>
#include<QPushButton>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("BoxLayout") ;
    resize(500,400);




    QPushButton *btn1 = new QPushButton(this);
    btn1->setText("Click 1");
    QPushButton *btn2 = new QPushButton(this);
    btn2->setText("Click 2");
    QVBoxLayout *vbox = new QVBoxLayout(this);
    vbox->addWidget(btn1);
    vbox->addWidget(btn2);
    /*
    QPushButton *btn5 = new QPushButton(this);
    btn5->setText("Click 5");
    QPushButton *btn6 = new QPushButton(this);
    btn6->setText("Click 6");
    QPushButton *btn7 = new QPushButton(this);
    btn7->setText("Click 7");
    QPushButton *btn8 = new QPushButton(this);
    btn8->setText("Click 8");
    QHBoxLayout *hbox = new QHBoxLayout(this);
    hbox->addWidget(btn5);
    hbox->addWidget(btn6);
    hbox->addWidget(btn7);
    hbox->addWidget(btn8);
   */
}

Widget::~Widget() {}
