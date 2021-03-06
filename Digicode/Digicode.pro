TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt
LIBS += -lpthread

SOURCES += \
    Archivage.cpp \
    BD.cpp \
    Chrono.cpp \
    InterfaceDeSaisie.cpp \
    kbhit.cpp \
    Alarme.cpp \
    Capteur.cpp \
    Clavier.cpp \
    main.cpp \
    Voyant.cpp \
    ObjetTempo.cpp \
    Porte.cpp

HEADERS += \
    Archivage.h \
    BD.h \
    Chrono.h \
    InterfaceDeSaisie.h \
    kbhit.h \
    ObjetTempo.h \
    Alarme.h \
    Capteur.h \
    EasyAssert.h \
    Clavier.h \
    Voyant.h \
    Porte.h
