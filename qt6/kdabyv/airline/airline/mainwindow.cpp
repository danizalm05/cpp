/*
Airlines Reservation Management System

Skills By Mbdia
https://www.youtube.com/watch?v=AGGMr1LoC2M&list=PL8MpAn684UHKt_umMjmD0EhbV5IZ-5uLd&index=3

10:35
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
