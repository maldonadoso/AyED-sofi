/*Ejercicio 2 – Calcular información de un archivo 
Se tiene un archivo de registros de tamaño fijo llamado EMPLEADOS.DAT con el siguiente formato: 
• LEGAJO: Número de empleado / Numérico de hasta 6 cifras. 
• CODEMP: Código del empleado / 8 cifras. 
• SUELDO: Importe del sueldo / Numérico con 2 decimales.
Se pide realizar un programa que determine: 
1. Cantidad total de empleados. 
2. Sueldo promedio. 
3. Cantidad de empleados con sueldo superior a $1.500.000.*/

#include <iostream>
#include <stdio.h>
using namespace std;

struct Empleados{
    int legajo;
    int codEmp;
    int sueldo;
};

int main (){

    FILE*Emp;
    Empleados raux;
    int contCant=0;
    int prom;
    int contSueldo=0;
    int sumaSueldos = 0;

    Emp = fopen("EMPLEADOS.dat", "rb");

    fread(&raux, sizeof(struct Empleados), 1, Emp);

    while (!feof){
        contCant ++;
        
        if (raux.sueldo > 1500000){
            contSueldo++;
        }

        fread(&raux, sizeof(struct Empleados), 1, Emp);
    }

    fclose(Emp);

    // El del promedio lo hago afuera del while porque no quiero que calcule el promedio en cada vuelta, para cada sueldo, quiero que lo calcule una vez que contó todos los sueldos
    if(contCant != 0){
        prom = sumaSueldos/contCant;
    } else {
        prom = 0;
    }

    cout << "la cantidad de empleados es: " << contCant << endl;
    cout << " el sueldo promedio es: " << prom << endl;
    cout << " la cantidad de empleados con sueldo mayor a $1.500.000 es: " << contSueldo << endl; 

    return 0; 
}