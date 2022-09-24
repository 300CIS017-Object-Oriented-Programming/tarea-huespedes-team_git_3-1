#include <iostream>
#include "Administracion.h"

using std::cin;
using std::cout;
using std::string;

void menu(Administracion & administracion)
{
    int opc = 0;
    int ID;
    do
    {
        cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
        cout << "1. Agregar Usuario \n";
        cout << "2. Agregar Hogar \n";
        cout << "3. Agregar Reserva \n";
        cout << "4. Mostrar Reservas \n";
        cout << "5. Liberar Reservas \n";
        cout << "6. Evaluacion \n";
        cout << "-1. Salir\n";
        cin >> opc;

        switch (opc)
        {
            case 1:
                administracion.crearUsuario();
                break;
            case 2:
                administracion.agregarInfoHogar();
                break;
            case 3:
                administracion.crearReserva();
                break;
            case 4:
                administracion.mostrarReservas();
                break;
            case 5:
                administracion.liberarReserva();
                break;
            case 6:
                administracion.agregarEvaluacion();
                break;
            case 7:
                cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
                break;
            default:
                break;
        }
    } while (opc != -1);
}

int main()
{
    Administracion administracion;
    menu(administracion);
    return 0;
}