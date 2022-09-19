//
// Created by santi on 15/09/2022.
//

#ifndef AIRBNB_RESERVA_H
#define AIRBNB_RESERVA_H
#include <iostream>
#include <string>
using namespace std;

class Reserva {
private:
    string fechaInicial;
    string fechaFinal;
    //Propietario *propietario;
    //Huesped *huesped;
public:
    Reserva();
    const string &getfechaInicial() const;
    const string &getfechaFinal() const;

    void setfechaInicial(const string &fechaInicial);
    void setfechaFinal(const string &fechaFinal);

    virtual ~Reserva();


};


#endif //AIRBNB_RESERVA_H
