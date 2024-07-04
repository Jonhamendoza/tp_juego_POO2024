#ifndef NIVEL_H
#define NIVEL_H
#include <iostream>
#include <string>
#include "jugador.h"
#include "aldeano.h"
#include "diplomatico.h"
#include "refugiadopolitico.h"
#include "revolucionario.h"

class Nivel
{
private:
    int numeroNivel;
public:
    Nivel();
    std::string* getReglas();
    std::string* getSolicitudes();
};

#endif // NIVEL_H
