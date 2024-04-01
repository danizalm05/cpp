/*lineEdit
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr
44:00  - 48:56


*/
#include "widget.h"
#include<QLineEdit>


Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("QLineEdit") ;
    resize(500,400);
    QLineEdit *lineEdit = new  QLineEdit(this);
    lineEdit->setGeometry(20,20,250,50);
    lineEdit->setFont(QFont("Times",14));
    //lineEdit->setEnabled(false);// No editing
    lineEdit->setEchoMode(QLineEdit::EchoMode::Password);//Passward input








}

Widget::~Widget() {}
