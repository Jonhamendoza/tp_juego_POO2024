#ifndef NIVEL2_H
#define NIVEL2_H
#include "nivel.h"
#include <iostream>
#include <fstream>


class Nivel2 : public Nivel
{
public:
    Nivel2();
    std::string* getReglas(int* &aux);
    void getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona, int* &auxSolicitudes);
    bool verificarParametros(int *auxReglas, int *auxSolicitudes);
};


#endif // NIVEL2_H
