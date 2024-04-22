/* QSlider
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr

 02:22:00 - 02:   :
*/

#include "widget.h"
#include<QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);
  /*connect(combo,SIGNAL(currentTextChanged(QString)),this , SLOT(comboChanged()));
*/



}

Widget::~Widget() {}
