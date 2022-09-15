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



        cin >> opc;

        switch (opc)
        {
            case 1:
                cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
                break;
            case 2:
                cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
                break;
            case 3:
                cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
                break;
            case 4:
                cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
                break;
            case 5:
                cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
                break;
            case 6:
                cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
                break;
            case 7:
                cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
                break;
            case 8:
                cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
                break;
            case 9:
                cout << "\n ****Bienvenidos a Airbnb Manizales  ****\n";
                break;
            case 10:
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