/*Realice una función recursiva que sume los primeros n enteros positivos.
Nota: para plantear la función recursiva tenga en cuenta que la suma puede expresarse
mediante la siguiente recurrencia:

    suma(n) = 1             , si n=1
            = n+suma(n-1)   , si n>1
*/

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de Función
int sumar(int); // Indicamos la existencia de la función sumar()

int main(){
    int nElementos; // Declaramos la variable entera para almacenar el número de elementos

    do{
        cout<<"Digite el número de elementos: "; // Se solicitan los datos al usuario
        cin>>nElementos; // Capturamos el número de elementos ingresado por el usuario
    }while(nElementos <= 0); // Debe ser un valor mayor o igual a 0

    cout<<"\nLa suma es: "<<sumar(nElementos)<<endl;

    getch();
    return 0;
}

int sumar(int n){ // Función recursiva para calcular la suma de n elementos -> Se llama a sí misma para resolver el problema
    int suma = 0;

    if(n==1){ // Caso Base
        suma = 1;
    }
    else{ // Caso General
        suma = n+sumar(n-1); // La función se llama a sí misma con n-1 hasta llegar al caso base
    }
    return suma; // Devuelve el valor de la suma de los n enteros
}