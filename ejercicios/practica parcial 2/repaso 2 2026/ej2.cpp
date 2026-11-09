/*Una empresa dedicada a la comercialización de artículos tecnológicos cuenta con un vector de
productos que almacena la información de todos los artículos registrados. Cada elemento del vector
contiene los siguientes campos: Código de Producto, Precio Unitario, Stock Disponible y Stock Mínimo.
Además, se dispone de una lista simplemente enlazada, ordenada por Código de Producto, que contiene
los movimientos de ventas realizados durante el día. Cada nodo de la lista almacena: Código de
Producto y Cantidad Vendida.
Se pide:
1) Actualizar el vector de productos utilizando la información contenida en la lista, descontando
del Stock Disponible las cantidades vendidas de cada producto. Si el stock disponible no alcanza
para cubrir la cantidad vendida, no se deberá modificar el stock y se deberá registrar el código
del producto en una nueva lista de productos con faltante de stock.
2) Generar una nueva lista simplemente enlazada con los productos cuyo stock disponible, luego
de procesar las ventas, haya quedado por debajo del Stock Mínimo. Cada nodo deberá contener
el Código de Producto y el Stock Disponible actualizado.
3) Informar la cantidad total de ventas que no pudieron concretarse por falta de stock y el importe
total correspondiente a dichas ventas.
Se sabe que como máximo hay 150 productos registrados en el vector.*/

// SIN TERMINAR!!!

#include <iostream>
using namespace std;

struct Articulo{
    int codProd;
    int precio;
    int stockD;
    int stockM;
};

struct Lista{
    int codProd;
    int cantVend;
};

struct Nodo{
    int codProd;
    Nodo* sgte;
};

struct StockMenor{
    int codProd;
    int nuevoStockD;
    StockMenor* sgte;
};

struct NodoLista{
    Lista info;
    NodoLista* sgte;
};

int buscar(Articulo arr[], int len, int v);
Nodo* insertarOrdenado(Nodo*& lista, int v);
StockMenor* insertarOrdenado2(Stockmenor* lista, int v, int x);
int main (){
    Articulo vec[150];
    int len;
    Nodolista* lista1;
    Nodo* lista2 = NULL;
    StockMenor* lista3 = NULL;

    Nodolista* aux= lista1;
    int pos=0;

    while(aux != NULL){
        pos = buscar(vec,len,aux->info.codProd);
        if(pos!=-1){
            if(vec[pos].stockD >= aux->info.cantVend){
                vec[pos].stockD -= aux->info.cantVend;
            }else{
                insertarOrdenado(lista2,aux->info.codProd);
            }
        }
        aux= aux->sgte;
    }

    for(int i=0; i<len; i++){
         if(vec[i].stockD < vec[i].stockM){
            insertarOrdenado2(lista3,aux->info.codProd, aux->info.stockD);
        }
    }
    return 0;
}

