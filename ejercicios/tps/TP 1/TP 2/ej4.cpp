/*Dadas 1 Pila de enteros y 1 Cola de enteros, se pide cargar la UNION ambos en una Lista Ordenada y mostrarla por pantalla.*/
#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo *sgte;
};

void push(Nodo* &pila, int valor);
int pop(Nodo* &pila);
void agregar(Nodo* &cFte, Nodo* &cFin, int valor);
int suprimir(Nodo*&colafte, Nodo*&colafin);

void mostrar(Nodo* lista);
Nodo* insertarOrdenado(Nodo*& lista, int v);
int main (){

    Nodo* pila;
    int valorP;
    Nodo* colaFte;
    Nodo* colaFin;
    int valorC;

    Nodo* lista = NULL;

    while(pila != NULL){
        valorP = pop(pila);
        insertarOrdenado(lista,valorP);
    }

    while(colaFte != NULL){
        valorC = suprimir(colaFte,colaFin);
        insertarOrdenado(lista,valorC);
    }

    mostrar(lista);

    return 0;
}