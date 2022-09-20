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

Propietario::Propietario(Hogar *hogar, bool disponible) : Persona(idPersona, nombre, sexo, puntaje){}
