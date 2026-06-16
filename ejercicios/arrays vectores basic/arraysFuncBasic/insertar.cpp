#include <iostream> 
using namespace std; 

void insertar(int vec[], int &len, int valor, int pos);  // PARAMETROS PASADOS POR REFERENCIA -> &

int main (){

        //cuando llamo a la función en el main, no le pongo el tipo de dato Y les pongo otros nombres a las "variables"

    return 0; 
}

void insertar(int vec[], int &len, int valor, int pos){           
                                                                   


    for (int i=len; i< pos; i--){
        vec [i] = vec[i-1];
    }

    vec [pos]= valor; 
    len++;
}


/* se usa para: hacer espacio
                   ↓
                guardar el nuevo valor
                ↓
                aumentar longitud*/