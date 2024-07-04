#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>



class Jugador
{
private:
    std::string nombre;
public:
    Jugador(std::string nombre);
    std::string getNombre();
    int tomarDecision();

};

#endif // JUGADOR_H
