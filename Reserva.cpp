//
// Created by santi on 15/09/2022.
//

#include "Reserva.h"

Reserva::Reserva() {
    cout << "Entre al constructor por defecto \n";
    fechaInicial = "";
    fechaFinal = "";
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

Reserva::~Reserva() {

}
