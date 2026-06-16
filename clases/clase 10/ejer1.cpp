/*Crear dos vectores a partir de un archivo.
 Se tiene un archivo de registros de tamaño fijo llamado ALUMNOS.DAT con el siguiente formato: 
• LEGAJO: Número de legajo / Numérico de hasta 6 cifras. 
• NOTA: Nota final / Numérico de 0 a 10. 
Se pide realizar un programa que lea el archivo y genere dos vectores: 
• VEC_APROBADOS: con los legajos de los alumnos que tengan nota mayor o igual a 6. 
• VEC_DESAPROBADOS: con los legajos de los alumnos que tengan nota menor a 6.*/

#include <iostream>
#include <stdio.h>
using namespace std;

// paso 1; iniciializar
void inicializar(Alumnos vec[], int cantPos, Alumnos valorIni);
void insertar(Alumnos vec[], int &len, Alumnos valor, int pos);
void insertarOrdenado(Alumnos vec[], int &len, Alumnos valor); //LO COMENTO PORQ ME DA UN ERORR RARO, PREGUNTAR!!


struct Alumnos{ // necesito llamar al struct si o si para poder usarlo como tipo de dato

    int legajo;
    int nota;
};

int main (){

    //paso 1: creo los vectores del tipo de dato del struct con su len
    Alumnos vec_Aprobados[10];
    int lenA;

    Alumnos vec_Desaprobados[10];
    int lenB;

    inicializar(vec_Aprobados,lenA,0);
    inicializar(vec_Desaprobados,lenB,0);

    // Una vez que tengo definidos e inicializados los vectores, voy a LLAMAR al archivo ya creado, con los pasos que sé
    FILE*Alumn;
    Alumnos raux;   // no me tengo que olvidar de crear esta variable!!!!!!!!

    Alumn= fopen("ALUMNOS.dat", "rb");

    
    fread(&raux, sizeof( struct Alumnos), 1, Alumn);

    while(!feof(Alumn)){

        if(raux.nota < 6){

            insertarOrdenado(vec_Desaprobados, lenB, raux.legajo);

        } else if (raux.nota > 5){

            insertarOrdenado(vec_Aprobados, lenA, raux.legajo);
        }

        fread(&raux, sizeof( struct Alumnos), 1, Alumn);
    }

    fclose(Alumn);

    return 0; 
}

void inicializar(Alumnos vec[], int cantPos, Alumnos valorIni){

    for (int i=0; i<cantPos; i++){
        vec[i]= valorIni;
    }
}

void insertar( Alumnos vec[], int &len, Alumnos valor, int pos){

    for (int i=len; i>pos; i--){

        vec[i]= vec[i-1];
    }

    vec[pos]=valor;
    len++;
}

/*void insertarOrdenado(Alumnos vec[], int &len, Alumnos valor){

    int i=0;
    while(i<len && vec[i] < valor){
        i++;
    }

    if ( i== len){
        vec[len]= valor;
        len++;
    } else {
        insertar (vec,len,valor,i);
    }
}*/