//
// Created by santi on 15/09/2022.
//

#ifndef AIRBNB_HUESPED_H
#define AIRBNB_HUESPED_H
#include "Persona.h"
#include <iostream>

class Huesped: public Persona{

private:
    string infoHospital;
    string ciudad;
public:
    Huesped();

    const string &getinfoHospital() const;
    const string &getciudad() const;

    void setinfoHospital(const string &infoHospital);
    void setciudad(const string &ciudad);

    //virtual ~Huesped();


};


#endif //AIRBNB_HUESPED_H
