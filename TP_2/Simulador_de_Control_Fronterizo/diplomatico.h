#ifndef DIPLOMATICO_H
#define DIPLOMATICO_H
#include "persona.h"

class Diplomatico: public Persona
{
public:
    Diplomatico();
    std::string* getID();
    std::string* getPasaporte();
    std::string* getDeclaracion();
};

#endif // DIPLOMATICO_H
