#include <iostream>
using namespace std;

void cargaMasiva(int vec [], int len, int cantPos);

int main (){

        //cuando llamo a la función en el main, no le pongo el tipo de dato Y les pongo otros nombres a las "variables"

    return 0;
}

void cargaMasiva(int vec[], int len, int cantPos){

    for (int i=0; i< cantPos; i++){
        cout << "ingrese un valor"<< endl;
        cin >> vec[i];
        len ++;
    }
}