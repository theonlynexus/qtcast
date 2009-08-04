# -------------------------------------------------
# Project created by QtCreator 2009-07-16T17:34:15
# -------------------------------------------------

unix {
    GSTCONFIG += $$system( pkg-config --cflags --libs gstreamer-0.10 )
    GSTINC = $$find( GSTCONFIG, -I* )
    for(a, GSTINC) : : {INCLUDEPATH += $$system( echo $$a | cut -b3- )}
    LIBS += $$find( GSTCONFIG, -l* )
}

QT += xml
TARGET = QtCast
TEMPLATE = app
SOURCES += main.cpp \
    qtcast.cpp \
    podcast.cpp
HEADERS += qtcast.h \
    podcast.h
FORMS += qtcast.ui
