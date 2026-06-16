/*Genere el siguiente tipo de dato:

Código de Producto: 9999
Cantidad de unidades en depósito: 99999
Tipo de producto: ‘H’, ‘N’ ó ‘P’ (Hamburguesas, Nuggets o Pan)
Vencimiento: MMAAAA
Y responda con la generación en código y defina una variable.*/

#include <iostream> 
using namespace std; 

//creo el registro AFUERA DEL MAIN - PASO 1
struct Producto{
    int codProd;
    int cantDepos;
    char tipoProd;
    int vencimiento;
};


int main (){
    //defino la variable 
    Producto X;
    //cargo campo a campo
        cout << "ingrese el codigo del producto:"<< endl;
        cin>> X.codProd;

        cout << "Ingrese la cantidad que hay de ese producto en deposito:"<< endl;
        cin >> X.cantDepos;

        cout << "Ingrese el tipo de producto indicando su primera letra ('H', 'P' o 'N')"<< endl;
        cin >> X.tipoProd;

        //aca tengo que pensar que, el usuario probablemente ingrese otra letra, entonces tengo que hacerle entender a la maquina que hasta que no ingrese alguna de las letras permitidas, no puede seguir con el programa

        while ( X.tipoProd != 'H' && X.tipoProd != 'P' && X.tipoProd != 'N'){
            //traducido: mientras que, el pelotudo del usuario ingrese algo DISTINTO (!=) al primer valor permitido, y(&&) distinto al segundo valor permitido, y(&&) distinto al tercer valor permitido, le vas a tener que decir: ingresa un valor permitido idiota..
            cout << "ingrese un nombre de producto valido ('H', 'P' o 'N'): " <<endl;
            // esto se va a iterar infinitamente hasta q ponga uno válido
            cin >> X.tipoProd;
        };

        cout << "Ingrese la fecha de vencimiento del producto en el formato MMAAAA" <<endl;
        cin>> X.vencimiento;

        // esto se hace para que la fecha quede visiblemente legible, sino queda todo junto y feo
        int mes, anio;

        mes= X.vencimiento/10000;
        anio= X.vencimiento%10000;

        //muestro lo ingresado al usuario por pantalla

        cout << "El codigo del producto es: "<< X.codProd <<endl;
        cout << "La cantidad que hay de ese producto en deposito es: "<< X.cantDepos <<endl;
        cout << "El tipo de producto es: "<< X.tipoProd <<endl;
        cout << "La fecha de vencimiento del producto es: "<< mes <<" / " << anio <<endl;

        
    return 0;
}