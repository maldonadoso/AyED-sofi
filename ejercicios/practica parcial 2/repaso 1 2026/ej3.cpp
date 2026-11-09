/*se tiene un archivo de resultados academicos Finales.dat (sin orden).
Numero de legajo: 999999
Codigo de materia: 9999
Nota obtenida: 99
Cantidad de intentos: 99
Se pide:
a) Ordenar el archivo por numero de legajo
b) armar una lista ordenada por Nota obtenida, SOLO si la nota obtenida es mayor o igual a 6 y la cantidad de intentos no supera los 2, e imprimir la lista por pantalla.*/
#include <iostream>
#include <stdio.h>
using namespace std;

struct Tinfo{
    int legajo;
    int codMat;
    int nota;
    int cantIntentos;
};

struct Nodo{
    Tinfo info;
    Nodo*sgte;
};

Nodo* insertarOrdenadoPorLegajo(Nodo*&lista, Tinfo v);
Nodo* insertarOrdenadoPorNota(Nodo*&lista, Tinfo v);
Void* liberar(Nodo*&lista);
void mostrar(Nodo* lista);
int main(){

    Nodo* lista= NULL;
    Nodo*listaAprob= NULL;

    FILE* Fin;
    Fin = fopen("Finales.dat", "rb");
    Tinfo raux;
    fread(&raux,sizeof(struct Tinfo),1,Fin);

    while(!feof(Fin)){
        insertarOrdenadoPorLegajo(lista,raux);
        
        if(raux.nota >= 6 && raux.cantIntentos <=2){
            insertarOrdenadoPorNota(listaAprob,raux);
        }
        fread(&raux,sizeof(struct Tinfo),1,Fin); 
    }
    fclose(Fin);

    Nodo* aux= lista;
    Fin = fopen("Finales.dat", "wb");

    while(aux != NULL){
        fwrite(&aux->info,sizeof(struct Tinfo),1,Fin);
        aux = aux-> sgte;
    }
    fclose(Fin);
    mostrar(listaAprob);

    liberar(lista);
    liberar(listaAprob);
    return 0;
}