/*Ejercicio 3: (3 puntos)
Se tiene un archivo de resultados electorales Legislativas.dat (sin Orden).
- ID del Partido político: 999999
- ID de la Provincia: 99
- Votos obtenidos: 9999999
- Cantidad de Bancas ganadas: 99
Se pide:
a) Ordenar el archivo Elecciones.DAT por ID del Partido.
b) Armar una lista ordenada por Votos Obtenidos, SOLO si los votos obtenidos superaron 150.000 y al menos ganaron 1 banca e imprimir la lista por pantalla.
Nota: Sólo puede leer 1 vez el archivo.*/
#include <iostream>
#include <stdio.h>
using namespace std;

struct Tinfo{
    int idPartido;
    int idprov;
    int votosObt;
    int bancasGanadas;
};

struct Nodo{
    Tinfo info;
    Nodo*sgte;
};

Nodo* insertarOrdenado(Nodo*&lista,int valor);
void mostrar(Nodo* lista);
void liberar(Nodo*& lista);

int main (){

}