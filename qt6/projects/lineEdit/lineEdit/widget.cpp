/*lineEdit
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr
44:00  - 46:56
*/
#include "widget.h"
#include<QLineEdit>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QLineEdit") ;
    resize(500,400);
    QLineEdit *lineEdit = new  QLineEdit(this);
    lineEdit->setGeometry(20,20,250,250);
    lineEdit->setFont(QFont("Times",14));






}

Widget::~Widget() {}
