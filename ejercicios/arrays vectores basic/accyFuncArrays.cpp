// Acciones y funciones para vectores 

/* Estructura del código de ejercicios con funciones 

    #include iostream 
    etc etc
    
    prototipos de función: le explico al programa que existen las funciones que voy a crear
    
    int main (){
    
    conjunto de instrucciones; 
    return valor; 
    }
    
    Definición de funciones */

// Todos estos se escriben ABAJO del main, tengo entendido que esto ni siquiera se escribe en el parcial

// INICIALIZAR - Acá nace el vector 
void inicializar  (int vec[], int cantPos,  int valIni) {       // vector[], cantidad de posiciones, valor inicial.
    for(int i=0;i<cantPos;i++) {                                // para indice 0; i menor que la cantidad de posiciones, suma 1 al indice.
        vec[i] = vec[cantPos];                                  // vector en la posicion del indice = cantidad de posiciones ( vec[0] = vec[cantPos] son 0 )
    }                                                           // i++
}
