#include <iostream>
#include <string>
#include <string.h>
using namespace std;

struct Nodo {
	int info;
    Nodo* sgte;
};

//listas
void agregarNodo(Nodo*& lista, int x);
void mostrar(Nodo* lista);
void liberar(Nodo*& lista);
Nodo* buscar(Nodo* lista, int v);
void eliminar(Nodo*& lista, int v);
int eliminarPrimerNodo(Nodo*& lista);
Nodo* insertarOrdenado(Nodo*& lista, int v);
void ordenar(Nodo*& lista);
Nodo* buscaEInsertaOrdenado(Nodo*& lista, int v, bool& enc);

//pilas
Nodo* pila = NULL; //defino el puntero
void push(Nodo* &pila, int valor);
int pop(Nodo* &pila);

//colas
Nodo* colaFte = NULL; // defino puntero 1
Nodo* colaFin = NULL; //defino puntero 2

void agregar(Nodo* &cFte, Nodo* &cFin, int valor);
int suprimir(Nodo*&colafte, Nodo*&colafin);
