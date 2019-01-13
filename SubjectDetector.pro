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
    service/detectresult.h \
    utils/qhelper.h

SOURCES += \
    entity/detectconfig.cpp \
    entity/subject.cpp \
    entity/subjectbox.cpp \
    proxy/detectproxy.cpp \
    service/detectjni.cpp \
    service/detectresult.cpp \
    utils/qhelper.cpp
