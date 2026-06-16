/*Escribe un programa que defina un vector de números y calcule la multiplicación acumulada de sus elementos.
*/

#include <iostream>
using namespace std;

int main (){

    int numeros[]={2,3,4,5,6};
    int multiplicacion = 1;

    for(int i=0;i<5;i++){

        multiplicacion = multiplicacion * numeros[i];
    };

    cout<< "la multiplicacion de los numeros del vector es: " << multiplicacion <<endl;


    return 0;
}