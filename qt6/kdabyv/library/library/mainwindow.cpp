/*
 *Library Management System in Qt  C++

https://www.youtube.com/watch?v=FbyB4rkzE10&list=PL8MpAn684UHKt_umMjmD0EhbV5IZ-5uLd&index=5
     24:05
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_OKpushButton_clicked()
{


    std::cout << "on_OKpushButton_clicked" << std::endl;

}

