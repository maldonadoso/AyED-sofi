/*Defina los siguientes registros, defina 1 variable para la implementacion de cada uno y carguele valores a eleccioon en un programa principal.
Vehiculo:
- patente
-marca
-modelo
-anio fabricacion

Empleado:
- legajo
- nombre y apellido
- sector
- sueldo basico
- antiguedad
- planta permanente (Y o N)*/

#include <iostream>
using namespace std; 

struct Vehiculo{

    char patAlf[8];
    char marca[30];
    int modelo;
    int anioFabr;
};

struct Empleado{

    int legajo;
    char nombre[30];
    char apellido[30];
    char sector[30];
    int sueldoBas;
    int antiguedad;
    char plantaPerm;
};

int main (){

    Vehiculo auto1;
    Empleado emp1;


    cout << "Ingrese la  patente";
    cin >> auto1.patAlf;

    cout << "ingrese la marca del vehiculo";
    cin >> auto1.marca;

    cout << "ingrese el modelo del vehiculo";
    cin>> auto1.modelo;

    cout << "ingrese el anio de fabricacion del vehiculo";
    cin >> auto1.anioFabr;

    cout << "ingrese el legajo del empleado";
    cin >> emp1.legajo;

    cout << " ingrese el nombre del empleado";
    cin >>emp1.nombre;

    cout << "ingrese el apellido del empleado";
    cin >>emp1.apellido;

    cout << "ingrese el sector del empleado";
    cin>> emp1.sector;

    cout << "ingrese el sueldo basico del empleado";
    cin >> emp1.sueldoBas;

    cout << "ingrese la antiguedad del empleado";
    cin >>emp1.antiguedad;

    cout << "ingrese una Y si el empleado esta en planta permanente o una N si no lo esta";
    cin >>emp1.plantaPerm;

    while(emp1.plantaPerm != 'Y' && emp1.plantaPerm != 'N'){

        cout << "pelotudo, ingresa una letra correcta (Y/N)";
        cin >> emp1.plantaPerm;
    }

    cout << "la condicion del empleado con respecto a la planta perm es: " << emp1.plantaPerm ;

    return 0;
}