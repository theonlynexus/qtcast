# -------------------------------------------------
# Project created by QtCreator 2009-07-16T17:34:15
# -------------------------------------------------

CONFIG( release )
{
    DESTDIR = ./release
}

CONFIG( debug )
{
    DESTDIR = ./debug
}

win32{
    FMOD_API_DIR = "C:/Program Files (x86)/FMOD SoundSystem/FMOD Programmers API Win32/api"
    LIBS += -L$$FMOD_API_DIR"/lib/"
    INCLUDEPATH += $$FMOD_API_DIR"/inc/"
    LIBS += -lfmodex_vc
}

message( $$LIBS )

QT += xml
QT += multimedia
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
HEADERS += QsLog.h
SOURCES += QsLog.cpp
HEADERS += QsLogDest.h
SOURCES += QsLogDest.cpp
HEADERS += QsDebugOutput.h
SOURCES += QsDebugOutput.cpp

