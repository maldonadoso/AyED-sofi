/*Desarrolle una FUNCION que determine si un año es bisiesto 
NOTA: Es bisiesto cuando es divisible entre cuatro, excepto si tambien es divisible entre 100, a menos que tambien sea divisible entre 400*/

#include <iostream>
using namespace std;

bool esBisiesto(int anio);

int main (){

    int anioBis;
    bool resultado;

    cout << "Ingrese un anio: ";
    cin >> anioBis;



    resultado = esBisiesto (anioBis);

    // Aca
    if (resultado){

        cout << " el anio es bisiesto ";
    } else {

        cout << "el anio no es bisiesto";
    }

    

    return 0;
}

bool esBisiesto(int anio){
    if (anio%4 == 0){

        return true;

        if(anio%100 == 0){

            return false;

            if (anio%400 == 0){

                return true;

            }
        }


    } else {

        return false; 

    }
}