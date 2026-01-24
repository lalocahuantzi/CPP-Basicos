/*Transmisión de Direcciones

Ejemplo: Intercambiar el valor de 2 variables utilizando direcciones de memoria.

*/

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de Función
void intercambio(float *, float *); // Indicamos la existencia de la función intercambio()

int main(){
    float num1 = 20.8, num2 = 6.78; // Declaramos dos variables de tipo flotante y las inicializamos

    cout<<"Primer Número: "<<num1<<endl; // Imprimimos en pantalla el primer valor original
    cout<<"Segundo Número: "<<num2<<endl; // Imprimimos en pantalla el segundo valor original

    intercambio(&num1,&num2); // Llamada a la función intercambio, enviando las direcciones de memoria de num1 y num2

    cout<<"\n\nDespués del intercambio: \n\n"; // Imprimimos en pantalla los valores después del intercambio
    cout<<"El nuevo valor de num1: "<<num1<<endl; 
    cout<<"El nuevo valor de num2: "<<num2<<endl;

    cout<<"\n";
    
    getch();
    return 0;
}

void intercambio(float *dirNm1, float *dirNm2){ // Función para realizar el intercambio de valores (Usando punteros)
// *dirNm1 y dirNm2 almacenan las direcciones de num1 y num2

    float aux; // Variable auxiliar para realizar el intercambio

    // Intercambiar los valores de las variables usando las direcciones de memoria
    aux = *dirNm1;
    *dirNm1 = *dirNm2;
    *dirNm2 = aux;
}