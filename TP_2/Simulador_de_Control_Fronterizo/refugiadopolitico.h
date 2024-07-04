#ifndef REFUGIADOPOLITICO_H
#define REFUGIADOPOLITICO_H
#include "persona.h"

class RefugiadoPolitico: public Persona
{
public:
    RefugiadoPolitico();
    std::string* getID();
    std::string* getPasaporte();
    std::string* getDeclaracion();
};

#endif // REFUGIADOPOLITICO_H
