#include "jugador.h"


Jugador::Jugador(std::string nombre): nombre(nombre)
{

}
void Jugador:: revisarDocumentos(){
    std::cout << nombre << " esta revisando los documentos... "<<std::endl;
}
bool Jugador::tomarDecision(){
    bool decisionCorrecta = rand() % 2;
    std::cout << nombre << " ha tomado una decision. "<<std::endl;
    return decisionCorrecta;
}

