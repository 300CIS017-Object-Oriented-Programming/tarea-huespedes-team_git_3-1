//
// Created by santi on 15/09/2022.
//
#include <iostream>
#include "Propietario.h"

Propietario::Propietario() : Persona()
{
    hogar = nullptr;
    disponible = false;
}

Propietario::Propietario(Hogar *hogar, bool disponible) : Persona(idPersona, nombre, sexo, puntaje, fechaNacimiento)
{
    this->hogar = hogar;
    this->disponible = disponible;
}

void Propietario::setHogar(Hogar *hogar1)
{
    Propietario::hogar=hogar1;
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