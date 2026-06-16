#include <iostream>
using namespace std; 

void mostrar (int vec[], int len);

int main (){

        //cuando llamo a la función en el main, no le pongo el tipo de dato Y les pongo otros nombres a las "variables"

    return 0;
}

void mostrar (int vec[], int len){

    for (int i=0; i<len; i++){

        cout << "Valor ingresado: " << vec[i];
    }

}