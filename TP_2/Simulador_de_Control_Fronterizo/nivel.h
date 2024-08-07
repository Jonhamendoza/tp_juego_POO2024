#ifndef NIVEL_H
#define NIVEL_H
#include <iostream>
#include <string>
#include "jugador.h"
#include "aldeano.h"
#include "diplomatico.h"
#include "refugiadopolitico.h"
#include "revolucionario.h"
#include <time.h>
#include <vector>
class Nivel
{
private:
    int numeroNivel;
public:
    Nivel();
    std::string* getReglas(int *aux);
    void getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona);
    bool verificarParametros(std::string* Reglas, std::string* Solicitudes, int *aux);
};

#endif // NIVEL_H
