#-------------------------------------------------
#
# Project created by QtCreator 2011-01-12T20:42:16
#
#-------------------------------------------------

QT       += core
QT       += network
QT       -= gui


TARGET = QtCastBackend
CONFIG   += console
CONFIG   -= app_bundle

TEMPLATE = app

win32{
    FMOD_API_DIR = "C:/Program Files (x86)/FMOD SoundSystem/FMOD Programmers API Win32/api"
    LIBS += -L$$FMOD_API_DIR"/lib/"
    INCLUDEPATH += $$FMOD_API_DIR"/inc/"
    LIBS += -lfmodex_vc
}

SOURCES += main.cpp \
    fmodwrapper.cpp \
    qtcastbackend.cpp

HEADERS += \
    fmodwrapper.h \
    qtcastbackend.h
