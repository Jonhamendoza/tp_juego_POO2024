#include <iostream>
#include <string>
#include "juego.h"
#include "jugador.h"
#include "documentos.h"
#include "nivel.h"

Juego::Juego(): nivelActual(1), puntuacion(0), multa(0)
{

}
void Juego::iniciarNivel(){
    std :: cout << "Iniciando Nivel... " << nivelActual << std :: endl;
}
void Juego ::evaluarDecision(bool decisionCorrecta){
    if(decisionCorrecta){
        puntuacion += 10;
    } else {
        multa += 5;
    }
    std :: cout << "Puntuacion: " << puntuacion << " Multa: " << multa << std::endl;
}
void Juego::siguienteNivel(){
    nivelActual ++;
}
int Juego::getNivelActual() {
    return nivelActual;
}
int Juego::getPuntuacion(){
    return puntuacion;
}
int Juego::getMulta(){
    return multa;
}
