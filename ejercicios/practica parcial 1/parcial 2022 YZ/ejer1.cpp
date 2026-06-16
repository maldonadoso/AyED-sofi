/*Desarrolle una función que determine si en un año se jugarán las olimpiadas. Nota: Las
olimpiadas se juegan cada 4 años y coincide que son en un año divisible por 4.*/

#include <iostream>
using namespace std;

bool olimpiadas (int anio);
int main (){

    int anioOlimp;
    bool resultado;

    cout << "ingrese un anio: ";
    cin >> anioOlimp;

    resultado = olimpiadas(anioOlimp);

    
    if (resultado){

        cout << "en ese anio se juegan las olimpiadas";
    } else {

        cout << " en ese anio no se juegan las olimpiadas";
    }

    return 0; 
}

bool olimpiadas(int anio){

    if (anio%2 == 0){

        if (anio%4 == 0){

            return true; 

        } else {

            return false;

        }
    } else {
        
        return false;

    }
     
}