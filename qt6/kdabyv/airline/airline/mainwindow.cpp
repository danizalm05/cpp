/*
Airlines Reservation Management System

Skills By Mbdia
https://www.youtube.com/watch?v=AGGMr1LoC2M&list=PL8MpAn684UHKt_umMjmD0EhbV5IZ-5uLd&index=3

24:05
*/

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),
                 this,SLOT(on_pushButton_clicked()));

    connect(ui->pushButton_2,SIGNAL(clicked()),
            this,SLOT(close() ));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QString flights[] =  {"flg101","flg102","flg103"};
    int seats[] = {20,50,30};
    QString uFlight = ui->lineEdit->text();
    QString uName = ui->lineEdit_2->text();

    bool found = false;
    for(int i =0;i < flights->length();i++){
        if(uFlight == flights[i] && seats[i]>0 ){
            QMessageBox::information(this,"Sucsess",
                 "User Name: "+uName+"\n"+
                 "flight:"+ flights[i] );
            found = true;
            break;
        }

    }
     if(!found){
        QMessageBox::information(this,"Error",
                                 "Flight number or seat error" );
    }

}










