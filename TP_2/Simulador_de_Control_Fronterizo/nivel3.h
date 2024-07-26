#ifndef NIVEL3_H
#define NIVEL3_H
#include "nivel.h"
#include <iostream>
#include <fstream>


class Nivel3 : public Nivel
{
public:
    Nivel3();
    std::string* getReglas(int* &aux);
    void getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona, int* &auxSolicitudes);
    bool verificarParametros(int *auxReglas, int *auxSolicitudes);

};

#endif // NIVEL3_H
