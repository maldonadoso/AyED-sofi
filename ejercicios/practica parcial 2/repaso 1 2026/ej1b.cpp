/*B) Una funcion que retoren una lista ordenada a partir de la interseccion de 1 lista y una pila*/
#include <iostream>
using namespace std;

Nodo* listaOrd(Nodo* lista, Nodo* pila);
void push(Nodo* &pila, int valor);
int pop(Nodo* &pila);
Nodo* buscar(Nodo* lista, int v);
Nodo* insertarOrdenado(Nodo*& lista, int v);
int main (){
    return 0; 
}

Nodo* listaOrd(Nodo* lista, Nodo* pila){
    Nodo* listaf = NULL;
    int valorP;
    while(pila != NULL){
        valorP = pop(pila);
        if(buscar(lista,valorP) != NULL){
            insertarOrdenado(listaf,valorP);
        }
    }
    return listaf;
}