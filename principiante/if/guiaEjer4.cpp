// Dados dos valores numéricos diferentes entre sí, informar cuál es el mayor.

#include <iostream>
using namespace std;

int main (){

    int x;
    int y; 

    cout << "Ingrese un numero entero: ";
    cin >> x;

    cout << "Ingrese otro numero entero: ";
    cin >> y;

    if(x>y){
        cout << "El numero mayor es: " << x << endl;

    } else {

        cout << "El numero mayor es: " << y<< endl;
    }

    return 0;
}