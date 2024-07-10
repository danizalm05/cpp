/*
 *Library Management System in Qt Creator with C++
https://www.youtube.com/watch?v=FbyB4rkzE10&list=PL8MpAn684UHKt_umMjmD0EhbV5IZ-5uLd&index=5
*/
#include "mainwindow.h"
#include "ui_mainwindow.h"

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
