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
    administer.cpp \
    regist.cpp \
    class.cpp \
    book_imformation.cpp \
    user_imformation.cpp \
    event_imformation.cpp \
    common_user.cpp \
    modify.cpp \
    my_line_edit.cpp \
    library.cpp \
    encryption.cpp

HEADERS  += login.h \
    class.h \
    administer.h \
    regist.h \
    book_imformation.h \
    user_imformation.h \
    event_imformation.h \
    common_user.h \
    modify.h \
    my_line_edit.h \
    library.h

FORMS    += login.ui \
    administer.ui \
    regist.ui \
    book_imformation.ui \
    user_imformation.ui \
    event_imformation.ui \
    common_user.ui \
    modify.ui

RESOURCES += \
    resource.qrc
