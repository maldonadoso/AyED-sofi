//4- Generar y completar un array con los números impares comprendidos entre 1 y 100 y los muestre en pantalla en orden ascendente

#include <iostream> 
using namespace std; 

int main(){

    int vector[100]; //paso 1: defino el vector 
   
    for(int i=0; i<50; i++){

        vector[i]= (i*2) +1;    //la diferencia con el ej anterior es que los impares TAMBIEN van de 2 en 2 pero arrancando en 1 

        cout << vector[i]<< " ";
    };


    return 0;
}