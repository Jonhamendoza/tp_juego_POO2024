#ifndef NIVEL3_H
#define NIVEL3_H
#include "nivel.h"
#include <iostream>
#include <fstream>


class Nivel3 : public Nivel
{
public:
    Nivel3();
    std::string* getReglas();
    void getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona);
};

#endif // NIVEL3_H
