#-------------------------------------------------
#
# Project created by QtCreator 2018-03-12T12:39:47
#
#-------------------------------------------------

QT       += core

QT       -= gui

TARGET = Vehicles
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app


SOURCES += main.cpp \
    Car.cpp \
    Bus.cpp \
    Bicycle.cpp

HEADERS += \
    Vehicle.h \
    MotorVehicle.h \
    Car.h \
    Bus.h \
    Bicycle.h
