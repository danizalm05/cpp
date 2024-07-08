#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QComboBox>
#include <QFontComboBox>
#include <QTextEdit>
#include <QLabel>

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

public slots:
    void comboChanged();
    void changeFont();
private:
    QFontComboBox *fontCombo;
    QTextEdit *edit;
    QComboBox  *combo;
    QLabel     * labelResult;


};
#endif // WIDGET_H
