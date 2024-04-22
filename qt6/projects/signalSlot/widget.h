#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLabel>
class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


private:
    QLabel *label;

public slots:
    void ChangeText();
};




#endif // WIDGET_H
