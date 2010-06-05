# -------------------------------------------------
# Project created by QtCreator 2009-07-16T17:34:15
# -------------------------------------------------

# Windows specific settings
# All the necessary include and libraries are in the subdir "windeps"
win32{
    INCLUDEPATH += "./windeps/gstreamer/include/gstreamer-0.10"
    INCLUDEPATH += "./windeps/gstreamer/include/glib-2.0"
    INCLUDEPATH += "./windeps/gstreamer/include/"
    INCLUDEPATH += "./windeps/libiconv-1.9.2/include"
    LIBS += -L"./windeps/gstreamer/lib" \
            -L"./windeps/libiconv-1.9.2/lib"
    LIBS += -llibgstreamer-0.10 \
            -llibgstbase-0.10 \
            -llibgstaudio-0.10 \
            -llibglib-2.0 \
            -llibgthread-2.0 \
            -llibgobject-2.0
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
INCLUDEPATH += "./deps/stlsoft/include"
INCLUDEPATH += "./deps/pantheios/include"

# Remember to compile pantheios lib files!
LIBS += -L"./deps/pantheios/lib"

win32{
    # Supposing MinGW 3.4
    # TODO: Add compiler version detection
    LIBS += -lpantheios.1.core.gcc34.debug \
            -lpantheios.1.fe.simple.gcc34.debug \
            -lpantheios.1.be.file.gcc34.debug \
            -lpantheios.1.bec.file.gcc34.debug \
            -lpantheios.1.core.gcc34.debug \
            -lpantheios.1.util.gcc34.debug
}

unix{    
    GCC = gcc
    PAR = $$quote( ")" ) # Grrrrrr... had me damned for one hour!
    #message( $$PAR )
    VER = $$quote( "gcc --version | line | cut -d \"$$PAR$$\" -f 2 | cut -b 2,4" )
    #message( $$VER )
    VER = $$system( $$VER )
    GCC_VER = $$GCC$$VER
    #message( "GCC_VER = " $$GCC_VER )

    LIT_DEBUG = .debug

    LIBS += -lpantheios.1.core.$$GCC_VER$$LIT_DEBUG \
        -lpantheios.1.fe.simple.$$GCC_VER$$LIT_DEBUG \
        -lpantheios.1.fe.N.$$GCC_VER$$LIT_DEBUG \
        -lpantheios.1.be.file.$$GCC_VER$$LIT_DEBUG \
        -lpantheios.1.be.N.$$GCC_VER$$LIT_DEBUG \
        -lpantheios.1.bec.file.$$GCC_VER$$LIT_DEBUG \
        #-lpantheios.1.core.$$GCC_VER$$LIT_DEBUG \
        -lpantheios.1.util.$$GCC_VER$$LIT_DEBUG \
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
           podcast.cpp \
           dialogoptions.cpp \
           options.cpp
HEADERS += qtcast.h \
           podcast.h \
           dialogoptions.h \
           options.h
FORMS += qtcast.ui
FORMS += dialogoptions.ui
RESOURCES += icons.qrc
HEADERS += audiofile.h
SOURCES += audiofile.cpp
HEADERS += audiofilelistmodel.h
SOURCES += audiofilelistmodel.cpp
HEADERS += audiofilemeta.h
SOURCES += audiofilemeta.cpp

