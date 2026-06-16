/*Desarrolle una FUNCION que determine si un año es bisiesto 
NOTA: Es bisiesto cuando es divisible entre cuatro, excepto si tambien es divisible entre 100, a menos que tambien sea divisible entre 400*/

#include <iostream>
using namespace std; 

bool bisiesto(int anio);

int main (){

    int anioBis;
    bool resultado;

    cout << "Ingrese un anio: ";
    cin >> anioBis; 
    
    resultado = bisiesto(anioBis);
    if (resultado){

        cout << "el anio es bisiesto";
    }else {

        cout << "el anio no es bisiesto";
    }

    return 0; 
}


// divisible entre 4 = bisiesto
// divisible entre 4 Y divisible entre 100 = no bisiesto
// divisible entre 4 Y divisible entre 100 Y divisible entre 400  = bisiesto
bool bisiesto(int anio){

    if (anio%4 ==0){
        //es bisiesto 
        return true;

        if (anio%100 ==0){
            //no es bisiesto 
            return false;

            if(anio%400==0){
                //es bisiesto 
                return true;

            }

        }    
        
    } else {
        //no es bisiesto 
        return false; 
    }

}