/* dada una pila de enteros, generar otra pila solamente con los valores pares*/

#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo *sgte;
};

int pop(Nodo* &pila);
void push(Nodo* &pila, int valor);

int main (){
    Nodo* pila;
    Nodo* pila2 = NULL;
    int valor;

    while(pila != NULL){

        valor = pop(pila);

        if(valor%2 == 0){
            push(pila2,valor);
        }


    }

    return 0;
}

/* al hacerlo asi, los valores de la pila2 vana quedar invertidos, entonces, si me lo pidieran en orden, tendria q crear una tercera pila auxiliar, pasarlo primero a esta y luego pasarla a mi pila2 final*/