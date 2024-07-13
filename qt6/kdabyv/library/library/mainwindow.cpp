/*
 *Library Management System in Qt  C++

https://www.youtube.com/watch?v=FbyB4rkzE10&list=PL8MpAn684UHKt_umMjmD0EhbV5IZ-5uLd&index=5
     23:05
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->OKpushButton,SIGNAL(clicked()),
            this,SLOT(on_OKpushButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_OKpushButton_clicked()
{
    QString book[] = {"aa","bb","cc"};
    int rollNo[] = {101,203,304};

    QString ubook = ui->BookNameLineEdit->text();
    QString urollNo = ui->RoleNumLineEdit->text();

    int urollNo_int = urollNo.toInt();


    int num_of_users = sizeof(rollNo) / sizeof(int);

    std::cout << "sizeof(rollNo) " << num_of_users << std::endl;
    std::cout << "urollNo_int " << urollNo_int << std::endl;

    for (int i=0; i< num_of_users ; i++){
        std::cout << "urollNo[ "<< i <<" ]: = " <<rollNo[i] << std::endl;
    }
}

