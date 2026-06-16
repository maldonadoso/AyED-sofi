/*7) Cargue un vector de 10 posiciones con los valores provistos por el usuario, éste sólo dará valores negativos (controlar cuando finaliza la carga) 
a. Genere un segundo vector que contenga los valores del original pero positivos
b. Genere un tercer vector que contenga los valores +2 
c. Genere un cuarto vector que contenga los valores multiplicados por 2 
d. Genere un quinto vector que contenga los valores -1 */

#include <iostream>
using namespace std; 

void inicializar(int vec[], int cantPos, int valorIni);
void carga(int vec[], int len, int cantPos);
int main (){

    return 0;
}

void inicializar(int vec[], int cantPos, int valorIni){

    for(int i=0; i<cantPos; i++){

        vec[i]=valorIni;
    }
}