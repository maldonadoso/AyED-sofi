/*Una empresa posee un archivo binario "empleados.dat" que contiene registros con la siguiente informacion: legajo, sueldo mensual. se pide realizar un programa qur ordene por numero de legajo el archivo*/

#include <iostream>
#include <stdio.h>
using namespace std;

struct Tinfo{
    int legajo;
    int sueldo;
};

struct Nodo{
    Tinfo info;
    Nodo* sgte;
};

void liberar(Nodo*& lista);
Nodo* insertarOrdenado(Nodo*& lista,Tinfo v);
int main (){

    Nodo* lista= NULL;
    FILE* Arch;
    Arch= fopen("EMPLEADOS.dat", "rb");
    Tinfo raux;
    fread(&raux,sizeof(struct Tinfo),1,Arch);

    while(!feof(Arch)){
        insertarOrdenado(lista,raux);

        fread(&raux,sizeof(struct Tinfo),1,Arch);
    }
    fclose(Arch);

    Nodo* aux= lista;

    Arch= fopen("EMPLEADOS.dat","wb");
    fwrite(&aux->info,sizeof(struct Tinfo),1,Arch);

    while(aux != NULL){
        fwrite(&aux->info,sizeof(struct Tinfo),1,Arch);
        //insertarOrdenado(lista,aux); NOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO

        aux= aux->sgte;
    }
    
    fclose(Arch);
    liberar(lista);
    return 0;
}

Nodo* insertarOrdenado(Nodo*& lista,Tinfo v){
	
	Nodo* nuevo = new Nodo();
	nuevo->info = v;
	nuevo->sgte = NULL;
	
	Nodo* aux = lista;
	Nodo* ant = NULL;
	
	while(aux != NULL && aux->info <= v){
		ant = aux;
		aux = aux->sgte;
	}
	
	if(ant != NULL){
		ant->sgte = nuevo;
	} else {
		lista = nuevo;
	}
	
	nuevo->sgte = aux;
	
	return nuevo;
}

void liberar(Nodo*& lista){
	Nodo* aux;
	while(lista != NULL){
		aux = lista;
		lista = lista->sgte;
		delete aux;
	}
	
}