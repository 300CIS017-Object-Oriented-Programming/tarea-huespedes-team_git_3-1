//
// Created by santi on 15/09/2022.
//

#include "Persona.h"

Persona::Persona() {
    cout << "Entre al constructor por defecto \n";
    idPersona = 0;
    nombre = "";
    sexo = "";
    puntaje = 0;
}

long Persona::getidPersona() const {
    return idPersona;
}

const string &Persona::getnombre() const {
    return nombre;
}

const string &Persona::getsexo() const {
    return sexo;
}

int Persona::getpuntaje() const {
    return puntaje;
}

void Persona::setidPersona(long idPersona) {
    Persona::idPersona = idPersona;
}

void Persona::setnombre(const std::string &nombre) {
    Persona::nombre = nombre;
}

void Persona::setsexo(const std::string &sexo) {
    Persona::sexo = sexo;
}

void Persona::setpuntaje(int puntaje) {
    Persona::puntaje = puntaje;
}

Persona::~Persona() {

}
