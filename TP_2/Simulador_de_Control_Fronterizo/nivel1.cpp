#include "nivel1.h"

Nivel1::Nivel1()
{}
std::string* Nivel1::getReglas(){
    std::ifstream reglasNivel1, reglas;
    std::string* carpetaReglas = new std::string [6];

    reglas.open("Nivel1/reglas.txt");
    if(reglas.fail()){
        std::cout<<"error al intentar abrir las reglas del nivel 1\n";
    }
    reglasNivel1.open("Nivel1/reglasNivl1.txt");
    if(reglasNivel1.fail()){
        std::cout<<"error al intentar abrir las reglas del nivel 1\n";
    }

    for(int i=0; i<6; i++){
        std::getline(reglas,carpetaReglas[i]);
        std::string aux;
        std::getline(reglasNivel1,aux);
        carpetaReglas[i]+=aux;
    }
    return carpetaReglas;
}
std::string* Nivel1::getSolicitudes(){
   // abrimos todos los archivos .txt con la informacion para completar los documentos de las solicitudes
   // luego guardamos eso en un arreglompara cada archivo
    std::ifstream nombre;
    std::string* nombres = new std::string[20];
    nombre.open("Nivel1/nombres.txt");
    if(nombre.fail())
        std::cout<<"Error al intentar abrir el archivo nombres \n";
    std::ifstream nacionalidad;
    std::string* nacionalidades = new std::string[20];
    nacionalidad.open("NivelFinal/nacionalidades.txt");
    if(nacionalidad.fail())
        std::cout <<"Error al intentar abrir el archivo nacionalidades \n";
    std::ifstream tipo_de_visita;
    std::string* tiposDeVisitas = new std::string[10];
    tipo_de_visita.open("NivelFinal/tipo_de_visita.txt");
    if(tipo_de_visita.fail())
        std::cout <<"Error al intentar abrir el archivo tipo de visita \n";
    std::ifstream estado_civil;
    std::string* estadosCiviles = new std::string[10];
    estado_civil.open("NivelFinal/estado_civil.txt");
    if(estado_civil.fail())
        std::cout <<"Error al intentar abrir el archivo estado civil \n";
    std::ifstream paises;
    std::string* pAISES = new std::string[20];
    paises.open("NivelFinal/paises.txt");
    if(paises.fail())
        std::cout <<"Error al intentar abrir el archivo paises \n";
    std::ifstream propositos;
    std::string* pROPOSITOS = new std::string[40];
    propositos.open("NivelFinal/propositos.txt");
    if(propositos.fail())
        std::cout <<"Error al intentar abrir el archivo propositos \n";
    std::ifstream visas;
    std::string* vISAS = new std::string[7];
    visas.open("NivelFinal/visa.txt");
    if(visas.fail())
        std::cout <<"Error al intentar abrir el archivo visa \n";
    std::ifstream bienes_transportados;
    std::string* bienesTransportados = new std::string [10];
    if(bienes_transportados.fail())
        std::cout <<"Error al intentar abrir el archivo bienes transportados \n";
    std::ifstream antecedentes;
    std::string* aNTECE = new std::string[8];
    if(antecedentes.fail())
        std::cout <<"Error al intentar abrir el archivo antecedentes \n";
    for(int i=0; i<20; i++){
        std::getline(nacionalidad,nacionalidades[i]);
        std::getline(paises,pAISES[i]);
        std::getline(nombre,nombres[i]);
    }
    for(int i=0; i<10; i++){
        std::getline(tipo_de_visita,tiposDeVisitas[i]);
        std::getline(estado_civil,estadosCiviles[i]);
        std::getline(bienes_transportados,bienesTransportados[i]);
    }
    for(int i=0; i<40; i++){
        std::getline(propositos,pROPOSITOS[i]);
    }
    for(int i=0; i<8; i++){
        std::getline(antecedentes,aNTECE[i]);
    }
    for(int i=0; i<7; i++){
        std::getline(visas,vISAS[i]);
    }

    // ///////////////////////////////////////////////////////////////////////////////
    Aldeano auxAldeano;
    Diplomatico auxDiplomatico;
    RefugiadoPolitico auxRefugiadoPolitico;
    Revolucionario auxRevolucionario;
    int auxRandomTipoPersona=0;
    std::string* solicitud = new std::string[30];
    std::string* pasaporteDiplomatico=auxDiplomatico.getPasaporte();
    std::string* IdDiplomatico=auxDiplomatico.getID();
    std::string* DeclaracionDiplomatico = auxDiplomatico.getDeclaracion();
    std::string* pasaporteAldeano=auxAldeano.getPasaporte();
    std::string* IdAldeano=auxAldeano.getID();
    std::string* DeclaracionALdeano = auxAldeano.getDeclaracion();
    std::string* pasaporteRefugiado = auxRefugiadoPolitico.getPasaporte();
    std::string* IdRefugiado = auxRefugiadoPolitico.getID();
    std::string* DeclaracionRefugiado = auxRefugiadoPolitico.getDeclaracion();
    std::string* pasaporteRevolucionario = auxRevolucionario.getPasaporte();
    std::string* IdRevolucionario = auxRevolucionario.getID();
    std::string* DeclaracionRevolucionario = auxRevolucionario.getDeclaracion();
    auxRandomTipoPersona = (std::rand()%4)+1;
    std::string tipoPersona;
    switch (auxRandomTipoPersona) {
    case 1:
        for(int i=0;i<15;i++){
            solicitud[i]=pasaporteAldeano[i];
        }
        for(int i=15;i<24;i++){
            solicitud[i]=IdAldeano[i];
        }
        for(int i=24;i<30;i++){
            solicitud[i]=DeclaracionALdeano[i];
        }
        tipoPersona = "Aldeano";
        break;
     case 2:
        for(int i=0;i<15;i++){
            solicitud[i]=pasaporteDiplomatico[i];
        }
        for(int i=15;i<24;i++){
            solicitud[i]=IdDiplomatico[i];
        }
        for(int i=24;i<30;i++){
            solicitud[i]=DeclaracionDiplomatico[i];
        }
        tipoPersona = "Diplomatico";
        break;
    case 3:
        for(int i=0;i<15;i++){
            solicitud[i]=pasaporteRefugiado[i];
        }
        for(int i=15;i<24;i++){
            solicitud[i]=IdRefugiado[i];
        }
        for(int i=24;i<30;i++){
            solicitud[i]=DeclaracionRefugiado[i];
        }
        tipoPersona = "Refugiado Politico";
        break;
    case 4:
        for(int i=0;i<15;i++){
            solicitud[i]=pasaporteRevolucionario[i];
        }
        for(int i=15;i<24;i++){
            solicitud[i]=IdRevolucionario[i];
        }
        for(int i=24;i<30;i++){
            solicitud[i]=DeclaracionRevolucionario[i];
        }
        tipoPersona = "Revolucionario";
        break;

    }
    int aux0_20=rand()%20;
    int auxRandomDuracionEstadia=(rand()%48)+1;
    int aux0_10=rand()%10;
    std::string duracionEstadia = std::to_string(auxRandomDuracionEstadia);
    solicitud[1]+=nombres[aux0_20];
    solicitud[2]+="  /  /    ";
    solicitud[3]+=pAISES[aux0_20];
    solicitud[4]+="No definido";
    solicitud[5]+=nacionalidades[aux0_20];
    solicitud[7]+="00000000";
    solicitud[8]+="01/01/2010";
    solicitud[9]+="31/12/2030";
    solicitud[10]+=pAISES[rand()%10]+" | "+pAISES[(rand()%10)+10];
    solicitud[12]+=vISAS[rand()%4]+" | "+vISAS[(rand()%4)+4];
    solicitud[13]+=pROPOSITOS[rand()%51];
    solicitud[14]+=bienesTransportados[aux0_10];
    solicitud[16]+=nombres[aux0_20];
    solicitud[17]+="  /  /    ";
    solicitud[18]+=pAISES[aux0_20];
    solicitud[19]+="No definido";
    solicitud[20]+=nacionalidades[aux0_20];
    solicitud[21]+=estadosCiviles[aux0_10];
    solicitud[22]+=tipoPersona;
    solicitud[23]+=aNTECE[aux0_20];
    solicitud[25]+=duracionEstadia+" meses.";
    solicitud[26]+=pROPOSITOS[rand()%40];
    solicitud[27]+="Solo";
    solicitud[28]+=tipoPersona;
    solicitud[29]+= bienesTransportados[aux0_10];
    return solicitud;
}
