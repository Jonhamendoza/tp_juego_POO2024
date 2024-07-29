#include "nivel4.h"

Nivel4::Nivel4()
{

}
std::string* Nivel4::getReglas(int* &aux) {
    // declaracion de archivos
    std::ifstream reglasNivel4, reglas, nacionalidades, tipo_de_visita, estado_civil, paises, visas, bienes_transportados;
    std::string* carpetaReglas = new std::string[14];
    std::string* Nacionalidades = new std::string[20];
    std::string* Tipo_de_visita = new std::string[10];
    std::string* Estado_civil = new std::string[10];
    std::string* Paises = new std::string[20];
    std::string* Visas = new std::string[7];
    std::string* Bienes_transportados = new std::string[10];
    // generacion de numeros aleatorios para completar las reglas usando
     // el numero como indice de los arreglos con los datos tomados de los archivos
    int aux_Random_Nacionalidad=std::rand()%20;
    int aux_Random_Tipo_de_Visita=std::rand()%10;
    int random_pais1= (std::rand()%15)+5;
    int random_pais2= (std::rand()%10)+7;
    int aux_Random_Visa = std::rand()%7;

    // almacena los numeros aleatorios en el arreglo pasado por referencia
    // para usarlos en la funcion verificarParametros()
    aux[0]=aux_Random_Nacionalidad;
    aux[1]=aux_Random_Tipo_de_Visita;
    aux[2]=random_pais1;
    aux[3]=random_pais2;
    aux[4]=aux_Random_Visa;
    reglas.open("Nivel4/reglas.txt");
    // apertura de archivos
    if (reglas.fail()) {
        std::cout << "Error al intentar abrir las reglas del nivel 4\n";
    }
    reglasNivel4.open("Nivel4/reglasNivl4.txt");
    if (reglasNivel4.fail()) {
        std::cout << "Error al intentar abrir las reglas del nivel 4\n";
    }
    nacionalidades.open("NivelFinal/nacionalidades.txt");
    if(nacionalidades.fail()){
        std::cout << "Error al intentar abrir el archivo nacionalidades de Nivel 4\n";
    }
    tipo_de_visita.open("NivelFinal/tipo_de_visita.txt");
    if(tipo_de_visita.fail()){
        std::cout << "Error al intentar abrir el archivo tipo de visita de nivel 4\n";
    }
    estado_civil.open("NivelFinal/estado_civil.txt");
    if(estado_civil.fail()){
        std::cout << "Error al intntar abrir el archivo estado civil del nivel 4\n";
    }
    paises.open("NivelFinal/paises.txt");
    if(paises.fail()){
        std::cout << "Error al intentar abrir el archivo paises del nivel 4\n";
    }
    visas.open("NivelFinal/visa.txt");
    if(visas.fail()){
        std::cout << "Error al intentar abrir el archivo visa del nivel 4\n";
    }
    bienes_transportados.open("NivelFinal/bienes_transportados.txt");
    if(bienes_transportados.fail()){
        std::cout << "Error al intentar abrir el archivo bienes transportados del nivel 4\n";
    }

    // toma de datos de los archivos
    for (int i = 0; i < 14; i++) {
        std::getline(reglas, carpetaReglas[i]); // se establece el formato de la declaracion de reglas del nivel
        std::string aux;
        std::getline(reglasNivel4, aux);
        carpetaReglas[i] += aux;            // se completa la declaracion con las reglas especificas del nivel
    }
    // toma de archivos adicionales
    for(int i=0;i<20;i++){
        std::getline(nacionalidades,Nacionalidades[i]);
        std::getline(paises,Paises[i]);
    }
    for(int i=0;i<10;i++){
        std::getline(tipo_de_visita,Tipo_de_visita[i]);
        std::getline(estado_civil,Estado_civil[i]);
        std::getline(bienes_transportados,Bienes_transportados[i]);
    }
    for(int i=0;i<7;i++){
        std::getline(visas,Visas[i]);
    }
    nacionalidades.close();
    tipo_de_visita.close();
    estado_civil.close();
    paises.close();
    visas.close();
    bienes_transportados.close();
    reglas.close();
    reglasNivel4.close();
    // se completa la declaracion de reglas con los detalles a controlar por el jugador
    carpetaReglas[1]+=Nacionalidades[aux_Random_Nacionalidad];
    carpetaReglas[3]+=Tipo_de_visita[aux_Random_Tipo_de_Visita];
    carpetaReglas[5]+=Estado_civil[aux_Random_Tipo_de_Visita];
    carpetaReglas[6]+=Paises[aux_Random_Nacionalidad];
    carpetaReglas[7]+=Tipo_de_visita[aux_Random_Tipo_de_Visita];
    carpetaReglas[9]+=Paises[random_pais1]+" | "+Paises[random_pais2];
    carpetaReglas[10]+=Visas[aux_Random_Visa];
    carpetaReglas[12]+=Bienes_transportados[aux_Random_Tipo_de_Visita];
    return carpetaReglas;
}

