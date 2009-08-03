# -------------------------------------------------
# Project created by QtCreator 2009-07-16T17:34:15
# -------------------------------------------------
GSTPATH = /usr/include/gstreamer-0.10/
GLIBPATH = /usr/include/glib-2.0/ /usr/lib/glib-2.0/include/
LIBXMLPATH = /usr/include/libxml2/
INCLUDEPATH += $$GSTPATH $$GLIBPATH $$LIBXMLPATH
QT += xml
TARGET = QtCast
TEMPLATE = app
SOURCES += main.cpp \
    qtcast.cpp \
    podcast.cpp
HEADERS += qtcast.h \
    podcast.h
FORMS += qtcast.ui
