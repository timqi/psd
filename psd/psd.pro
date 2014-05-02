#-------------------------------------------------
#
# Project created by QtCreator 2014-04-30T12:23:13
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = psd
TEMPLATE = app


SOURCES += main.cpp\
        psd.cpp \
    primitive.cpp \
    var.cpp \
    complex.cpp \
    fft.cpp \
    direct.cpp \
    corr.cpp \
    arcorr.cpp \
    list.cpp \
    burg.cpp

HEADERS  += psd.h \
    primitive.h

FORMS    += psd.ui

INCLUDEPATH += /home/qiqi/apps/qwt-6.1.0/include
LIBS += -L"/home/qiqi/apps/qwt-6.1.0/lib/" -lqwt
