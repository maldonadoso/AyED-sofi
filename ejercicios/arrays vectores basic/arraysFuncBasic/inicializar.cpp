#include <iostream> 
using namespace std; 


void inicializar (int vec[], int cantPos, int valIni);

int main (){

        //cuando llamo a la función en el main, no le pongo el tipo de dato Y les pongo otros nombres a las "variables"


    return 0; 
}



        // INICIALIZAR - Acá nace el vector 
void inicializar  (int vec[], int cantPos,  int valIni) {       // vector[], cantidad de posiciones, valor inicial.
    for(int i=0;i<cantPos;i++) {                                // para indice 0; i menor que la cantidad de posiciones, suma 1 al indice.
        vec[i] = vec[cantPos];                                  // vector en la posicion del indice = cantidad de posiciones ( vec[0] = vec[cantPos] son 0 )
    }                                                           // i++
}

//VERSION PROFE

void inicializar (int vec1[], int CantPos1, int valorInic){
   for (int i=0; i<CantPos1;i++){
      vec1[i]=valorInic;
   }
}
