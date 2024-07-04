#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>
#include <fstream>


class Persona
{
public:
    Persona();
    std::string* getID();
    std::string* getPasaporte();
    std::string* getDeclaracion();
};

#endif // PERSONA_H
