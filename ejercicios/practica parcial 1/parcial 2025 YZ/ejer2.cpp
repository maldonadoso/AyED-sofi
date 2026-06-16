/*Desarrolle un PROCEDIMIENTO que dados 3 valores de los lados de un triángulo, muestre el tipo de triángulo que es.
NOTA: Indicar si es equilátero, isósceles o escaleno.*/

#include <iostream>
using namespace std;

void triangulo(int A, int B, int C);
int main (){

    int ladoA;
    int ladoB;
    int ladoC;

    cout << "ingrese la longitud de los tres lados de un triangulo: ";
    cin >> ladoA >> ladoB >> ladoC ;

    triangulo(ladoA, ladoB, ladoC);
    

    return 0;
}

void triangulo(int A, int B, int C){

    if (A==B){
       
    
    } 
}
