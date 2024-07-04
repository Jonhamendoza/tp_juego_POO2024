#include "jugador.h"

Jugador::Jugador(std::string nombre) : nombre(nombre)
{

}
std::string Jugador::getNombre(){
    return nombre;
}
int Jugador::tomarDecision(){
    int decision;
    std::cout<< "1- Aceptar peticion. \n";
    std::cout<< "2- Denegar peticion. \n";
    std::cin >> decision;
    return decision;
}
