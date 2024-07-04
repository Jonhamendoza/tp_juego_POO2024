#ifndef NIVEL3_H
#define NIVEL3_H
#include "nivel.h"
#include <iostream>
#include <fstream>


class Nivel3 : public Nivel
{
public:
    Nivel3();
    std::string* getReglas();
    std::string* getSolicitudes();
};

#endif // NIVEL3_H
