/* Se tiene un vector de los alumnos del curso K1151, que contiene todos los alumnos que cursaron la materia con los siguientes campos: 
- numero de legajo
- nota primer parcial
- nota segudno parcial
- nota aprobacion 
Además, se cuenta con una lista ordenada que contiene las notas de los que rindieron recuperatorio del primer parcial, o segudno parcial; cada nodo de la lista contiene el numero de legajo, nota recuperatorio primer parcial o segundo parcial (puede considerar que tiene 0 en el campo que no haya rendido)
Se pide, actualizar el vector k1151, con la informacion que hay en la lista, reeemplazando el primer o segundo parcial, por la nota del recuperatorio, y actualizar el campo "nota de aprobacion". En el caso que la nota de aprobación sea 8 o mas, imprimir por pantalla que el alumno promocionó. Se sabe que como Minimo hay 50 alumnos.*/

#include <iostream>
using namespace std;

struct Alumnos{
    int legajo;
    int nota1;
    int nota2;
    int notaAp;
};

struct Nodo{
    int info;
    Nodo *sgte;
};

int main (){

    return 0; 
}