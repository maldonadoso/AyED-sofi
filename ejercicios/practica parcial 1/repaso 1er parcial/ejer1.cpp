/* Desarrolle una funcion que determine si un anio es bisiesto.
MOTA: es bisiesto cundo es divisible entre 4, excepto si tambien es divisible entre 100, a menos que tambien sea divisible entre 400*/

#include <iostream>
using namespace std; 

bool esBisiesto(int anio);
int main (){

    int anioBis;
    bool resultado; 

    cout << "anio";
    cin >> anioBis;

    resultado = esBisiesto(anioBis);

    if(resultado){
        cout << "el anio es bisiesto";
    } else {

        cout << "el anio no es bisiteso";
    }
    return 0; 
}

bool esBisiesto(int anio){

    if(anio%4== 0){

        return true;

        if(anio%100 == 0){

            return false;
            
            if(anio%400 == 0){

                return true;
            } else {

                return false;
            }
        } else {
            return false;
        }
            
        
    } else {

        return false;
    }

}
