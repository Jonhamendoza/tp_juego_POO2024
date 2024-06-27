TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        documentos.cpp \
        juego.cpp \
        jugador.cpp \
        main.cpp \
        nivel.cpp \
        persona.cpp \
        reglas.cpp

HEADERS += \
    documentos.h \
    juego.h \
    jugador.h \
    nivel.h \
    persona.h \
    reglas.h

DISTFILES += \
    ID.txt \
    Pasaporte.txt \
    Visa.txt \
    antecedentes.txt \
    bienes_transportados.txt \
    estado_civil.txt \
    nacionalidades.txt \
    nombres.txt \
    ocupaciones.txt \
    paises.txt \
    propositos.txt \
    sexos.txt
