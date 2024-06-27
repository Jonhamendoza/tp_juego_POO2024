#include "documentos.h"

Documentos::Documentos(const std::string& tipo, bool validez): tipo(tipo), validez(validez)
{

}
void Documentos::mostrarDocumentos(){
    std::cout<< " Tipo de documentos: ";
    if(validez){
        std::cout << "Valido."<<std::endl;
    } else {
        std:: cout<< "Invalido."<<std::endl;
    }
}
bool Documentos::esValido(){
    return validez;
}
