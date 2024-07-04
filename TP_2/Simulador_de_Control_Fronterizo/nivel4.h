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
    std::string* getSolicitudes();
};
#endif // NIVEL4_H
