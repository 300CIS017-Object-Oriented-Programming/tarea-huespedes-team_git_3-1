//
// Created by santi on 15/09/2022.
//

#ifndef AIRBNB_PERSONA_H
#define AIRBNB_PERSONA_H
#include <iostream>
#include <string>
using namespace std;


class Persona {
private:
    long idPersona;
    string nombre;
    string sexo;
    int puntaje;
    string fechaNacimiento;
public:
    Persona();
    Persona(long id, string nombre1,string sexo1, int puntaje1, string fechaNaci);
    long getidPersona() const;
    const string &getnombre() const;
    const string &getsexo() const;
    int getpuntaje() const;

    void setidPersona(long idPersona);
    void setnombre(const string &nombre);
    void setsexo(const string &sexo);
    void setpuntaje(int puntaje);

    virtual ~Persona();

};


#endif //AIRBNB_PERSONA_H
