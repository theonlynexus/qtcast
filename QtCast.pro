# -------------------------------------------------
# Project created by QtCreator 2009-07-16T17:34:15
# -------------------------------------------------
# Windows specific settings
# All the necessary include and libraries are in the subdir "windeps"
win32 { 
    INCLUDEPATH += ./windeps/gstreamer/include/gstreamer-0.10
    INCLUDEPATH += ./windeps/gstreamer/include/glib-2.0
    INCLUDEPATH += ./windeps/gstreamer/include/
    INCLUDEPATH += ./windeps/libiconv-1.9.2/include
    LIBS += -L./windeps/gstreamer/lib \
        -L./windeps/libiconv-1.9.2/lib
    LIBS += -lglib-2.0 \
        -lgstreamer-0.10 \
        -lgthread-2.0
}

# Linux/*ix specific settings
# Use pkg-config to retrieve compiler flags and parse them
unix { 
    GSTCONFIG += $$system( pkg-config --cflags --libs gstreamer-0.10 )
    GSTINC = $$find( GSTCONFIG, -I* )
    for(a, GSTINC):: { 
        INCLUDEPATH += $$system( echo $$a | cut -b3- )}
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
    HEADERS += audiofile.h
    SOURCES += audiofile.cpp

