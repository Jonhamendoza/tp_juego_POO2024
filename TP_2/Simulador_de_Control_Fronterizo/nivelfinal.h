#ifndef NIVELFINAL_H
#define NIVELFINAL_H
#include "nivel.h"
#include <iostream>
#include <fstream>


class NivelFinal : public Nivel
{
public:
    NivelFinal();
    std::string* getReglas();
    void getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona);
};
#endif // NIVELFINAL_H
