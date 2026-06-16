/*Dado un lote valores provistos por el usuario, que finalizan con 0, definir y cargar un vector de 15 posiciones (de manera ordenada) y calcular:
a. La sumatoria de todos los valores luego de ingresarlos al vector
b. El valor máximo 
c. El valor mínimo
d. Generar un segundo vector que contenga sólo la mitad de cada valor cargado en el vector original
e. Genere un tercer vector con el doble de cada valor cargado en el vector original*/

#include <iostream>
using namespace std;


void inicializar (int vec[], int cantPos, int valIni);
void carga(int vec[], int len, int cantPos);
void insertar(int vec[], int &len, int valor, int pos);
void insertarOrdenado(int vec[], int &len, int valor);
void minimo(int vec[],int len);

int main (){

    int vector[15];
    int len; 

    inicializar(vector,15,0);
    carga(vector,len,15);

    return 0; 
}

void inicializar (int vec1[], int CantPos1, int valorInic){
   for (int i=0; i<CantPos1;i++){
      vec1[i]=valorInic;
   }
}

void carga (int vec[], int len, int cantPos){

    int valor;
    cout << "Ingrese un valor, terminar con 0";
    cin >> valor;

    while (valor =! 0 && len < cantPos){
        vec [len]= valor;
        len ++;
        cout << "Ingrese un valor, terminar con 0";
        cin >> valor;
    }
}

void insertar(int vec[], int &len, int valor, int pos){           
                                                                
    for (int i=len; i< pos; i--){
        vec [i] = vec[i-1];
    }
    vec [pos]= valor; 
    len++;
}

void insertarOrdenado(int vec[], int &len, int valor){

    int i=0;
    while (i<len && vec[i] <= valor){
        i++;
    }
    if (i==len){
        vec[len]= valor;
        len ++;
    } else {
        insertar(vec,len,valor,i);
    }
}

void minimo(int vec[],int len){
 int posMin= 0;

    for(int i=1; i<len; i++){
        if(vec[i]< vec[posMin]){

            posMin = i;
        }
        
    }

    cout << "el valor minimo dnetro del vector es: "<< vec[posMin] << endl;
}


