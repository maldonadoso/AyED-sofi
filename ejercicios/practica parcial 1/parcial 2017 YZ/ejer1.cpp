/*Desarrolle una función que devuelva la estación del año dada una fecha MMDD y el
hemisferio (‘N’ ; ‘S’). Considerar que las estaciones están cruzadas Ej: cuando es
Verano en el Norte es Invierno en el Sur.*/

#include <iostream>
using namespace std; 

char estacion(int fecha, char hemisf);
int main (){
    int fecha1;
    char hemisferio;

    cout << "ingrese una fecha en el formato MMDD";
    cin >> fecha1;

    cout << "indique el hemisferio con las letras S o N ";
    cin >> hemisferio;

    

return 0;
}

//hemisferio SUR (S): verano(1221 - 0320), otonio(0321 - 0620), invierno(0621 - 0920), primavera(0921 - 1220)
//hemisferio NORTE (N): verano (0621 - 0920), otonio(0921 - 1220), invierno (1221 - 0320), primavera(0321 - 0620)
char estacion(int fecha, char hemisf){

   if(fecha > 320 && fecha < 1221){

        if ( hemisf == 'N'){

            

        } else if ( hemisf == 'S'){

            cout << "es verano";
        }
   }
}