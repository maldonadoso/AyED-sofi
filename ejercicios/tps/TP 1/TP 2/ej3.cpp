/*un procedimiento que genere una lista, sin orden, a partir de la interseccion de una lista y un vector */
#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo* sgte;
};

Nodo* insertarOrdenado(Nodo*& lista, int v);
Nodo* buscar(Nodo* lista, int v);
void nuevaLista(Nodo* lista, int vec[]);

int main (){
    int vec[100];
    int len;

    Nodo* listaini;

    return 0;
}

void nuevaLista(Nodo* lista, int vec[], int len){
    Nodo* listaf = NULL;
    for(int i=0; i<len; i++){
       if(buscar(lista,vec[i]) != NULL){
        insertarOrdenado(listaf,vec[i]);
       }
    }
}