/*Recursividad

Factorial de un número 3! = 3*2!

    0! = 1
    
    factorial(n) = 1                    ,   si n=0
                   n*factorial(n-1)     ,   si n>0    
*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
int factorial(int); // Indicamos la existencia de la función factorial()

int main(){
    int num = 5; // Inicializamos la variable entera a la que le vamos a calcular el factorial
    cout<<num<<"! = "<<factorial(num)<<endl; // Llamos a la función factorial() e imprimimos en pantalla el resultado

    getch();
    return 0;
}

int factorial(int n){ // Función recursiva para calcular el factorial de un número (n!) -> Se llama a sí misma para resolver el problema
    if(n==0){ // Caso Base
        n=1;
    }
    else{ // Caso General
        n = n*factorial(n-1); // La función se llama a sí misma con n-1 hasta llegar al caso base
    }
    return n; // Devuelve el valor del factorial de n -> n! = n(n-1)(n-2)(n-3)...(2)(1)
}