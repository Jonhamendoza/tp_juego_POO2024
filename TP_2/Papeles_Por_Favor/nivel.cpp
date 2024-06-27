#include "nivel.h"

Nivel::Nivel(int numeroNivel): numeroNivel(numeroNivel)
{

}
void Nivel:: agregarRegla(const std::string &regla){
    carpetaReglas.push_back(regla);
}
void Nivel::agregarSolicitud(const std::string &solicitud){
    carpetaSolicitudes.push_back(solicitud);
}
void Nivel:: verificarParametros(){
    //aca me falta la logica para verificar los parametros del nivel
}
