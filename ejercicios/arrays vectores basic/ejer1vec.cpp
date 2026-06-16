//1- Generar y completar un vector  con los 100 primeros números enteros y mostrarlos en forma ascendente.

#include <iostream>
using namespace std;

int main () {
    
    int vec[100];

    //for(indice de inicializacion;hasta donde trabaja;suma 1 osea, pasa al siguiente paso)
    for(int i=0;i<100;i++){

        vec[i]=i+1;
        
        cout<< vec[i] << " ";

    }

    

    return 0;
}