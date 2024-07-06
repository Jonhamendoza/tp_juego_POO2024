#include "nivel1.h"


Nivel1::Nivel1() {}

std::string* Nivel1::getReglas() {
    std::ifstream reglasNivel1, reglas;
    std::string* carpetaReglas = new std::string[6];

    reglas.open("Nivel1/reglas.txt");
    if (reglas.fail()) {
        std::cout << "Error al intentar abrir las reglas del nivel 1\n";
    }
    reglasNivel1.open("Nivel1/reglasNivl1.txt");
    if (reglasNivel1.fail()) {
        std::cout << "Error al intentar abrir las reglas del nivel 1\n";
    }

    for (int i = 0; i < 6; i++) {
        std::getline(reglas, carpetaReglas[i]);
        std::string aux;
        std::getline(reglasNivel1, aux);
        carpetaReglas[i] += aux;
    }
    reglas.close();
    reglasNivel1.close();
    return carpetaReglas;
}

void Nivel1::getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona) {

    // Declaración y apertura de archivos
    std::ifstream nombre("Nivel1/nombres.txt");
    std::ifstream nacionalidad("NivelFinal/nacionalidades.txt");
    std::ifstream tipo_de_visita("NivelFinal/tipo_de_visita.txt");
    std::ifstream estado_civil("NivelFinal/estado_civil.txt");
    std::ifstream paises("NivelFinal/paises.txt");
    std::ifstream propositos("NivelFinal/propositos.txt");
    std::ifstream visas("NivelFinal/visa.txt");
    std::ifstream bienes_transportados("NivelFinal/bienes_transportados.txt");
    std::ifstream antecedentes("NivelFinal/antecedentes.txt");

    // Comprobación de apertura de archivos
    if (nombre.fail()) std::cout << "Error al intentar abrir el archivo nombres\n";
    if (nacionalidad.fail()) std::cout << "Error al intentar abrir el archivo nacionalidades\n";
    if (tipo_de_visita.fail()) std::cout << "Error al intentar abrir el archivo tipo de visita\n";
    if (estado_civil.fail()) std::cout << "Error al intentar abrir el archivo estado civil\n";
    if (paises.fail()) std::cout << "Error al intentar abrir el archivo paises\n";
    if (propositos.fail()) std::cout << "Error al intentar abrir el archivo propositos\n";
    if (visas.fail()) std::cout << "Error al intentar abrir el archivo visa\n";
    if (bienes_transportados.fail()) std::cout << "Error al intentar abrir el archivo bienes transportados\n";
    if (antecedentes.fail()) std::cout << "Error al intentar abrir el archivo antecedentes\n";

    // Lectura de datos de los archivos
    std::vector<std::string> nombres(20);
    std::vector<std::string> nacionalidades(20);
    std::vector<std::string> tiposDeVisitas(10);
    std::vector<std::string> estadosCiviles(10);
    std::vector<std::string> pAISES(20);
    std::vector<std::string> pROPOSITOS(40);
    std::vector<std::string> vISAS(7);
    std::vector<std::string> bienesTransportados(10);
    std::vector<std::string> aNTECE(8);

    for (int i = 0; i < 20; i++) {
        std::getline(nacionalidad, nacionalidades[i]);
        std::getline(paises, pAISES[i]);
        std::getline(nombre, nombres[i]);
    }
    for (int i = 0; i < 10; i++) {
        std::getline(tipo_de_visita, tiposDeVisitas[i]);
        std::getline(estado_civil, estadosCiviles[i]);
        std::getline(bienes_transportados, bienesTransportados[i]);
    }
    for (int i = 0; i < 40; i++) {
        std::getline(propositos, pROPOSITOS[i]);
    }
    for (int i = 0; i < 8; i++) {
        std::getline(antecedentes, aNTECE[i]);
    }
    for (int i = 0; i < 7; i++) {
        std::getline(visas, vISAS[i]);
    }

    // Cierre de archivos
    nombre.close();
    nacionalidad.close();
    tipo_de_visita.close();
    estado_civil.close();
    paises.close();
    propositos.close();
    visas.close();
    bienes_transportados.close();
    antecedentes.close();

    // Creación de solicitudes
    Aldeano auxAldeano;
    Diplomatico auxDiplomatico;
    RefugiadoPolitico auxRefugiadoPolitico;
    Revolucionario auxRevolucionario;
    aux_TipoPersona = (std::rand() % 4) + 1;
    std::string tipoPersona;
    std::string solicitud[30];

    switch (aux_TipoPersona) {
    case 1:
        tipoPersona = "Aldeano";
        for (int i = 0; i < 15; i++) solicitud[i] = auxAldeano.getPasaporte()[i];
        for (int i = 0; i < 9; i++) solicitud[i + 15] = auxAldeano.getID()[i];
        for (int i = 0; i < 6; i++) solicitud[i + 24] = auxAldeano.getDeclaracion()[i];
        break;
    case 2:
        tipoPersona = "Diplomatico";
        for (int i = 0; i < 15; i++) solicitud[i] = auxDiplomatico.getPasaporte()[i];
        for (int i = 0; i < 9; i++) solicitud[i + 15] = auxDiplomatico.getID()[i];
        for (int i = 0; i < 6; i++) solicitud[i + 24] = auxDiplomatico.getDeclaracion()[i];
        break;
    case 3:
        tipoPersona = "Refugiado Politico";
        for (int i = 0; i < 15; i++) solicitud[i] = auxRefugiadoPolitico.getPasaporte()[i];
        for (int i = 0; i < 9; i++) solicitud[i + 15] = auxRefugiadoPolitico.getID()[i];
        for (int i = 0; i < 6; i++) solicitud[i + 24] = auxRefugiadoPolitico.getDeclaracion()[i];
        break;
    case 4:
        tipoPersona = "Revolucionario";
        for (int i = 0; i < 15; i++) solicitud[i] = auxRevolucionario.getPasaporte()[i];
        for (int i = 0; i < 9; i++) solicitud[i + 15] = auxRevolucionario.getID()[i];
        for (int i = 0; i < 6; i++) solicitud[i + 24] = auxRevolucionario.getDeclaracion()[i];
        break;
    }

    // Generación de otros datos aleatorios
    int aux0_20 = rand() % 20;
    int aux0_40 = rand() % 40;
    int auxRandomDuracionEstadia = (rand() % 48) + 1;
    int aux0_10 = rand() % 10;
    int aux0_8 = rand()%8;
    int aux0_4 = rand()%4;
    std::string duracionEstadia = std::to_string(auxRandomDuracionEstadia);

    solicitud[1] += nombres[aux0_20];

    solicitud[2] += "  /  /    ";
    solicitud[3] += pAISES[aux0_20];
    solicitud[4] += "No definido";
    solicitud[5] += nacionalidades[aux0_20];
    solicitud[7] += "00000000";
    solicitud[8] += "01/01/2010";
    solicitud[9] += "31/12/2030";
    solicitud[10] += pAISES[aux0_10] + " | " + pAISES[aux0_10 + 10];

    solicitud[12] += vISAS[aux0_4] + " | " + vISAS[aux0_4 + 4];

    solicitud[13] += pROPOSITOS[rand() % 51];
    solicitud[14] += bienesTransportados[aux0_10];

    solicitud[16] += nombres[aux0_20];
    solicitud[17] +=  "  /  /    ";
    solicitud[18] += pAISES[aux0_20];
    solicitud[19] += "N0 definido";
    solicitud[20] += nacionalidades[aux0_20];

    solicitud[21] += estadosCiviles[aux0_10];
    solicitud[22] += tipoPersona;
    solicitud[23] += aNTECE[aux0_8];
    solicitud[25] += duracionEstadia+" meses";
    solicitud[26] += pROPOSITOS[aux0_40];
    solicitud[27] += "Solo";
    solicitud[28] += tipoPersona;
    solicitud[29] += bienesTransportados[aux0_10];

    for (int i = 0; i < 30; i++) Solicitudes[i] = solicitud[i];
}

