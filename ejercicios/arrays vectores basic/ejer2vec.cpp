// 2- Generar y completar un array con los 100 primeros números enteros y mostrarlos en forma descendente.

#include <iostream>
using namespace std;

int main (){

    int vector[100];

    for (int i=100; i>0; i--){

        vector[i]= i - 1;

        cout << vector[i] << " ";
    };

    
    return 0;
}