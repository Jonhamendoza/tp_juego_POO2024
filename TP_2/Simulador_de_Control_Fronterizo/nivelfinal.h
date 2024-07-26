#ifndef NIVELFINAL_H
#define NIVELFINAL_H
#include "nivel.h"
#include <iostream>
#include <fstream>


class NivelFinal : public Nivel
{
public:
    NivelFinal();
    std::string* getReglas(int* &aux);
    void getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona, int* &auxSolicitudes);
    bool verificarParametros(int *auxReglas, int *auxSolicitudes);

};
#endif // NIVELFINAL_H
