/*Se tiene un archivo de registros de inscripciones a cursos de capacitación denominado Inscripciones.dat
(sin orden).
• Número de Legajo: 999999
• Código de Curso: 9999
• Nota del examen final: 99
• Cantidad de inasistencias: 99
• Año de cursada: 9999
Se pide:
a) Ordenar el archivo Inscripciones.dat por Número de Legajo.
b) Armar una lista simplemente enlazada, ordenada por Nota del Examen Final, SOLO con aquellos
alumnos que hayan aprobado el curso (nota mayor o igual a 6), que tengan como máximo 2 inasistencias
y que hayan cursado durante el año 2026. Cada nodo de la lista deberá contener Número de Legajo,
Código de Curso y Nota obtenida. Imprimir la lista por pantalla.
c) Informar la cantidad de alumnos que no cumplen con alguna de las condiciones establecidas para
formar parte de la lista.*/
#include <iostream>
#include <stdio.h>
using namespace std;

struct Inscriptos{
    int legajo;
    int codCurso;
    int notaFinal;
    int faltas;
    int anio;
};

struct Aprobados{
    int legajo;
    int codCurso;
    int nota;
};

struct NodoIn{
    Inscriptos info;
    Nodo*sgte;
};

struct NodoAp{
    Aprobados info;
    Nodo*sgte;
};
Nodo* insertarOrdenadoPorLegajo(NodoIn*&lista, Inscriptos v);
Nodo* insertarOrdenadoPorNota(NodoAp*&lista, Aprobados v);
Void* liberar(NodoIn*&lista);
Void* liberar(NodoAp*&lista);
void mostrar(NodoAp* lista);

int main (){
    NodoIn* listaIn= NULL;
    NodoAp* listaAp= NULL;

    int contDes=0;

    FILE* Ins;
    Ins = fopen("Inscripciones.dat", "rb");
    Inscriptos raux;
    Aprobados raux2;
    fread(&raux,sizeof(struct inscriptos),1, Ins);

    while(!feof(Ins)){
        insertarOrdenadoPorLegajo(listaIn,raux);

        if(raux.nota >= 6 && raux.faltas <= 2 && raux.anio == 2026){
            raux2.legajo= raux.legajo;
            raux2.codCurso = raux.codCurso;
            raux2.nota = raux.notaFinal;
            
            insertarOrdenadoPorNota(listaAp,raux2);
        }else{
            contDes++;
        }
        fread(&raux,sizeof(struct inscriptos),1, Ins);
    }
    fclose(Ins);

    Ins= fopen("Inscripciones.dat","wb");
    NodoIn*aux= listaIn;

    while(aux!= NULL){
        fwrite(&aux->info, sizeof(struct Inscriptos),1,Ins);
        aux= aux->sgte;
    }
    fclose(Ins);
    mostrar(listaAp);

    cout<< "La cantidad de alumnos que no cumplen las condiciones para formar parte de la lista son: "<<contDes<<endl;

    liberar(listaIn);
    liberar(listaAp);

    return 0;
}