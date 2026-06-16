#include <iostream>
using namespace std;

void inicializarMatriz(int matriz[][3],int cantF, int cantC, int valorIni);

void cargarMatriz(int matriz [][3],int cantF, int cantC);

void mostrarMatriz (int matriz [][3], int cantF, int cantC);

int sumatoria (int matriz [][3], int cantF, int cantC);

int main(){
    
    //paso 1: definir la matriz

    int miMatriz[3][3];

    //paso 2: inicializar
    inicializarMatriz(miMatriz,3,3,0);
    //paso 3 cargar la matriz

    cargarMatriz(miMatriz,3,3); //carga masiva
    //miMatriz [0][0]= 15 (sería así)

    //paso 4: procesar

    rdo= sumatoria (miMatriz,3,3); //terminar de copiar!!!!

    // paso 5: mostrar

    mostrarMatriz(miMatriz,3,3);



    return 0;
}

void inicializarMatriz(int matriz [][3],int cantF, int cantC, int valorIni){ 
    for (int i=0 ; i<cantF ; i++){
        for(int j=0; j< cantC ; j++){

            matriz [i][j]= valorIni;
        };

    };
}

void cargarMatriz(int matriz [][3],int cantF, int cantC){

    for(int i=0; i<cantF; i++){
        for(int j=0; j<cantC; j++){

            cout << "ingrese un valor para la fila "<<i<< " y la columna "<<j<<endl;
            cin >> matriz[i][j];
        }
    }
}

void mostrarMatriz (int matriz [][3], int cantF, int cantC);{

    for(int i=0; i<cantF; i++){
        for(int j=0; j<cantC; j++){

            cout << "el valor para la fila "<<i<< " y la columna "<<j<< "es: " <<matriz[i][j]<< endl;
            cin >> matriz[i][j];
        }
    }
}

int sumatoria (int matriz [][3], int cantF, int cantC){

    int sumatoria =0;
    for (int i=0; i<cantF; i++){
        for (int j=0; j<cantC;j++){

            sumatoria=sumatoria + matriz [i][j];
        }    
    }

    return sumatoria;

}