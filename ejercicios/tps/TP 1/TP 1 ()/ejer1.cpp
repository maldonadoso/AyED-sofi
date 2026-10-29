//Desarrolle una función que determine si un año es Mundialista. 

//Nota: Los mundiales se llevan a cabo cada 4 años y coincidentemente caen en años pares NO divisible por 4. Se pide SOLO la función, no el main.

#include <iostream>
using namespace std; 


bool esMundialista(int anioMund);


int main () {

    int anio;

    cout<< "ingrese un anio para chequear que sea mundialista " << endl;
    cin >> anio;

    esMundialista(anio);



    return 0;
}

bool esMundialista(int anioMund){

    if (anioMund%2==0){
        if (anioMund%4==0){
            cout << "El anio: "<< anioMund << " no es mundialista"<<endl;
            return false;
        } else {
            cout << "El anio: "<< anioMund << " es mundialista" <<endl;
            return true;
        }
    } else {
        cout << "El anio: "<< anioMund << " no es mundialista"<<endl;
        return false;
    }


}
    
