ifndef NIVEL1_H
#define NIVEL1_H
#include "nivel.h"
#include <iostream>
#include <fstream>
#include <vector>


class Nivel1 : public Nivel
{
public:
    Nivel1();
    std::string* getReglas();
    void getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona);
};

#endif // NIVEL1_H
