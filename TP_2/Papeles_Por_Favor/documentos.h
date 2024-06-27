#ifndef DOCUMENTOS_H
#define DOCUMENTOS_H
#include <iostream>
#include <string>

class Documentos
{
private:
    std::string tipo;
    bool validez;
public:
    Documentos(const std::string& tipo, bool validez);
    void mostrarDocumentos();
    bool esValido();
};

#endif // DOCUMENTOS_H
