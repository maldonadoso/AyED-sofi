/*Dadas dos colas de enteros, (colaA y colaB), genere la UNION de ambos en colaC*/
#include <iostream>
using namespace std;

struct Nodo{
    int info;
    Nodo* sgte;
};
void agregar(Nodo* &cFte, Nodo* &cFin, int valor);
int suprimir(Nodo*&colafte, Nodo*&colafin);

int main (){
    Nodo* colaAfte;
    Nodo* colaAfin;

    Nodo* colaBfte;
    Nodo* colaBfin;

    Nodo* colaCfte = NULL;
    Nodo* colaCfin = NULL;

    int valor;
    int valor1;

    while(colaAfte != NULL){
        valor = suprimir(colaAfte,colaAfin);

        agregar(colaCfte,colaCfin,valor);
    }

    while(colaBfte != NULL){
        valor1 = suprimir(colaBfte,colaBfin);

        agregar(colaCfte,colaCfin,valor1);
    }

    return 0; 
}