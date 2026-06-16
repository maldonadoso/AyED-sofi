//5- Dado 10 números ingresados por teclado, almacenelos en un array y muestre la suma, resta, multiplicación y división de todos.

#include <iostream>
using namespace std; 

int main (){

    int vector[10];
    int suma = 0;
    int resta = 0; 
    int multiplicacion = 1;
    int division; // no se como hacerla 

    for(int i=0;i<10;i++){

        cout<< "ingrese un numero: ";
        cin>> vector[i];
        

    };

    //para mostrar el vector de forma prolija: 
    cout << "vector ingresado: ";
    for(int i=0;i<10;i++){
        cout << " " << vector[i];
    }
    
    cout << endl;

    for(int i=0;i<10;i++){

        suma += vector[i];
        resta -= vector[i];
        multiplicacion = multiplicacion * vector [i];


    };

cout << "la suma de los componentes del vector es: " << suma<< endl;
cout << "la resta de los componentes del vector es: " << resta << endl;
cout << "la multiplicacion de los componentes del vector es: " << multiplicacion << endl;


    
    return 0;
}