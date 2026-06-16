/*Desarrolle un PROCEDIMIENTO que dados 3 valores de los lados de un triángulo, muestre el tipo de triángulo que es.
NOTA: Indicar si es equilátero, isósceles o escaleno.*/

#include <iostream>
using namespace std; 

void triangulo(int lado1, int lado2, int lado3);
int main (){

    int ladoA; 
    int ladoB;
    int ladoC;

    cout << "ingrese tres numeros, que seran los tres lados de un triangulo"<< endl;
    cin >> ladoA;
    cin >> ladoB;
    cin >> ladoC;

    triangulo(ladoA, ladoB, ladoC);


    return 0;
}

void triangulo(int lado1, int lado2, int lado3){

    if(lado1 == lado2){

        if (lado2==lado3){

            cout << "el triangulo es equilatero";

        } else {

            cout << "el triangulo es isosceles";

        }
    } else if(lado2 == lado3) {

                cout << "el triangulo es isosceles";
    } else if (lado1==lado3){

        cout << "el triangulo es isosceles";
    } else {

        cout << "el triangulo es escaleno";
    }

}