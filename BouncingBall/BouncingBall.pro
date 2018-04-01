#-------------------------------------------------
#
# Project created by QtCreator 2018-03-19T12:31:45
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BouncingBall
TEMPLATE = app


SOURCES += main.cpp\
        dialog.cpp \
    coordinate.cpp \
    ball.cpp

HEADERS  += dialog.h \
    coordinate.h \
    ball.h

FORMS    += dialog.ui
