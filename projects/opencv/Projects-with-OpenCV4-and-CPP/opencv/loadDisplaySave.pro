QT += core
QT -= gui
TARGET = loadDisplaySave
CONFIG += console
CONFIG -= app_bundle
TEMPLATE = app
SOURCES += loadDisplaySave.cpp
INCLUDEPATH += C:\OpenCV4.0.0\build\include
LIBS += -LC:\OpenCV4.0.0\build\x86\MinGWqt32\lib \
-lopencv_core400 \
-lopencv_imgproc400 \
-lopencv_highgui400