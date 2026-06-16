/*Desarrolle un procedimiento que dadas 3 notas muestre el promedio. 

Nota: Las notas deben ser pasadas por parámetro. Sólo se pide el procedimiento.*/

#include <iostream>
using namespace std; 

// defino el procedimiento - PASO 1
void promNotas(int nota1, int nota2, int nota3);


int main (){// escribo adentro del main - PASO 3
    
    int not1, not2,not3; //acá SI puedo definir a todas las variables en la misma línea xq estoy adentro del main 

    cout << "ingrese sus 3 notas"<< endl;
    //cin >> not1 >> not2 >> not3;
    cin >> not1; 
    cin >> not2;    
    cin >> not3;

    promNotas(not1,not2,not3);
    

    return 0;
}

//creo el procedimiento. - PASO 2
void promNotas(int nota1, int nota2, int nota3){//IMPORTANTE: hay q escribir int para todas las variables xq no estamos adentro del main

    // no defino al prom adentro del parentesis porque no es un dato que va a ingresar el usuario
    int prom;
    prom = (nota1 + nota2 + nota3)/3; // no tengo q volver a definir las variables que ya defini adentro del paréntesis

    cout << "El promedio de las notas ingresadas es: " << prom << endl;

};




