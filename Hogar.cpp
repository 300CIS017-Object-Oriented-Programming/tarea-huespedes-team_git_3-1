//
// Created by santi on 15/09/2022.
//

#include "Hogar.h"

Hogar::Hogar() {
    cout << " Contructor por defecto\n";
    idHogar = 0;
    direccion = "";
    cantCamas = 0;
    permiteBebes = false;
    descripcion = "";
}

Hogar::Hogar(long id, int cant, string &dir, string &descrip, bool bebes) : idHogar(id), direccion(dir), cantCamas(cant), permiteBebes(bebes), descripcion(descrip){
    cout << "Entra constructor de 5 parametros\n";
}

long Hogar::getidHogar() const {
    return idHogar;
}

int Hogar::getcantCamas() const {
    return cantCamas;
}

const string &Hogar::getdireccion() const {
    return direccion;
}

bool Hogar::getpermiteBebes() const {
    return permiteBebes;
}

const string &Hogar::getdescripcion() const {
    return descripcion;
}

void Hogar::setIdHogar(long id) {
    Hogar::idHogar = id;
}

void Hogar::setCantCamas(int cant) {
    Hogar::cantCamas = cant;
}

void Hogar::setDescripcion(string &descrip) {
    Hogar::descripcion = descrip;
}

void Hogar::setPermiteBebes(bool bebes) {
    Hogar::permiteBebes = bebes;
}

void Hogar::setDireccion( string &dir) {
    Hogar::direccion = dir;
}

void Hogar::mostrarDatos() {
    cout << "El id del Hogar es: " << idHogar << "\n";
    cout << "La direccion: " << direccion << "\n";
    cout << "La cantidad de camas es: " << cantCamas << "\n";
    cout << "Permite bebes: " << permiteBebes << "\n";
    cout << "Descripcion: " << descripcion << "\n";
}

Hogar::~Hogar() {
}