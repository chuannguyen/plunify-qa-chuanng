#-------------------------------------------------
#
# Project created by QtCreator 2017-05-24T16:05:10
#
#-------------------------------------------------

QT       += core gui\
            widgets \
            sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = question4
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    qdatabasemng.cpp

HEADERS  += mainwindow.h \
    qdatabasemng.h
