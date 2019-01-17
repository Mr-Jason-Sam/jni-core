#-------------------------------------------------
#
# Project created by QtCreator 2019-01-13T02:20:01
#
#-------------------------------------------------

QT       -= gui

TARGET = DetectJNI
TEMPLATE = lib

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
INCLUDEPATH += /usr/local/jdk1.8.0_191/include
INCLUDEPATH += /usr/local/jdk1.8.0_191/include/linux

DISTFILES += \
    TestData

HEADERS += \
    entity/detectconfig.h \
    entity/subject.h \
    entity/subjectbox.h \
    proxy/detectjni_global.h \
    proxy/detectproxy.h \
    service/detectjni.h \
    utils/qhelper.h \
    entity/detectresult.h \
    entity/detectconfig.h \
    entity/detectresult.h \
    entity/subject.h \
    entity/subjectbox.h \
    proxy/detectjni_global.h \
    proxy/detectproxy.h \
    service/detectjni.h \
    service/detectresult.h \
    utils/qhelper.h \
    thread.h \
    msgqueue.h \
    core/thread/thread.h \
    core/msgqueue.h \
    core/thread/mutex.h \
    core/thread/threadfactory.h \
    core/msgqueuefactory.h \
    core/thread/senderthread.h \
    core/thread/receiverthread.h \
    core/thread/sem.h

SOURCES += \
    entity/detectconfig.cpp \
    entity/subject.cpp \
    entity/subjectbox.cpp \
    proxy/detectproxy.cpp \
    service/detectjni.cpp \
    utils/qhelper.cpp \
    entity/detectresult.cpp \
    entity/detectconfig.cpp \
    entity/detectresult.cpp \
    entity/subject.cpp \
    entity/subjectbox.cpp \
    proxy/detectproxy.cpp \
    service/detectjni.cpp \
    service/detectresult.cpp \
    utils/qhelper.cpp \
    thread.cpp \
    msgqueue.cpp \
    core/thread/thread.cpp \
    core/msgqueue.cpp \
    core/thread/mutex.cpp \
    core/thread/threadfactory.cpp \
    core/msgqueuefactory.cpp \
    core/thread/senderthread.cpp \
    core/thread/receiverthread.cpp \
    core/thread/sem.cpp
