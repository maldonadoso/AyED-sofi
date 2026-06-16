/*Se tiene un vector y su len, con las notas de los estudiantes. 
Se pide que muestre: 
a. La menor nota 
b. La mejor nota 
c. El promedio 
d. La cantidad de notas cargadas*/

#include <iostream>
using namespace std;

void minimo( int vec[], int len);
void maximo( int vec[], int len);
void promedio (int vec[], int len);

int main (){

    int notas[10];
    int len;

    minimo(notas,len);
    maximo(notas,len);
    promedio(notas,len);

    cout << "La cantidad de notas cargadas es: " << len << endl;

    return 0;
}

void minimo(int vec[], int len){
    int posMin= 0;

    for(int i=1; i<len; i++){
        if(vec[i]< vec[posMin]){

            posMin = i;
        }
        
    }

    cout << "La menor nota es:  "<< vec[posMin] << endl;
}

void maximo(int vec[], int len){
    int posMax= 0;

    for(int i=1; i<len; i++){
        if(vec[i]> vec[posMax]){

            posMax = i;
        }
        
    }

    cout << "La mejor nota es:  "<< vec[posMax] << endl;
}

void promedio(int vec [], int len){
    int sumatoria=0;
    int prom;

    for(int i=0;i<len;i++){

        sumatoria =sumatoria + vec[i]; //Acumula los valores de la suma de cada valor de cada posicion del vector

    }

    prom=sumatoria/len;

    cout << "el promedio de las notas ingresadas es: "<< prom << endl;

}