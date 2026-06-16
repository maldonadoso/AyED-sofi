//6- Leer 10 números por teclado, 5 para un array (A) y 5 para otro array (B). Mostrar los 10 números en pantalla mediante un solo array (C)

#include <iostream>
using namespace std; 

int main(){

    int a[5];
    int b[5];
    int c[10];

    // se carga el vector a
    for (int i=0; i<5; i++){

         cout<< "ingrese un numero: ";
         cin >> a[i];
    };

    // se carga el vector b
    for (int i=0; i<5; i++){

         cout<< "ingrese un numero: ";
         cin >> b[i];

    }

    //cargo a en c
    for (int i=0; i<5; i++){

         c[i]=a[i];

    }

    //cargo b en c
    for(int i=0; i<5; i++){

        c[i + 5]=b[i];
    }
     
    //muestro el vector c (hecho por chat...)
    cout << "\nvector C:\n";

    for(int i=0; i<10; i++){

        cout << c[i] << " ";
    }
    return 0;
}