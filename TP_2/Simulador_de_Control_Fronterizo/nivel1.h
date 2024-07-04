#ifndef NIVEL1_H
#define NIVEL1_H
#include "nivel.h"
#include <iostream>
#include <fstream>


class Nivel1 : public Nivel
{
public:
    Nivel1();
    std::string* getReglas();
    std::string* getSolicitudes();
};

#endif // NIVEL1_H
