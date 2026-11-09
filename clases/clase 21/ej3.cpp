/*La universidad tiene un arhcivo binario de Alumnos. dat que contiene los registros de legajo y el promedio general de la carrera. se pide generar un programa que ordene fisicamente el archivo segun el promedio de los alumnos de mayor a menor.*/

#include <iostream>
#include <stdio.h>
using namespace std;

struct Tinfo{
    int legajo;
    int promGen;
};
struct Nodo{
    Tinfo info;
    Nodo* sgte;
};

void liberar(Nodo*& lista);
Nodo* insertarOrdenado(Nodo*& lista,Tinfo v);
int main (){

    Nodo*lista = NULL;
    FILE* Alum;
    Alum = fopen("Alumnos.dat","rb");
    Tinfo raux;
    fread(&raux,sizeof(struct Tinfo),1,Alum);

    while(!feof(Alum)){
        insertarOrdenado(lista,raux);
        fread(&raux,sizeof(struct Tinfo),1,Alum);
    }
    fclose(Alum);

    Alum = fopen("Alumnos.dat","wb");
    Nodo*aux= lista;

    while(aux != NULL){
        fwrite(&aux->info,sizeof(struct Tinfo), 1, Alum);
        aux= aux->sgte;
    }
    fclose(Alum);
    liberar(lista);

    return 0;
}