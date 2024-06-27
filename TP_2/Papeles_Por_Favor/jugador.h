#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>

class Jugador
{
private:
    std::string nombre;
public:
    Jugador(const std::string nombre);

    void revisarDocumentos();
    bool tomarDecision();
};

#endif // JUGADOR_H
