
#include "Administracion.h"
#include <cstring>

using namespace std;

Administracion::Administracion() {
    cout << " Contructor por defecto\n";
    idReserva = 0;
    inicializarDatos();
}

void Administracion::inicializarDatos()
{
    auto *prop1 = new Propietario();   // Constructores por defecto
    //auto *prop2 = new Propietario();
    //auto *prop3 = new Propietario();

    auto *huesp1 = new Huesped();
    //auto *huesp2 = new Huesped();
    //auto *huesp3 = new Huesped();

    auto *hogar1 = new Hogar();
    //auto *hogar2 = new Hogar();
    //auto *hogar3 = new Hogar();

    // Inicializar Huespedes
    huesp1->setnombre("Santiago");
    huesp1->setidPersona(1);
    huesp1->setsexo("Hombre");
    huesp1->setinfoHospital("Hospital Cruz");
    huesp1->setciudad("Cali");

    // Inicializar Hogares
    hogar1->setDireccion("Calle 54N 34");
    hogar1->setPermiteBebes(false);
    hogar1->setDescripcion("El mejor hostal");

    // Inicializar Propietarios

    prop1->setnombre("Arthur");
    prop1->setidPersona(2);
    prop1->setsexo("Hombre");
    prop1->setDisponible(true);
    prop1->setHogar(hogar1);

    // Incluir unordermaps

    propietarios[prop1->getidPersona()] = prop1;
    huespedes[huesp1->getidPersona()] = huesp1;
    hogares[hogar1->getidHogar()] = hogar1;

}

void Administracion::agregarInfoHogar() {
    long id;
    int flag;
    cout << "Digite su id: \n";
    cin >> id;
    if (propietarios.find(id) == propietarios.end())
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }

    if (flag == 1)
    {
        long idHogar;
        string direccion;
        int cantCamas;
        bool perimiteBebes;
        string descripcion;
        cout << "indique el ID del hogar\n";
        cin >> idHogar;
        cout << "indique la direccion del hogar\n";
        cin.ignore();
        getline(cin,direccion);
        cout << "indique la cantidad de camas\n";
        cin >> cantCamas;
        cout << "indique 1 si perimite bebes, indique 0 si no permite bebes\n";
        cin >> perimiteBebes;
        cout << "indique una descripcion de la cama\n";
        cin.ignore();
        getline(cin,descripcion);
        auto *propTemp = new Hogar(idHogar, cantCamas, direccion, descripcion, perimiteBebes);
        hogares[propTemp->getidHogar()] =propTemp;
    }
    else
    {
        cout << "No es un propietario\n";
    }

}

void Administracion::crearReserva() {
    string fechaIncial;
    string fechaFinal;
    long idPropietario;
    long idHuesped;
    Propietario *propTempP;
    Huesped *propTempH;
    cout << "indique el dia en que quiere quedarse en el airbnb\n";
    cin.ignore();
    getline(cin, fechaIncial);
    cout << "indique el dia en que quiere irse del airbnb\n";
    cin.ignore();
    getline(cin,fechaFinal);
    cout << "indique el id del propietario\n";
    cin >> idPropietario;
    if (propietarios.find(idPropietario) == propietarios.end()){
        cout << "No existe este propietario  \n";
    }else{
        propTempP = propietarios[idPropietario];
    }
    cout << "indique el id del Huesped\n";
    cin >> idHuesped;
    if(huespedes.find(idHuesped) == huespedes.end()){
        cout << "No existe este Huesped  \n";
    }else{
       propTempH = huespedes[idHuesped];
    }
    cout << "Nombre propietario" << propTempH->getnombre() <<"\n";
    // FIXME: Corregir como entran los datos a reserva
    auto *propTemp = new Reserva(fechaIncial, fechaFinal,idReserva++, propTempP, propTempH);
    reserva[propTemp->getidReserva()]= propTemp;

}

void Administracion::crearUsuario()
{
    int opc;
    long id;
    string nombre;
    string sexo;
    string fechaNaci;
    string clinica;
    string ciudad;
    bool disponibilidad;
    cout <<"Identificacion: \n";
    cin >> id;
    cout << "Nombre:\n";
    cin.ignore();
    getline(cin, nombre);
    cout << "Sexo:\n";
    cin.ignore();
    getline(cin,sexo);
    cout << "Fecha Nacimiento:\n";
    cin.ignore();
    getline(cin,fechaNaci);

    cout <<"Como se desea registrar como Huesped [0] o Propietario [1]\n";
    cin >> opc;
    if (opc == 0)
    {
        cout <<"Clinica: \n";
        cin.ignore();
        getline(cin, clinica);
        cout <<"Ciudad: \n";
        cin.ignore();
        getline(cin,ciudad);
        auto * protemp = new Huesped(id,nombre,sexo,0,fechaNaci,clinica,ciudad);
        huespedes[protemp->getidPersona()]= protemp;
    }
    if (opc == 1)
    {
        auto protemp1 = new Propietario(id,nombre,sexo,0,fechaNaci, nullptr,0);
        propietarios[protemp1->getidPersona()] = protemp1;
    }
}


void Administracion::liberarReserva() {
    int id;
    int flag;
    cout  << "Digite el id de la reserva a liberar\n";
    cin >> id;
    if (reserva.find(id) == reserva.end())
    {
        flag = 0;
    }
    else
    {
        flag = 1;
    }
    if (flag == 1)
    {
        reserva.erase(id);
    }
    else
    {
        cout << "No existe la reserva\n";
    }

}

void Administracion::mostrarReservas() {

    for(auto i : reserva){
        i.second->mostrarDatosReserva();
    }
}

void Administracion::mostrarHuespedes() {

}

void Administracion::agregarEvaluacion() {

}