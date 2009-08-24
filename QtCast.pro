# -------------------------------------------------
# Project created by QtCreator 2009-07-16T17:34:15
# -------------------------------------------------

# Windows specific settings
# All the necessary include and libraries are in the subdir "windeps"
win32{
    INCLUDEPATH += ./windeps/gstreamer/include/gstreamer-0.10
    INCLUDEPATH += ./windeps/gstreamer/include/glib-2.0
    INCLUDEPATH += ./windeps/gstreamer/include/
    INCLUDEPATH += ./windeps/libiconv-1.9.2/include
    LIBS += -L./windeps/gstreamer/lib \
        -L./windeps/libiconv-1.9.2/lib
    LIBS += -lgstreamer-0.10 \
            -lgstbase-0.10 \
            -lgstaudio-0.10 \
            -lglib-2.0 \
            -lgthread-2.0 \
            -lgobject-2.0
}

# Linux/*ix specific settings
# Use pkg-config to retrieve compiler flags and parse them
unix{
    GSTCONFIG += $$system( pkg-config --cflags --libs gstreamer-0.10 )
    GSTINC = $$find( GSTCONFIG, -I* )
    for(a, GSTINC)::{
        INCLUDEPATH += $$system( echo $$a | cut -b3- ) }
    LIBS += $$find( GSTCONFIG, -l* )
}

# Includes for Pantheios logging API
INCLUDEPATH += ./deps/stlsoft/include
INCLUDEPATH += ./deps/pantheios/include

# Remember to compile pantheios lib files!
LIBS += -L./deps/pantheios/lib

win32{
    # Supposing MinGW 3.4
    # TODO: Add compiler version detection
    LIBS += -lpantheios.1.core.gcc34.debug \
        -lpantheios.1.fe.simple.gcc34.debug \
        -lpantheios.1.fe.N.gcc34.debug \
        -lpantheios.1.be.file.gcc34.debug \
        -lpantheios.1.be.N.gcc34.debug \
        -lpantheios.1.core.gcc34.debug \
        -lpantheios.1.util.gcc34.debug
}

unix{
    # Supposing GCC 4.4
    # TODO: Add compiler version detection
    LIBS += -lpantheios.1.core.gcc44.debug \
        -lpantheios.1.fe.simple.gcc44.debug \
	-lpantheios.1.fe.N.gcc44.debug \
        -lpantheios.1.be.file.gcc44.debug \
	-lpantheios.1.be.N.gcc44.debug \
        -lpantheios.1.core.gcc44.debug \
        -lpantheios.1.util.gcc44.debug \
}

CONFIG( release )
{
    DESTDIR = ./release
}

CONFIG( debug )
{
    DESTDIR = ./debug
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
RESOURCES += icons.qrc
HEADERS += audiofile.h
SOURCES += audiofile.cpp
