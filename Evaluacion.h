//
// Created by santi on 15/09/2022.
//

#ifndef AIRBNB_EVALUACION_H
#define AIRBNB_EVALUACION_H
#include <iostream>
#include <string>
#include "Propietario.h"
#include "Huesped.h"
using namespace std;

class Evaluacion {
private:
    string fecha;
    int calificacion;
    string comentario;
    Propietario *evaluado;
    Huesped* evaluador;

public:
    Evaluacion();
    Evaluacion(string&, int, string&,Propietario* evaluado, Huesped* evaluador);
    const string &getfecha() const;
    double getcalificacion() const;
    const string &getcomentario() const;

    void setfecha(const string &fecha);
    void setcalificacion( double calificacion);
    void setcomentario(const string &comentario);

    virtual ~Evaluacion();


};


#endif //AIRBNB_EVALUACION_H
