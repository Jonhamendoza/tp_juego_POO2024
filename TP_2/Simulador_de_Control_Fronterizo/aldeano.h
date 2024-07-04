#ifndef ALDEANO_H
#define ALDEANO_H
#include "persona.h"


class Aldeano : public Persona
{
public:
    Aldeano();
    std::string* getID();
    std::string* getPasaporte();
    std::string* getDeclaracion();
};

#endif // ALDEANO_H
