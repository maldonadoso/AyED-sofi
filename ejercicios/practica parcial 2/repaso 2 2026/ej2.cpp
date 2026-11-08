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
#include <iostream>
using namespace std;

struct Articulo{
    int codProd;
    int precioUni;
    int stockD;
    int stockM;
};

struct Lista{
    int codProd;
    int cantVend;
}; 

struct NodoLista{
    Lista info;
    Nodo* sgte;
};

int buscar(Articulo vec[], int len, int v);
void liberar(Nodo*& lista);

int main (){
    Articulo vec[150];
    int len=0;
    Nodo* lista;
    Nodo* aux= lista;
    int pos =0;

    while(aux != NULL){

        pos= buscar(vec,len,aux->info.)
    }



    return 0;
}