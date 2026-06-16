// 3- Generar y completar un array con los números pares comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente

#include <iostream>
using namespace std; 

int main (){

    int vector[100]; //paso 1: defino el vector 

    for (int i=0; i<50; i++){   //paso 2: creo las condiciones del ejercicio; i=0, i<50 y que vaya SUMANDO, (ascendente)

        vector[i]= i*2;         /*DATO EXTRA: yo habia pensado que se podía escribir i++++, o sea, q en lugar de que la i sume uno sume*/
                                // dos, y no era realmente imposible, había que crear otra variable int par, definirla abajo del vector, y acá adentro del for escribirla como par++, y llegabab a lo mismo q llegue yo
        cout << vector[i] << " ";

    };


    return 0; 
}

// LO HICE BIEN SOLA!!!!!!!!