#-------------------------------------------------
#
# Project created by QtCreator 2015-10-26T21:25:02
#
#-------------------------------------------------

QT       += core gui
QT       += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = LibrarySystem
TEMPLATE = app


SOURCES += main.cpp\
        login.cpp \
    regist.cpp \
    class.cpp \
    book_information.cpp \
    user_information.cpp \
    event_information.cpp \
    modify.cpp \
    encryption.cpp \
    book_database.cpp \
    user_database.cpp \
    event_database.cpp \
    common_user.cpp \
    user_display.cpp \
    book_display.cpp \
    start_moive.cpp

HEADERS  += login.h \
    class.h \
    regist.h \
    book_information.h \
    user_information.h \
    event_information.h \
    modify.h \
    book.h \
    user.h \
    event.h \
    common_user.h \
    user_display.h \
    book_display.h \
    start_moive.h

FORMS    += login.ui \
    regist.ui \
    book_information.ui \
    user_information.ui \
    event_information.ui \
    modify.ui \
    common_user.ui \
    user_display.ui \
    book_display.ui \
    start_moive.ui

RESOURCES += \
    resource.qrc
