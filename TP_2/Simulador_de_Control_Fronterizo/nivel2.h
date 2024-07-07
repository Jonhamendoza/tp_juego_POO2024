#ifndef NIVEL2_H
#define NIVEL2_H
#include "nivel.h"
#include <iostream>
#include <fstream>


class Nivel2 : public Nivel
{
public:
    Nivel2();
    std::string* getReglas();
    void getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona);
};


#endif // NIVEL2_H
