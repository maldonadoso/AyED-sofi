//Dado un vector Prueba 2 y su len, busque el valor máximo e imprímalo por pantalla

#include <iostream>
using namespace std;

void maximo( int vec[], int len);

int main (){

    int prueba2[10];
    int len;

    maximo(prueba2,len);


    return 0; 
}

void maximo(int vec[], int len){
    int posMax= 0;

    for(int i=1; i<len; i++){
        if(vec[i]> vec[posMax]){

            posMax = i;
        }
        
    }

    cout << "el valor maximo dnetro del vector es: "<< vec[posMax] << endl;
}