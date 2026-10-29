/*Dadas 2 Colas de enteros (Cola A y Cola B) genere la UNION de ambos en Cola C.*/

#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo* sgte;
};

// Encabezados de los procedimientos y funciones ya existentes
void agregarNodo(Nodo*& lista, int x);
void mostrar(Nodo* lista);
Nodo* buscar(Nodo* lista, int v);
int eliminarPrimerNodo(Nodo*& lista);

int main(){

    Nodo* colaA;
    Nodo* colaB;
    Nodo* colaC = NULL;

    Nodo* auxA = NULL;
    Nodo* auxB = NULL;

    int valor;

    // Cola A y Cola B se consideran dadas/cargadas

    while(colaA != NULL){

        valor = eliminarPrimerNodo(colaA);

        if(buscar(colaC, valor) == NULL){
            agregarNodo(colaC, valor);
        }

        agregarNodo(auxA, valor);
    }

    colaA = auxA;

    while(colaB != NULL){

        valor = eliminarPrimerNodo(colaB);

        if(buscar(colaC, valor) == NULL){
            agregarNodo(colaC, valor);
        }

        agregarNodo(auxB, valor);
    }

    colaB = auxB;

    cout << "Union de Cola A y Cola B:" << endl;
    mostrar(colaC);

    return 0;
}