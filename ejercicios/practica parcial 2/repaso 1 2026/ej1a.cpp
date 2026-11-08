/* A) Desarrollar un procedimiento que genere una lista ordenada a partir de la UNION de dos colas y un vector. */
#include <iostream>
using namespace std;

void listaOrd(Nodo* colaAfte, Nodo* colaAfin, Nodo* colaBfte, Nodo* colaBfin, int vec[], int len);
void agregar(Nodo* &cFte, Nodo* &cFin, int valor);
int suprimir(Nodo*&colafte, Nodo*&colafin);
Nodo* insertarOrdenado(Nodo*& lista, int v);
int main() {
    
    return 0;
}

void listaOrd(Nodo* colaAfte, Nodo* colaAfin, Nodo* colaBfte, Nodo* colaBfin, int vec[], int len){
    Nodo* lista = NULL;
    int valorA;
    int valorB;

    while(colaAfte != NULL){
        valorA = suprimir(colaA);
        insertarOrdenado(lista,valorA);
    }

    while(colaBfte != NULL){
        valorB = suprimir(colaB);
        insertarOrdenado(lista,valorB);
    }

    for (int i=0; i<len; i++){
        insertarOrdenado(lista,vec[i]);
    }
}
