//
// Created by santi on 15/09/2022.
//

#include "Reserva.h"

Reserva::Reserva() {
    cout << "Entre al constructor por defecto \n";
    fechaInicial = "";
    fechaFinal = "";
    idReserva = 0;
    propietario = nullptr;
    huesped = nullptr;
}

Reserva::Reserva(std::string &fechaInicial, std::string &fechaFinal, int idReserva, Propietario* Po, Huesped* Hu) : fechaInicial(fechaInicial), fechaFinal(fechaFinal), idReserva(idReserva), propietario(Po), huesped(Hu){
    cout << "Entra constructor\n";
}

const string &Reserva::getfechaInicial() const {
    return fechaInicial;
}

void Reserva::setfechaInicial(const std::string &fechaInicial) {
    Reserva::fechaInicial = fechaInicial;
}

const string &Reserva::getfechaFinal() const {
    return fechaFinal;
}

void Reserva::setfechaFinal(const std::string &fechaFinal) {
    Reserva::fechaFinal = fechaFinal;
}

int Reserva::getidReserva() const {
    return idReserva;
}

void Reserva::setidReserva(int idReserva) {
    Reserva::idReserva = idReserva;
}

void Reserva::mostrarDatosReserva() {
    cout << "El dia en cual esta programada la reserva es el dia: " << fechaInicial << "\n";
    cout << "El dia en cual esta programado el check out de la reserva es el dia : " << fechaFinal << "\n";
    cout << "El id de la reserva es : " << idReserva << "\n";
    cout << "El Propietario: " << propietario->getnombre() << "\n";
    cout << "El Huesped: " << huesped->getnombre() << "\n";
}

Reserva::~Reserva() {

}
