/*Una tienda posee un archivo binario "Productos.dat" cuyos registros contienen; el codigo de producto, tipo del producto (char) y el precio. Se pide un programa que lea todos los productos almacenados en el archivo , y los ordene de menor a mayor*/
#include <iostream>
#include <stdio.h>
using namespace std;

struct Tinfo{
    int codProd;
    char tipoProd;
    int precio;
};

struct Nodo{
    Tinfo info;
    Nodo* sgte;
};

void liberar(Nodo*& lista);
Nodo* insertarOrdenado(Nodo*& lista,Tinfo v);
int main (){

    Nodo*lista= NULL;
    FILE* Prod;
    Prod= fopen("Productos.dat","rb");
    Tinfo raux;

    fread(&raux,sizeof(struct Tinfo),1,Prod);

    while(!feof(Prod)){
        insertarOrdenado(lista,raux);

        fread(&raux,sizeof(struct Tinfo),1,Prod);
    }
    fclose(Prod);

    Nodo*aux= lista;
    Prod = fopen("Productos.dat","wb");
    
    while(aux != NULL){
        fwrite(&aux->info,sizeof(struct Tinfo),1,Prod);
        aux= aux->sgte;
    }
    fclose(Prod);
    liberar(lista);
    return 0;
}