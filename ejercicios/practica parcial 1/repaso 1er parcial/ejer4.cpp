/*Dado un vector de respuestas de una encuesta (se sabe que participaron como máximo 2500 personas), que contiene:
• Código del participante
• Ciudad
• Respuesta ('S' = Sí, 'N' = No, 'I' = Indeciso)
Determinar:
1. ¿Cuál fue el resultado de la encuesta (gana Sí o No)?
2. ¿Cuál es la cantidad de respuestas Sí y No?
3. ¿Cuántos participantes quedaron indecisos?*/

#include <iostream>
using namespace std; 

//como el vector esta dado, no tengo q inicializar ni cargar, en el parcial me viene bomba, pero aca no voy a poder ejecutarlo, lol

struct Encuesta{

    int codPart;
    char ciudad[30];
    char respuesta;
};

void resultado (Encuesta vec[], int len);

int main (){

    Encuesta vector[2500];
    int len;

    resultado(vector,len);


    return 0;
}

void resultado (Encuesta vec[], int len){

    int contS= 0;
    int contN= 0;
    int contI=0;

    for(int i=0; i<len; i++){
        if(vec[i].respuesta == 'S'){
            contS++;
        } else if (vec[i].respuesta == 'N'){
            contN++;
        } else {
            contI++;
        }
    }

    if(contN>contS){
        cout << "gana NO";
    } else {
        cout << "gana SI";
    }

    cout << "la cantidad de respuestas NO fueron: " << contN;
    cout << "la cantidad de respuestas SI fueron:" << contS;
    cout << "la cantidad de indecisos es de: " << contI;
}
