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
    virtual ~Hogar();
    Hogar(long id, int cant, string &dir, string &descrip, bool bebes);

    long getidHogar() const;
    const string &getdireccion() const;
    int getcantCamas() const;
    bool getpermiteBebes() const;
    const string &getdescripcion() const;

    void setIdHogar(long id);
    void setCantCamas(int cant);
    void setDireccion(const string &dir);
    void setPermiteBebes(bool bebes);
    void setDescripcion(const string &descrip);
    void mostrarDatos();

};


#endif //AIRBNB_HOGAR_H
