/* Dado un vector de 5 numeros enteros, retornar la suma de sus componentes*/

#include <iostream>
using namespace std;

int main (){

    int numeros[]={2,5,8,7,9};
    int suma = 0;


    for (int i=0;i<5; i++){

        suma = suma + numeros[i];
        
    
    };

    cout << "la suma de los numeros del vector es:  " << suma <<endl;

    return 0;
}