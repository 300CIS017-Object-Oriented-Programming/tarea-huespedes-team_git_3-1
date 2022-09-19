//
// Created by santi on 15/09/2022.
//

#ifndef AIRBNB_HOGAR_H
#define AIRBNB_HOGAR_H

#include <iostream>
#include <cstring>
#include <vector>

using std::cin;
using std::cout;
using std::string;

class Hogar
{
private:
    long idHogar;
    int cantCamas;
    bool permiteBebes;
    string direccion;
    string descripcion;

public:
    Hogar();
    void setIdHogar(long id);
    void setCantCamas(int cant);
    void setDireccion(string dir);
    void setDescripcion(string descrip);
    void mostrarDatos();

};


#endif //AIRBNB_HOGAR_H
