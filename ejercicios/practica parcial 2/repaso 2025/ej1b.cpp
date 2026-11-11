/*b) Una función que retorne una lista ordenada a partir de la Intersección de 1 lista y una pila.*/


struct Nodo{
    int info;
    Nodo*sgte;
};
int pop(Nodo* &pila);
Nodo* buscar(Nodo* lista, int v);
Nodo* insertarOrdenado(Nodo*& lista, int v);

Nodo* listaOrd(Nodo*lista, Nodo*&pila){

    Nodo*listafin = NULL;
    Nodo* aux = lista;
    int valorPop;

    while(pila != NULL){
        valorPop = pop(pila);
        if((buscar(aux,valorPop))!= NULL){
            insertarOrdenado(listafin,valorPop);
        }
        aux=aux->sgte;
    }
    return listafin;
}