
/*
 * Skills By Mbdia
 Login and Registration Form
https://www.youtube.com/watch?v=4qjpSH53Zrs&list=PL8MpAn684UHKt_umMjmD0EhbV5IZ-5uLd&index=1
26:40
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
    bool  found = false;
    for(int i =0; i< name->length(); i++) {
        if(uName == name[i] && uCode == code[i] ){
            QMessageBox::information(this,"Welcome",
                   "User:" + name[i]+"\n"+
                 "Welcom to loging system" );
            found = true;
            break;
        }
        else if(! found){
            QMessageBox::information(this,"Error",
                 "Invalid user name or passward!" );

        }

    }


}









