#ifndef NIVEL_H
#define NIVEL_H
#include <iostream>
#include <vector>

class Nivel
{
private:
    int numeroNivel;
    std ::vector<std::string> parametros;
    std ::vector<std::string> carpetaReglas;
    std ::vector<std::string> carpetaSolicitudes;

public:
    Nivel(int numeroNivel);
    void verificarParametros();
    void agregarRegla(const std::string& regla);
    void agregarSolicitud(const std::string& solicitud);
};

#endif // NIVEL_H