void Nivel4::getSolicitudes(std::string Solicitudes[], int &aux_TipoPersona, int* &auxSolicitudes) {

    // Declaración y apertura de archivos
    std::ifstream nombre("NivelFinal/nombres.txt");
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

    // se almacenan los valores aleatorios que marcan el indice en los arreglos
    // de los datos de la solicitud que se deben controlar en la funcion verificarParametros()

    auxSolicitudes[0]=aux0_20;
    auxSolicitudes[1]=aux0_40;
    auxSolicitudes[2]=aux0_10;
    auxSolicitudes[3]=aux0_4;

    solicitud[1] += nombres[aux0_20];
    solicitud[2] += "  /  /    ";
    solicitud[3] += pAISES[aux0_20];
    solicitud[4] += "No definido";
    solicitud[5] += nacionalidades[aux0_20];
    solicitud[7] += "00000000";
    solicitud[8] += "01/01/2010";
    solicitud[9] += "31/12/2030";
    solicitud[10] += pAISES[aux0_10] + " | " + pAISES[aux0_10 + 10];

    solicitud[12] += vISAS[aux0_4] + " | " + vISAS[aux0_4 + 3];

    solicitud[13] += pROPOSITOS[rand() % 40];
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

bool Nivel4::verificarParametros(int *auxReglas, int *auxSolicitudes){
    bool Decision=true;
    int tipo_de_visita=auxReglas[1];    // valor aleatorio entre 0 y 9 que indica el tipo de visita

    // verificacion de nacionalidad y pais
    // valores entre 0 y 19
    if(auxSolicitudes[0]==auxReglas[0]){
        Decision=false;
    }

    // cada categoria de tipo de visita tiene 4 tipos, estos estan agrupados uno debajo del otro en el archivo
        // lo que facilita el uso del indice del arreglo para controlar
    switch (tipo_de_visita) {
        case 0:
        if(auxSolicitudes[1]<4)
            Decision=false;
        break;
    case 1:
    if(auxSolicitudes[1]>3 && auxSolicitudes[1]<8)
        Decision=false;
    break;
    case 2:
    if(auxSolicitudes[1]>7 && auxSolicitudes[1]<12)
        Decision=false;
    break;
    case 3:
    if(auxSolicitudes[1]>11 && auxSolicitudes[1]<16)
        Decision=false;
    break;
    case 4:
    if(auxSolicitudes[1]>15 && auxSolicitudes[1]<20)
        Decision=false;
    break;
    case 5:
    if(auxSolicitudes[1]>19 && auxSolicitudes[1]<24)
        Decision=false;
    break;
    case 6:
    if(auxSolicitudes[1]>23 && auxSolicitudes[1]<28)
        Decision=false;
    break;
    case 7:
    if(auxSolicitudes[1]>27 && auxSolicitudes[1]<32)
        Decision=false;
    break;
    case 8:
    if(auxSolicitudes[1]>31 && auxSolicitudes[1]<36)
        Decision=false;
    break;
    case 9:
    if(auxSolicitudes[1]>35 && auxSolicitudes[1]<40)
        Decision=false;
    break;
    }
    if(auxSolicitudes[2]==tipo_de_visita)   // verificacion de estado civil
        Decision = false;
    if(auxReglas[2]==auxSolicitudes[2])     //verificacion pais previo 1
        Decision=false;
    if(auxReglas[3]==(auxSolicitudes[2]+10)) // verificacion pais previo 2
        Decision=false;
    if(auxReglas[4]==auxSolicitudes[3]) //verificacion de visas previas 1
        Decision=false;
    if(auxReglas[4]==(auxSolicitudes[3]+3)) // verificacion d visas previas 2
        Decision=false;

    return Decision;

}
