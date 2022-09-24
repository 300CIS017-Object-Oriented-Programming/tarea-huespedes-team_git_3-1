
#ifndef TAREA_HUESPEDES_TEAM_GIT_3_1_ADMINISTRACION_H
#define TAREA_HUESPEDES_TEAM_GIT_3_1_ADMINISTRACION_H
#include "Propietario.h"
#include "Persona.h"
#include "Hogar.h"
#include "Reserva.h"
#include "Evaluacion.h"
#include "Huesped.h"
#include <unordered_map>
#include <cstring>
#include <vector>

using namespace std;

class Administracion {

private:
    int idReserva;
    int idEvaluacion;
    unordered_map<long,Huesped*> huespedes;
    unordered_map<long,Propietario*> propietarios;
    unordered_map<int, Evaluacion*> evaluacion;
    unordered_map<int, Reserva*> reserva;
    unordered_map<int, Hogar*> hogares;
    void inicializarDatos();
public:
    Administracion();

    void agregarInfoHogar();

    void crearReserva();

    void crearUsuario();

    void liberarReserva();
    void mostrarReservas();
    void agregarEvaluacion();



};


#endif //TAREA_HUESPEDES_TEAM_GIT_3_1_ADMINISTRACION_H
