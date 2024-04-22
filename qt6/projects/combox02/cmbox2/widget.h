#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QComboBox>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

private:
    QComboBox *combo;
    QLabel *labelResult;
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
