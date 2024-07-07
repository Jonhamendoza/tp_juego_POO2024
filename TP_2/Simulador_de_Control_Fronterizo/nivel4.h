#ifndef NIVEL4_H
#define NIVEL4_H
#include "nivel.h"
#include <iostream>
#include <fstream>


class Nivel4 : public Nivel
{
public:
    Nivel4();
    std::string* getReglas();
    void getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona);
};
#endif // NIVEL4_H
