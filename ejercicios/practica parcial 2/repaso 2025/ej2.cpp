/*Ejercicio 2: (3 puntos)
Se tiene un vector de los alumnos del curso K1151, que contiene todos los alumnos que se inscribieron en curso de verano con los siguientes campos: Número de Legajo, Materia, Nota de Aprobación.Además, se cuenta con una lista ordenada que contiene las notas de los que rindieron recuperatorio del Segundo Parcial; cada nodo de la lista contiene el Número de Legajo, Nota del primer parcial y la nota del recuperatorio.

Se pide, actualizar el vector K1151 con la información que hay en la lista, SOLO para el campo Nota de Aprobación si es que aprobó el recuperatorio y promediarla con la nota del Primer parcial (si es que era 6 o más) que también se encuentra en el nodo; sino no hacer nada.

Ej: Si un alumno obtuvo 6 o más en su recuperatorio y tiene 6 o más en el primer parcial; en el vector en el campo Nota de Aprobación, tendrá que aparecer la nueva nota (que es el promedio de las dos).

Se sabe que como Máximo hay 50 alumnos.*/

#include < iostream>
using namespace std;

struct Alumnos{
    int legajo;
    char materia[20];

}

int main (){

    return 0
}