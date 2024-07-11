/*
 *Library Management System in Qt  C++

https://www.youtube.com/watch?v=FbyB4rkzE10&list=PL8MpAn684UHKt_umMjmD0EhbV5IZ-5uLd&index=5
     24:05
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->OKpushButton,SIGNAL(clickd()),
            this,SLOT(on_OKpushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_OKpushButton_clicked()
{
    QString book[] = {"HP","Eng","Mat"};
    int rollNo[] = {101,203,304};

    QString ubook   = ui->BookNameLineEdit->text();
    QString uRollNo = ui->RoleNumLineEdit->text();

    int uRollNo_int =  uRollNo.toInt();

    for (int i =0; i < sizeof(rollNo);i++)
    {
        if(uRollNo_int==rollNo[i]  &&  ubook==book[i] )
    }
}

