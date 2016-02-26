#-------------------------------------------------
#
# Project created by QtCreator 2016-02-25T09:16:03
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = MinimalistDrawingTool
TEMPLATE = app


SOURCES += main.cpp\
        canvaswindow.cpp \
    sketchpencil.cpp

HEADERS  += canvaswindow.h \
    sketchpencil.h

FORMS    += canvaswindow.ui
