//
// Created by santi on 15/09/2022.
//

#ifndef AIRBNB_PROPIETARIO_H
#define AIRBNB_PROPIETARIO_H
#include "Persona.h"
#include "Hogar.h"

#include <iostream>
#include <cstring>
#include <vector>

using std::cin;
using std::cout;
using std::string;


class Propietario : public Persona {
private:
    Hogar * hogar;
    bool disponible;

public:
    Propietario();
    Propietario(Hogar* hogar, bool disponible);
    bool getDisponible() const;
    void setDisponible(bool disponible1);
    Hogar* getHogar() const;
    void setHogar(Hogar* hogar1);

};


#endif //AIRBNB_PROPIETARIO_H
