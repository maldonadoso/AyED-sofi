/*dadas 2 pilas de enteros, (pilaA y pilaB), genera la union en la pila C*/
#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo* sgte;
};

void push(Nodo* &pila, int valor);
int pop(Nodo* &pila);

int main(){
    Nodo* pilaA;
    int valorA;
    Nodo* pilaB;
    int valorB;
    Nodo* pilaC = NULL;

    while(pilaA != NULL){
        valorA = pop(pilaA);

        push(pilaC,valorA);
    }

    while(pilaB != NULL){
        valorB = pop(pilaB);

        push(pilaC,valorB);
    }

    return 0;
}