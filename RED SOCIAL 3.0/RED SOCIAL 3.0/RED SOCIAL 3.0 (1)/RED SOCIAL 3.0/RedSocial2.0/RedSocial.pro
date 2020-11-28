QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    arbol.cpp \
    comment.cpp \
    interaction.cpp \
    list.cpp \
    login.cpp \
    main.cpp \
    manejoarchivo.cpp \
    muro.cpp \
    nodo.cpp \
    publication.cpp \
    publicationview.cpp \
    register.cpp \
    user.cpp

HEADERS += \
    arbol.h \
    comment.h \
    interaction.h \
    list.h \
    login.h \
    manejoarchivo.h \
    muro.h \
    nodo.h \
    publication.h \
    publicationview.h \
    register.h \
    user.h

FORMS += \
    login.ui \
    muro.ui \
    publicationview.ui \
    register.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
