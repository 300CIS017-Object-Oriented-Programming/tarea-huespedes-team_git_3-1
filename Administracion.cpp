
#include "Administracion.h"
#include <cstring>

using namespace std;

Administracion::Administracion() {
    cout << " Contructor por defecto\n";

}

void Administracion::agregarInfoHogar() {
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
    auto *proptemp = new Hogar(idHogar, cantCamas, direccion, descripcion, perimiteBebes);
    hogares[proptemp->getidHogar()] =proptemp;



}

void Administracion::crearReserva() {

}

void Administracion::crearUsuario()
{
    int opc;
    string nombre;
    string sexo;
    string fechaNaci;
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
    switch (opc) {
        case 0:

            break;
        case 1:

            break;
        default:
            break;
    }

}

void Administracion::liberarReserva() {

}

void Administracion::mostrarReservas() {

}

void Administracion::agregarEvaluacion() {

}