/*
https://www.youtube.com/watch?v=smQms-2yJYc&list=PLUbFnGajtZlXbrbdlraCe3LMC_YH5abao&index=5

12:33
*/


#include <QCoreApplication>
#include <iostream>
#include <string>
#include <QTextStream>
#include <QDebug>



void do_cpp()
{

    std::string name;
    std::cout << "name = ";
    std::getline(std::cin, name);
    //std::cin >> name;
    std::cout <<  "Hello to "<< name<< "\n";
}


void do_qt()
{
    QTextStream qin(stdin);
    QTextStream qout(stdout);
    qout << "name =  ";
    qout.flush();
    QString name = qin.readLine();
    qout << "Hell  "<< name << "\n";
    qout.flush();
}

void do_mixed()
{
  QTextStream qin(stdin);
  qInfo() << "Please enter yor name ";
  QString name = qin.readLine();
  qInfo() << "Hell  "<< name ;


}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    //do_qt();
    do_mixed() ;
    return a.exec();
}
