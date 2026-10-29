/* Dada una pila de enteros, mostrar solamente los valores pares y vaciar la pila*/

#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo* sgte;
};

int pop(Nodo* &pila);

int main (){

    Nodo* pila; // ESTA MAL igualarla a null ya q está dada
    int valor;

    while(pila != NULL){

        valor = pop(pila);

        if(valor%2== 0){
            cout << valor <<endl;
        }
    }

    return 0;
}