//Defina un vector de 20 posiciones y cárguelo con los valores indicados por el usuario. Se sabe que el usuario sólo compartirá valores positivos (controlar cuándo finaliza la carga)

#include <iostream>
using namespace std;


void inicializar(int vec[], int cantPos, int valorIni );
void carga(int vec[], int &len, int cantPos);
int main (){

    int vector[20];
    int len;
    inicializar(vector,20,0);
    carga(vector,len,20);

    return 0; 
}

void inicializar(int vec[], int cantPos, int valorIni){

    for (int i=0; i<cantPos;i++){

        vec[i]= valorIni;
    }

}

void carga(int vec[], int &len, int cantPos){ // paso el len por referencia porque cuando termine el ejercicio no quieor que mi len valga 0

    int valor; 
    len=0;

    cout << "Ingrese un número: ";
    cin >> valor; 

    while (len< cantPos && valor > 0){ 

        vec[len]= valor;
        len ++;

        cout << "Ingrese un número: ";
        cin >> valor; 
    }

    
}