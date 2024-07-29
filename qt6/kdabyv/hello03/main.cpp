/*
 *  Episode 3 - Hello Qt  VoidRealms
15:30
//https://www.youtube.com/watch?v=smQms-2yJYc&list=PLUbFnGajtZlXbrbdlraCe3LMC_YH5abao&index=5
https://github.com/voidrealms/qt6-core-beginners/tree/main/section%203
*/
#include <QCoreApplication>
#include <QDebug>
#include <QTextStream>
#include <iostream>
#include <string>


void do_cpp()
{
    std::string name;
    std::cout << "Please enter your name: ";
    std::getline(std::cin,name);
    std::cout << "hello " << name << "\n";
}

void do_qt()
{

    QTextStream qin(stdin);

    QTextStream qout(stdout);
    qout<<  "Please enter your name: ";
    qout.flush();
    QString name =qin.readLine();
    qout << "HELLO " << name << "\n";
    qout.flush();

}//do_qt

void do_mix()
{
    QTextStream qin(stdin);
    qInfo() << "Input Your Name!";
    QString name = qin.readLine();
    qInfo() << "Hello " << name;

}//do_mix()


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    //do_cpp();
    //do_qt();
    do_mix();
    return a.exec();
}
