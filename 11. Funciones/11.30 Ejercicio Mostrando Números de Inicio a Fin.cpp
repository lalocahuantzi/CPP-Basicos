/*Escriba una función escribeNumeros(int ini, int fin) que devuelva en la salida estándar los números del ini al fin.
Escriba una versión que escriba los números en orden ascendente:

    escribeNumeros(ini,fin) = ini                           , si ini=fin
                            = escribeNumeros(ini,fin-1)     , si fin>ini
*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
int escribeNumeros(int,int); // Indicamos la existencia de la función escribeNumeros()

int main(){
    int ini,fin; // Declaramos las variables enteras para almacenar el inicio y el fin de la lista

    cout<<"Digite un inicio: "; cin>>ini; // Capturamos el inicio ingresado por el usuario
    cout<<"Digite un final: "; cin>>fin; // Capturamos el fin ingresado por el usuario

    for(int i=ini; i<=fin; i++){ // El ciclo controla la impresión; la función sólo devuelve el número correspondiente
        cout<<escribeNumeros(i,fin)<<" ";
    }

    cout<<"\n";

    getch();
    return 0;
}

int escribeNumeros(int ini,int fin){ // Función recursiva para escribir una lista de números -> Se llama a sí misma para resolver el problema
    if(ini == fin){ // Caso Base: Cuando inicio y fin son iguales, se devuelve ese valor
        return ini;
    }
    else{ // Se reduce el valor de fin en cada llamada hasta llegar al caso base
        return escribeNumeros(ini,fin-1);
    }
}