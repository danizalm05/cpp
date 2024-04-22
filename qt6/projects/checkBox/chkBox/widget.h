#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCheckBox>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
public slots:
    void ChangeCheck();
private:
    QLabel *label;
    QCheckBox *check1;
    QCheckBox *check2;
    QCheckBox *check3;
};
#endif // WIDGET_H
