/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *Titlelabel;
    QLabel *RoleNumlabel;
    QLabel *booknamelabel;
    QLineEdit *RoleNumLineEdit;
    QLineEdit *BookNameLineEdit;
    QPushButton *OKpushButton;
    QPushButton *ExitpushButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(405, 269);
        QFont font;
        font.setBold(true);
        font.setItalic(false);
        MainWindow->setFont(font);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        Titlelabel = new QLabel(centralwidget);
        Titlelabel->setObjectName("Titlelabel");
        Titlelabel->setGeometry(QRect(80, 20, 251, 31));
        Titlelabel->setStyleSheet(QString::fromUtf8("QLabel\n"
"{\n"
"font-size:20px;\n"
"}"));
        RoleNumlabel = new QLabel(centralwidget);
        RoleNumlabel->setObjectName("RoleNumlabel");
        RoleNumlabel->setGeometry(QRect(10, 80, 81, 21));
        QFont font1;
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setItalic(false);
        RoleNumlabel->setFont(font1);
        booknamelabel = new QLabel(centralwidget);
        booknamelabel->setObjectName("booknamelabel");
        booknamelabel->setGeometry(QRect(10, 120, 101, 21));
        booknamelabel->setFont(font1);
        RoleNumLineEdit = new QLineEdit(centralwidget);
        RoleNumLineEdit->setObjectName("RoleNumLineEdit");
        RoleNumLineEdit->setGeometry(QRect(140, 80, 191, 25));
        RoleNumLineEdit->setFont(font1);
        BookNameLineEdit = new QLineEdit(centralwidget);
        BookNameLineEdit->setObjectName("BookNameLineEdit");
        BookNameLineEdit->setGeometry(QRect(140, 120, 231, 25));
        BookNameLineEdit->setFont(font1);
        OKpushButton = new QPushButton(centralwidget);
        OKpushButton->setObjectName("OKpushButton");
        OKpushButton->setGeometry(QRect(80, 180, 80, 25));
        ExitpushButton = new QPushButton(centralwidget);
        ExitpushButton->setObjectName("ExitpushButton");
        ExitpushButton->setGeometry(QRect(290, 180, 80, 25));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 405, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Titlelabel->setText(QCoreApplication::translate("MainWindow", "Library Mangment System", nullptr));
        RoleNumlabel->setText(QCoreApplication::translate("MainWindow", "RoleNum:", nullptr));
        booknamelabel->setText(QCoreApplication::translate("MainWindow", "Book Name", nullptr));
        RoleNumLineEdit->setText(QString());
        BookNameLineEdit->setText(QString());
        OKpushButton->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        ExitpushButton->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
