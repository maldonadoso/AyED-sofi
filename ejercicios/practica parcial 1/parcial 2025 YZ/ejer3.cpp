/*Defina los siguientes registros, defina 1 variable para la implementación de cada uno y cargarle valores a elección en un programa principal
Socio: DNI, Nombre y Apellido, Numero de afiliado, anio de afiliacion
Alumno: legajo, nombre y apellido, materia, nota1, nota1, promoicona(si o no)*/

#include <iostream>
using namespace std; 

// PASO 1: ARMAR Y DEFINIR LOS STRUCTS. A PARTIR DE ESTOS, SE CREA UN NUEVO TIPO DE DATO LLAMADO "SOCIO" Y OTRO "ALUMNO"
struct Socio {
    int dni;
    char nombre[30];
    char apellido[30];
    int numAfil;
    int anioAfil;
};

struct Alumno{
    int legajo;
    char nombre[30];
    char apellido[30];
    char materia[30];
    int nota1;
    int nota2;
};

int main (){

    // PASO 2: DEFINO UNA VARIABLE PARA LA IMPLEMENTACION DE CADA UNO 
    Alumno alum1;
    Socio soc1;

    cout << "ingrese  numero de dni del socio: "<< endl;
    cin >> soc1.dni;

    cout << "Ingrese nombre del socio: " << endl;
    cin >> soc1.nombre;

    cout << "Ingrese apellido del socio: " << endl;
    cin >> soc1.apellido;

    cout << "ingrese numero de afiliado del socio: " << endl;
    cin >> soc1.numAfil;

    cout << "ingrese su anio de afiliacion: " << endl;
    cin >> soc1.anioAfil;

    cout << "ingrese numero de legajo del alumno: "<< endl;
    cin >> alum1.legajo;

    cout << "Ingrese nombre  del alumno: " << endl;
    cin >> alum1.nombre;

    cout << "Ingrese apellido  del alumno: " << endl;
    cin >> alum1.apellido;

    cout << "ingrese la materia: " << endl;
    cin >> alum1.materia;

    cout << "ingrese la nota de su primer parcial: " << endl;
    cin >> alum1.nota1;

    cout << "ingrese la nota de su segundo parcial: " << endl;
    cin >> alum1.nota2;

    cout << "dni del socio: " << soc1.dni << " ,nombre y apellido del socio: " << soc1.nombre << " " << soc1.apellido << " ,num de afiliado del socio: " << soc1.numAfil << " ,anio de afiliacion: " << soc1.anioAfil << endl;

    cout << "legajo del alumno: " << alum1.legajo << " nombre y apellido del alumno: " << alum1.nombre << " " << alum1.apellido << " materia q esta cursando el alum: " << alum1.materia << " ,nota del primer examen:  " << alum1.nota1 << " ,nota del segundo examen:  " << alum1.nota2 << endl;

    if(alum1.nota1 > 7){

        if (alum1.nota2 > 7){

            cout << " el alumno promociona" << endl; 
        } else {

            cout << "el alumno no promociona"<< endl;
        }
    } else {

        cout << " el alumno no promociona" << endl;
    }

    return 0;
}