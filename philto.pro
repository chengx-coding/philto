#-------------------------------------------------
#
# Project created by QtCreator 2017-04-06T20:49:24
#
#-------------------------------------------------

INCLUDEPATH += C:\opencv\build\include
INCLUDEPATH += C:\opencv\build\include\opencv
INCLUDEPATH += C:\opencv\build\include\opencv2

LIBS += C:\opencv\build\x64\vc14\lib\opencv_*.lib

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = philto
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    Exp01.cpp \
    Exp02.cpp \
    Exp03.cpp \
    Exp04.cpp \
    Exp05.cpp \
    procs.cpp

HEADERS  += mainwindow.h \
    Exp01.h \
    Exp02.h \
    Exp03.h \
    Exp04.h \
    Exp05.h \
    procs.h

FORMS    += mainwindow.ui
