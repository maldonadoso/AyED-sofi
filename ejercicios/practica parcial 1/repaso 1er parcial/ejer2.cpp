/*Desarrolle un procedimiento que, dados los tres puntajes obtenidos por un participante en distintas pruebas, indique que clasificacion tiene.
MOTA: si los 3 puntajes son iguales, Categoría A, si exactamente 2 puntajes son iguales, Categoría B, si los 3 puntajes son distintos , Categoría C.*/


#include <iostream>
using namespace std; 


void clasificacion(int punt1, int punt2, int punt3);
int main () {

    int nota1;
    int nota2;
    int nota3;

    cout << "ingrese sus 3 puntajes: " << endl;
    cin >> nota1 >> nota2 >> nota3;
    
    clasificacion(nota1,nota2,nota3);
    return 0;
}

void clasificacion(int punt1, int punt2, int punt3){

    if(punt1== punt2){

        if(punt2==punt3){
            cout << "Ud. es categoria A";
        } else {
            cout << "Ud. es categoria B";
        }

    } else if(punt2==punt3){

        cout << "Ud. es categoria B";
    } else if(punt1==punt3){

        cout << "Ud. es categoria B";
    } else {
        cout << "Ud. es categoria C";
    }
}
