/*Realice un programa que calcule la descomposición en factores primos de un número entero.

Por ejemplo: 20 = 2*2*5 */

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n; // Declaramos la única variable que vamos a utilizar

    cout<<"Digite el número que se va a descomponer en factores primos: "; cin>>n;

    cout<<n<<" = ";
    bool primero = true; // Esta instrucción nos ayuda a no imprimir en pantalla el primer '*'

    for(int i=2; i<=n; i++){ // Comenzamos evaluando el factor 2
        while(n%i==0){ // Mientras el residuo del factor evaluado sea 0, se sigue dividiendo y acumulando factores primos
            if(!primero){ // Nos ayuda a que el primer '*' no sea impreso en pantalla hasta tener el primer elemento evaluado
                cout<<"*";
            }
            cout<<i; // Imprimimos el factor primo si el residuo de dividir entre ese factor es igual a 0
        n /= i; // Debido a que el residuo dividido entre 'i' fue 0, se vuelve a dividir entre el mismo factor

        /* Ejemplo: 20/2=10r0 -> 10/2=5r0 -> 5/2=2r1, es decir, cuando n=5 dejamos de evaluar el factor 2 y pasamos a los siguientes
         En este caso ni 5%3 ni 5%4 son iguales a 0, por lo tanto el siguiente factor que activa el 'while' es i=5 y una vez que se
         imprime el factor 5, nos queda 5/5=1 y el módulo 1%i siempre será distinto de 0, por lo tanto ya no hay más factores primos*/

        primero = false; // Se cambia en la primera iteración y a partir de aquí se imprimen los '*'
        }
    }
    cout<<"\n";

    getch();
    return 0;
}