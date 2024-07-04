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
    std::string* getSolicitudes();
};
#endif // NIVELFINAL_H
