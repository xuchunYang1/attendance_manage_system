#-------------------------------------------------
#
# Project created by QtCreator 2018-06-25T12:11:55
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = AMS
TEMPLATE = app

INCLUDEPATH += $$PWD/include
include(PerformDatabase/PerformDatabase.pri)
include(ConnectDatabase/ConnectDatabase.pri)
include(DatabaseInfo/DatabaseInfo.pri)
include(Interface/Interface.pri)

SOURCES += main.cpp\
        loginform.cpp \
        mainform.cpp \


HEADERS  += loginform.h \
        mainform.h \



FORMS    += loginform.ui \
        mainform.ui \




