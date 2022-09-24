//
// Created by santi on 15/09/2022.
//

#ifndef AIRBNB_RESERVA_H
#define AIRBNB_RESERVA_H
#include <iostream>
#include <string>
#include "Huesped.h"
#include "Propietario.h"

using namespace std;

class Reserva {
private:
    string fechaInicial;
    string fechaFinal;
    int idReserva;
    Propietario *propietario;
    Huesped *huesped;
public:
    Reserva();
    Reserva(string &fechaInicial, string &fechaFinal, int idReserva, Propietario*,Huesped*);
    const string &getfechaInicial() const;
    const string &getfechaFinal() const;
    int getidReserva() const;

    void setfechaInicial(const string &fechaInicial);
    void setfechaFinal(const string &fechaFinal);
    void setidReserva(int idReserva);


    void mostrarDatosReserva();

    virtual ~Reserva();


};


#endif //AIRBNB_RESERVA_H
