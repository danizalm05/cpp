
/*
 * Skills By Mbdia
 Login and Registration Form
https://www.youtube.com/watch?v=4qjpSH53Zrs&list=PL8MpAn684UHKt_umMjmD0EhbV5IZ-5uLd&index=1
21:00
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
            this,SLOT(button()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::button()
{
    QString name[] = {"abc", "cdf", "ghi"};
    QString code[] = {"abc12 ", "def354 ", "ghi56"};

    QString uName = ui->lineEdit->text();
    QString uCode = ui->lineEdit_2->text();

    for(int i =0; i< name->length(); i++) {
        if(uName == name[i] && uCode == code[i] ){}
    }


}









