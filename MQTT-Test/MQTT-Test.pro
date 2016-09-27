QT += core
QT -= gui

TARGET = MQTT-Test
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

LIBS += -lmosquitto

