//
// Created by santi on 15/09/2022.
//

#include "Propietario.h"
#include <iostream>

Propietario::Propietario() : Persona()
{
    hogar = nullptr;
    disponible = false;
}

Propietario::Propietario(long id, std::string &nombre, std::string &sexo, int puntaje, std::string &fechaNaci, Hogar *hogar1, bool disponible1) : Persona(id,nombre,sexo,puntaje,fechaNaci)
{
    this->hogar = hogar1;
    this->disponible = disponible1;
}

void Propietario::setHogar(Hogar *hogar1)
{
    Propietario::hogar = hogar1;
}

void Propietario::setDisponible(bool disponible1)
{
    Propietario::disponible = disponible1;
}

Hogar* Propietario::getHogar() const
{
    return hogar;
}

bool Propietario::getDisponible() const
{
    return disponible;
}