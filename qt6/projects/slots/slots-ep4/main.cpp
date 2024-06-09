/*
https://www.youtube.com/watch?v=KugPAznC4Yo&list=PLUbFnGajtZlXbrbdlraCe3LMC_YH5abao&index=6
7:00
https://doc.qt.io/qt-6/signalsandslots.html
*/

#include <QCoreApplication>
#include "test.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test test;

    //Connect the signal and the slot

    //QObject::connect(&test,&Test::close,&a,&QCoreApplication::quit);

    QObject::connect(&test,&Test::close,&a,
                      &QCoreApplication::quit, Qt::QueuedConnection);

    test.dostuff();
    int value = a.exec();
    qInfo()  << "Exit value:" << value;
    return value;


}
