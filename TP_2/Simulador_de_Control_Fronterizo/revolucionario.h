#ifndef REVOLUCIONARIO_H
#define REVOLUCIONARIO_H
#include "persona.h"

class Revolucionario: public Persona
{
public:
    Revolucionario();
    std::string* getID();
    std::string* getPasaporte();
    std::string* getDeclaracion();
};

#endif // REVOLUCIONARIO_H
