/*ListWidget
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr
02:30:00  - 02:36:00
*/


#include "widget.h"
#include <QVBoxLayout>
#include <QListWidgetItem>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{

    resize(500,400);
    QVBoxLayout *vbox = new QVBoxLayout(this);
    QListWidget *listWidget = new QListWidget();
    listWidget->setFont(QFont("Times",14));
    listWidget->setStyleSheet( "background-color:yellow");
    listWidget->insertItem(0,"C++");
    listWidget->insertItem(1,"Python");
    listWidget->insertItem(2,"Java");
    listWidget->insertItem(3,"C#");


    vbox->addWidget(listWidget);
}

Widget::~Widget() {}
