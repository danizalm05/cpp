/*
https://www.youtube.com/watch?v=KugPAznC4Yo&list=PLUbFnGajtZlXbrbdlraCe3LMC_YH5abao&index=6

https://doc.qt.io/qt-6/signalsandslots.html

20:05
*/


#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{}

void Test::dostuff()
{
    qInfo() << "Doing stuff!";
    emit close();
}
