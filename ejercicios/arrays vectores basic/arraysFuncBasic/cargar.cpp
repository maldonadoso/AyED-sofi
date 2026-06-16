#include <iostream>
using namespace std; 


void carga(int vec[], int len, int cantPos);
int main (){

    //cuando llamo a la función en el main, no le pongo el tipo de dato Y les pongo otros nombres a las "variables"

    return 0;
}

void carga (int vec[], int len, int cantPos){

    int valor;
    cout << "Ingrese un valor, terminar con 0";
    cin >> valor;

    while (valor =! 0 && len < cantPos){
        vec [len]= valor;
        len ++;
        cout << "Ingrese un valor, terminar con 0";
        cin >> valor;
    }
}