//
// Created by santi on 15/09/2022.
//

#ifndef AIRBNB_EVALUACION_H
#define AIRBNB_EVALUACION_H
#include <iostream>
#include <string>
using namespace std;

class Evaluacion {
private:
    string fecha;
    double calificacion;
    string comentario;
    // Propietario *evaluado

public:
    Evaluacion();
    const string &getfecha() const;
    double getcalificacion() const;
    const string &getcomentario() const;

    void setfecha(const string &fecha);
    void setcalificacion( double calificacion);
    void setcomentario(const string &comentario);

    virtual ~Evaluacion();


};


#endif //AIRBNB_EVALUACION_H
