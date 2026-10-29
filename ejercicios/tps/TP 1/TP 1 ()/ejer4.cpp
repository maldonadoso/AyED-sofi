/*Dado un vector acerca de la producción de semillas, que contiene el código de la semilla y la cantidad de kilos disponibles para la venta (Se sabe que máximo hay 1500 tipos de semillas), determinar:

a-     ¿Cuál es la semilla que más kilos tiene producidos?
b-     ¿Cuál es la semilla que menos kilos tiene?
c-     Calcular el promedio de kilos generados.*/

#include <iostream>
using namespace std; 

// siempre que me tenga un vector dado asumo que está cargado y con un len asociado

struct semillas{
    int codSem;
    int kilosSem;
};

void mayor(semillas vec[], int len);
void menor(semillas vec[], int len);
void promedio(semillas vec[], int len);

int main (){

    return 0;
}

void mayor(semillas vec[], int len){    // Asumo  que la posición del vector donde se encuentre la mayor cantidad de kilos de semillas 
    int posMax = 0;                     // producidas es la CERO
    int cantMax = vec[0].kilosSem;

    for (int i=1; i<len; i++){
         if (vec[i].kilosSem > cantMax ) {

            posMax = i;
            cantMax= vec[i].kilosSem;
         }
        
    }

    cout << "La semilla que mas kilos tiene producidos es: " << vec[posMax].kilosSem;
}

void menor(semillas vec[], int len){
    int codMin = 0;
    int cantMin = vec[0].kilosSem;

    for (int i=1; i<len; i++){
         if (vec[i].kilosSem < cantMin ) {

            codMin = i;
            cantMin= vec[i].kilosSem;
         }
        
    }

        cout << "La semilla que menos kilos tiene producidos es: " << vec[codMin].kilosSem;

}

