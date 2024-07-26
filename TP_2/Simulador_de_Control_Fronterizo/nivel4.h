#ifndef NIVEL4_H
#define NIVEL4_H
#include "nivel.h"
#include <iostream>
#include <fstream>


class Nivel4 : public Nivel
{
public:
    Nivel4();
    std::string* getReglas(int* &aux);
    void getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona, int* &auxSolicitudes);
    bool verificarParametros(int *auxReglas, int *auxSolicitudes);

};
#endif // NIVEL4_H
