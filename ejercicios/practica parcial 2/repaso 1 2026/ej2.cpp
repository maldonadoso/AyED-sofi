/*se tiene un vector de los productos de la empresa tecnok, que contiene todos los productos registrados con los siguientes campos: Codigo de producto, precio, stock disponible. Ademas, se cuenta con una lista ordenada que contiene las ventas realizadas durante el dia; cada nodo de la lista contiene el codigo del producto, la cantidad vendida y el importe total de la venta.

Se pide actualizar el vector de productos con la informacion que hay en la lista, SOLO para el campo de Stock disponible, descontando las unidades vendidas de cada producto, si el stock disponible no alcanza para cubrir la cantidad vendida, no se debera modificar el stock de ese producto.
Se sabe que como maximo hay 100 productos registrados en cada vector*/
#include <iostream>
using namespace std;

struct Producto{
    int codProd;
    int precio;
    int stockD;
};

struct Lista{
    int codProd;
    int cantVend;
    int ventaTot;
};

struct NodoLista{
    Lista info;
    Nodolista* sgte;
};

int buscar(Producto arr[], int len,int v); //el dato es de tipo int ya que lo q busco es comparar el stock que en el struct es int
void liberar(Nodo*& lista);

int main (){
    Producto vec[100];
    int len;
    Nodolista* lista1;

    NodoLista* aux= lista1; //creo un auxiliar que apunte a lista, y trabajo con este asi no pierdo a lista1
    int pos=0;

    while(aux != NULL){
        pos = buscar(vec,len,aux->info.codProd); //busca en el vector Vec el producto cuyo codigo sea igual a aux->info.codProd
                                                 // la funcion buscar recorre el vector, compara los códigos y devuelve la posición donde encontró ese producto.
        if(pos!=-1){
            if(vec[pos].stockD >= aux->info.cantVend){
                vec[pos].stockD -= aux->info.cantVend;
            }
        }
        aux=aux->sgte;
    }

    liberar(lista1);
    return 0;
}