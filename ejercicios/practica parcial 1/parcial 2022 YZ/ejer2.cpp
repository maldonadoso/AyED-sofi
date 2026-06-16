/*Desarrolle un procedimiento que dados 4 números, muestre al mayor por pantalla.
(Los números se pasan por parámetro)*/

#include <iostream>
using namespace std; 

void mayor(int num1, int num2, int num3, int num4);
int main (){

    return 0;
}

void mayor(int num1, int num2, int num3, int num4){

  if (num1 > num2){

        if (num1> num3){

            if (num1> num4){

                cout << " el mayor de los cuatro num ingresados es: " << num1 << endl;

            }else {

                cout << "el mayor de los cuatro num ingresados es: " << num4 << endl;
            }

        } else if (num3>num4){

            cout << "el mayor de los cuatro num ingresados es: " << num3 << endl;
        } 
  }
    
}