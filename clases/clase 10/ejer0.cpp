/*Crear dos vectores a partir de un archivo.
Se tiene un archivo de registros de tamaño fijo llamado ALUMNOS.DAT con el siguiente formato: 
• LEGAJO: Número de legajo / Numérico de hasta 6 cifras. 
• NOTA: Nota final / Numérico de 0 a 10. 
Se pide realizar un programa que lea el archivo y genere dos vectores: 
• VEC_APROBADOS: con los legajos de los alumnos que tengan nota mayor o igual a 6. 
• VEC_DESAPROBADOS: con los legajos de los alumnos que tengan nota menor a 6.*/

#include <iostream>
#include <stdio.h>
using namespace std;

struct Alumno{
    int legajo;
    int nota;
};

int main (){

    //paso 1: creo el puntero
    FILE*Alum;

    //paso 2: creo una variable del tipo de dato del struct que me va a servir en este caso para la funcion que quiero hacer con este ejercicio
    Alumno rcarga;

    // aca abri el archivo, le tengo que poner el nombre que pide la consigna. como este es un caso espcial y estoy CREANDO el archivo, pongo wb.
    Alum = fopen("ALUMNOS.dat" , "wb");

    cout << "ingrese su numero de legajo, cuando termine coloque 0: ";
    cin >> rcarga.legajo;

    while(rcarga.legajo !=0){

        cout << "ingrese su nota: ";
        cin >> rcarga.nota;

        fwrite(&rcarga, sizeof(struct Alumno),1,Alum);

        cout << "ingrese su numero de legajo, cuando termine coloque 0: ";
        cin >> rcarga.legajo;        
    }

    fclose(Alum);

    return 0;
}