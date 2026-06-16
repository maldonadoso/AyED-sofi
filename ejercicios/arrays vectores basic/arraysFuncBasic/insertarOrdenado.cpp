#include <iostream>
using namespace std; 

void insertar(int vec[], int &len, int valor, int pos);          
void insertarOrdenado(int vec[], int &len, int valor);
int main (){
            //cuando llamo a la función en el main, no le pongo el tipo de dato Y les pongo otros nombres a las "variables"

    int valor;
    for (int i=0; i<5; i++){

        cout <<"...";
        cin >> valor;
    }
    return 0; 
}

// PARA USAR EL INSERTORDENADO SI O SI ANTES HAY QUE USAR EL INSERTAR 
void insertar(int vec[], int &len, int valor, int pos){           
                                                                   


    for (int i=len; i< pos; i--){
        vec [i] = vec[i-1];
    }

    vec [pos]= valor; 
    len++;
}

void insertarOrdenado(int vec[], int &len, int valor){

    int i=0;
    while (i<len && vec[i] <= valor){
        i++;
    }
    if (i==len){

        vec[len]= valor;
        len ++;
    } else {
        insertar(vec,len,valor,i);
    }
}

