/*se tiene un vector de los productos de la empresa tecnok, que contiene todos los productos registrados con los siguientes campos: Codigo de producto, precio, stock disponible. Ademas, se cuenta con una lista ordenada que contiene las ventas realizadas durante el dia; cada nodo de la lista contiene el codigo del producto, la cantidad vendida y el importe total de la venta.

Se pide actualizar el vector de productos con la informacion que hay en la lista, SOLO para el campo de Stock disponible, descontando las unidades vendidas de cada producto, si el stock disponible no alcanza para cubrir la cantidad vendida, no se debera modificar el stock de ese producto.
Se sabe que como maximo hay 100 productos registrados en cada vector*/
#include <iostream>
using namespace std;

struct Productos{
    int codProd;
    int precio;
    int stock;
};

struct Lista{
    int codProd;
    int cantVendida;
    int importeVenta;
};

struct NodoLista{
    Lista info;
    Nodo*sgte;
};

int buscar(Productos vec[], int len, int valor);
void liberar(Nodo*& lista);
int main (){
    
    Productos vec[100];
    int len;
    NodoLista* lista;
    Nodolista*aux=lista;

    int pos=0;

    while(aux != NULL){
        pos= buscar(vec,len,aux->info.codProd);

        if(pos!=-1){
            if(vec[pos].stock > aux.info->cantVendida){
                vec[pos].stock -= aux->info.cantVendida;
            }
        }

        aux = aux->sgte;
    }

    liberar(lista);
    liberar(aux);
    return 0;
}

void liberar(Nodo*& lista){
	Nodo* aux;
	while(lista != NULL){
		aux = lista;
		lista = lista->sgte;
		delete aux;
	}
	
}
