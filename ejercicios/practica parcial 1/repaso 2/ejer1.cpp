/*Desarrolle una función que determine; dadas las 2 notas obtenidas y un carácter ‘A’ o ‘D’ (que indica la aprobación o
no del TP); si un alumno promociona. Nota: Un alumno promociona si ambas son 8 o más y tiene aprobado el TP.*/

#include <iostream>
using namespace std; 

bool promocion(int nota1, int nota2, char tp);
int main(){

    int notA = 8;
    int notB = 8;
    char tp1 = 'A';
    bool resultado;

   resultado = promocion(notA, notB, tp1);

   if(resultado){
    cout << "promociona";
   } else {
     cout <<"no";
   }
    

    return 0;
}

bool promocion(int nota1, int nota2, char tp){
    if(nota1 > 7 && nota2 > 7 && tp == 'A'){
        return  true;
    } else {
        return false;
    }
}
