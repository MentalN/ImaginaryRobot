QT += core
QT -= gui

TARGET = ImaginaryRobot
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    environment.cpp \
    robot.cpp

HEADERS += \
    environment.h \
    robot.h

