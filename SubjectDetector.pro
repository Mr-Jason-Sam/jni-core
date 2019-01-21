#-------------------------------------------------
#
# Project created by QtCreator 2019-01-13T02:20:01
#
#-------------------------------------------------

QT       -= gui

TARGET = DetectJNI
TEMPLATE = lib
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

DEFINES += DETECTJNI_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0



unix {
    target.path = /usr/lib
    INSTALLS += target
}

#import jni
INCLUDEPATH += /usr/local/jdk1.8.0_201/include
INCLUDEPATH += /usr/local/jdk1.8.0_201/include/linux

#import pthread
LIBS += -lpthread

HEADERS += \
    entity/detectconfig.h \
    entity/detectresult.h \
    entity/subject.h \
    entity/subjectbox.h \
    proxy/detectjni_global.h \
    proxy/detectproxy.h \
    service/detectjni.h \
    utils/qhelper.h \
    entity/detectconfig.h \
    entity/detectresult.h \
    entity/subject.h \
    entity/subjectbox.h \
    proxy/detectjni_global.h \
    proxy/detectproxy.h \
    service/detectjni.h \
    utils/qhelper.h \
    core/basethread.h \
    core/smartmutex.h \
    core/smartcountingsem.h \
    core/senderthread.h \
    core/receiverthread.h \
    core/mqsubjectdetect.h \
    core/baseos.h \
    core/mqos.h \
    core/mqosfactory.h

SOURCES += \
    entity/detectconfig.cpp \
    entity/detectresult.cpp \
    entity/subject.cpp \
    entity/subjectbox.cpp \
    proxy/detectproxy.cpp \
    service/detectjni.cpp \
    utils/qhelper.cpp \
    entity/detectconfig.cpp \
    entity/detectresult.cpp \
    entity/subject.cpp \
    entity/subjectbox.cpp \
    proxy/detectproxy.cpp \
    service/detectjni.cpp \
    utils/qhelper.cpp \
    core/basethread.cpp \
    core/smartmutex.cpp \
    core/smartcountingsem.cpp \
    core/senderthread.cpp \
    core/receiverthread.cpp \
    core/mqsubjectdetect.cpp \
    core/baseos.cpp \
    core/mqos.cpp \
    core/mqosfactory.cpp

