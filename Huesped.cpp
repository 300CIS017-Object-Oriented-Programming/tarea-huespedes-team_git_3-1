//
// Created by santi on 15/09/2022.
//

#include "Huesped.h"

Huesped::Huesped() {
    cout << "Entre al constructor por defecto \n";
    infoHospital = "";
    ciudad = "";
}

Huesped::Huesped(std::string infoHospital, std::string ciudad) : Persona(idPersona,nombre, sexo, puntaje, fechaNacimiento) {

    this->infoHospital = infoHospital;
    this->ciudad=ciudad;
}

const string &Huesped::getinfoHospital() const {
    return infoHospital;
}

const string &Huesped::getciudad() const {
    return ciudad;
}

void Huesped::setinfoHospital(const std::string &infoHospital) {
    Huesped::infoHospital = infoHospital;
}

void Huesped::setciudad(const std::string &ciudad) {
    Huesped::ciudad = ciudad;
}


