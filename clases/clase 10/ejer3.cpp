/*Generar dos archivos nuevos. Se tiene un archivo de registros de tamaño fijo llamado VENTAS.DAT con el siguiente formato:
• NRO_VENTA: Número de venta / Numérico de hasta 8 cifras. 
• COD_VEND: Código de vendedor / Numérico de hasta 5 cifras. 
• IMPORTE: Importe de la venta / Entero. 
Se pide generar dos archivos: 
VENTAS_ALTAS.DAT 
• NRO_VENTA 
• COD_VEND 
• IMPORTE 
Contendrá las ventas con importe superior a $100.000. 
VENTAS_BAJAS.DAT 
• NRO_VENTA 
• COD_VEND 
• IMPORTE 
Contendrá las ventas con importe menor o igual a $100.000.*/

#include <iostream>
#include <stdio.h>
using namespace std;

struct Ventas {
    int nroVenta;
    int codVend;
    int importe;
};

struct ventasAltas{
    int nroVenta;
    int codVend;
    int importe;
};

struct ventasBajas{
    int nroVenta;
    int codVend;
    int importe;
};

int main (){

    FILE * Vent;
    Ventas raux;
    Vent = fopen("VENTAS.dat", "rb");

    // CREO todos los archivos por afuera del while, pero adentro los DEFINO!!!
    FILE*VentAltas;
    ventasAltas rcargaAlt;
    VentAltas = fopen("VENTAS_ALTAS.dat","wb");

    FILE*VentBajas;
    ventasBajas rcargaBaj;
    VentBajas = fopen("VENTAS_BAJAS.dat","wb");

    fread( &raux, sizeof(struct Ventas), 1, Vent);

    while(!feof(Vent)){

        if(raux.importe > 100000){

            // le asigno a cada "componente" del nuevo archivo los valores de el archivo ya existente, en cada campo, IMPORTANTE EL ORDEN EN EL QUE SE ESCRIBE
           rcargaAlt.nroVenta = raux.nroVenta; 
           rcargaAlt.codVend = raux.codVend;
           rcargaAlt.importe = raux.importe;

           fwrite(&rcargaAlt, sizeof(struct ventasAltas), 1, VentAltas);

        } else {

            // le asigno a cada "componente" del nuevo archivo los valores de el archivo ya existente, en cada campo, IMPORTANTE EL ORDEN EN EL QUE SE ESCRIBE
            rcargaBaj.nroVenta = raux.nroVenta;
            rcargaBaj.codVend = raux.codVend;
            rcargaBaj.importe = raux.importe;

            fwrite(&rcargaBaj,sizeof(struct ventasBajas),1,VentBajas);
        }
        
        //siempre poner el fread como ultima linea del while, como si fuese el return 0 del main
        fread( &raux, sizeof(struct Ventas), 1, Vent);
    }

    fclose(Vent);
    fclose(VentAltas);
    fclose(VentBajas);

    return 0; 
}