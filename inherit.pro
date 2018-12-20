TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    supervisormgr.cpp

HEADERS += \
    singleton.h \
    isupervisorstatecontext.h \
    supervisormgr.h
