/*slider
https://www.youtube.com/watch?v=Wi9nQTDFF4U&list=PL1FgJUcJJ03uTfN-0NVzfUSyoZtM3pUfr
  02:23:00 - 02:29:30
 */


#include "widget.h"
#include <QHBoxLayout>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    resize(500,100);
    QHBoxLayout *hbox = new  QHBoxLayout(this);
    slider = new QSlider();
    slider->setOrientation(Qt::Horizontal);
    slider->setTickPosition(QSlider::TicksBelow);
    slider->setTickInterval(5);
    slider->setMinimum(5);
    slider->setMaximum(75);
    connect(slider,SIGNAL(valueChanged(int)),this,SLOT(changeSlider()));
    labelResult = new  QLabel("hhhh");
    labelResult->setFont(QFont("Times",14));

    hbox->addWidget(slider);
    hbox->addWidget(labelResult);
}

Widget::~Widget() {}

void Widget::changeSlider()
{
    int value = slider->value();
    labelResult->setText(QString::number(value));
}
