//Defina un vector de 10 posiciones y cárguelo con los valores provistos por el usuario, se sabe que el mismo dará valores entre 1 – 100 (controlar cuando finaliza la carga)

#include <iostream>
using namespace std; 

void inicializar (int vec[], int cantPos, int valIni);
void carga(int vec[], int len, int cantPos);

int main (){

    int vector[10];
    int len; 

    carga(vector,10,0);
    return 0;
}

void inicializar (int vec1[], int CantPos1, int valorInic){
   for (int i=0; i<CantPos1;i++){
      vec1[i]=valorInic;
   }
}

void carga (int vec[], int len, int cantPos){

    int valor;
    cout << "Ingrese un valor entre 1 y 100";
    cin >> valor;

    while (valor<100 && valor > 0 && len < cantPos){
        vec [len]= valor;
        len ++;
        cout << "Ingrese un valor entre 1 y 100";
        cin >> valor;
    }
}