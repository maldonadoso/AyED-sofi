/* El apareo sirve SI Y SOLO SI tengo dos o mas archivos existentes que estan ordenados y comparten tipo de dato, para obtener un archivo C que es combinacion de ambos con los resultados ordenados.*/
/*En este caso, por ej, si tuviese dos archivos con la informacion de los alumnos, ordenada por legajo, obtendria un tercer archivo con todos los alumnos juntos.*/

#include <iostream>
#include <stdio.h>
using namespace std; 

struct Alumno{
    int legajo;
    int dni;
    int nota1;
    int nota2;
};

int main (){
    FILE*ArchA;
    FILE*ArchB;
    FILE*ArchC;

    ArchA= fopen("archivoA.dat", "rb");
    ArchB= fopen("archivoB.dat", "rb");
    ArchC= fopen("archivoC.dat", "wb");

    Alumno ra;
    Alumno rb;

    fread(&ra, sizeof(struct Alumno),1, ArchA);
    fread(&rb, sizeof(struct Alumno),1, ArchB);

    while(!feof(ArchA) && !feof(ArchB)){
        if(ra.legajo<rb.legajo){
            //escribo el ra en C y vuelvo a leer ra
            fwrite(&ra,sizeof(struct Alumno),1,ArchC);
            fread(&ra,sizeof(struct Alumno),1,ArchA);
        }else{
            //escribo rb en C y vuelvo a leer rb
            fwrite(&rb,sizeof(struct Alumno),1,ArchC);
            fread(&rb,sizeof(struct Alumno),1,ArchB);
        }
    }

    //en caso de que alguno de los archivos termine, tengo que procesar el que queda

    while(!feof(ArchA)){
        fwrite(&ra,sizeof(struct Alumno),1,ArchC);
        fread(&ra,sizeof(struct Alumno),1,ArchA); 
    }

    while(!feof(ArchB)){
        fwrite(&rb,sizeof(struct Alumno),1,ArchC);
        fread(&rb,sizeof(struct Alumno),1,ArchB);
    }

    fclose(ArchA);
    fclose(ArchB);
    fclose(ArchC);

    return 0;
}