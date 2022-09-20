
#ifndef TAREA_HUESPEDES_TEAM_GIT_3_1_ADMINISTRACION_H
#define TAREA_HUESPEDES_TEAM_GIT_3_1_ADMINISTRACION_H
#include "Propietario.h"
#include "Persona.h"
#include "Hogar.h"
#include "Reserva.h"
#include "Evaluacion.h"
#include "Huesped.h"
#include <unordered_map>

using namespace std;

class Administracion {

private:
    unordered_map<string,Persona*> usuarios;
    unordered_map<string, Evaluacion*> evaluacion;
    unordered_map<int, Reserva*> reserva;

public:
    Administracion();

    void agregarInfoHogar();

    void crearReserva();

    void liberarReserva();
    void mostrarReservas();
    void agregarEvaluacion();



};


#endif //TAREA_HUESPEDES_TEAM_GIT_3_1_ADMINISTRACION_H
