/*Se tiene un archivo de registros con los resultados finales de los aspirantes a una beca (máximo 100 aspirantes).
Formato del registro:
• DNI
• Puntaje
• Resultado ('A' = Aprobado, 'E' = En espera, 'R' = Rechazado)
Se pide:
1. Realizar un programa que genere un nuevo archivo con los aspirantes aprobados únicamente, con el siguiente formato:
a. DNI
b. Puntaje
2. Mostrar por pantalla el promedio de los puntajes de todos los aspirantes.
3. Mostrar por pantalla la cantidad de aspirantes rechazados.*/

#include <iostream>
#include <stdio.h>
using namespace std; 

struct Aspirantes{
    int dni;
    int puntaje;
    char resultado;
};

struct Aprobados{
    int dni;
    int puntaje;
};

int main (){

    FILE*Aspi;
    FILE*Aprob;
    Aspirantes raux;
    Aprobados rcarga;
    int sumatoria=0;
    int prom;
    int contAsp=0;
    int contRech=0;

    Aspi= fopen("ASPIRANTES.dat", "rb");
    Aprob = fopen("APROBADOS.dat", "wb");

    fread(&raux, sizeof(struct Aspirantes), 1, Aspi);

    while(!feof(Aspi)){

        if(raux.resultado == 'A'){

            rcarga.dni=raux.dni;
            rcarga.puntaje=raux.puntaje;

            fwrite(&rcarga, sizeof(struct Aprobados), 1, Aprob);
            
        } else if(raux.resultado == 'R'){

            contRech++;
        }

        sumatoria += raux.puntaje;
        contAsp++;

        fread(&raux, sizeof(struct Aspirantes), 1, Aspi);

    }
    fclose(Aspi);
    fclose(Aprob);
    
    prom= sumatoria/contAsp;

    cout << "el puntaje promedio de todos los aspirantes es: " << prom << endl;
    cout << "la cantidad de aspirantes rechazados es de: " << contRech << endl;

    return 0;
}