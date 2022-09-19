//
// Created by santi on 15/09/2022.
//

#include "Evaluacion.h"

Evaluacion::Evaluacion() {
    cout << "Entre al constructor por defecto \n";
    fecha = "";
    calificacion = 0;
    comentario = "";

}

const string &Evaluacion::getfecha() const {
    return fecha;
}

double Evaluacion::getcalificacion() const {
    return calificacion;
}

const string &Evaluacion::getcomentario() const {
    return comentario;
}

void Evaluacion::setfecha(const std::string &fecha) {
    Evaluacion::fecha = fecha;
}

void Evaluacion::setcalificacion(double calificacion) {
    Evaluacion::calificacion = calificacion;
}

void Evaluacion::setcomentario(const std::string &comentario) {
    Evaluacion::comentario =comentario;
}

Evaluacion::~Evaluacion() {
    
}