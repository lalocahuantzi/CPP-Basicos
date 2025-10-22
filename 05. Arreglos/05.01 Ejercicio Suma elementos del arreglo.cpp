/*Escribe un programa que defina un vector de números y calcule la suma de sus elementos*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5}; // Definimos el vector que vamos a utilizar
    int suma = 0; // Declaramos e inicializamos la variable para almacenar la suma 

    for(int i=0; i<5; i++){ // Usamos un bucle 'for' que opera hasta el número de elementos n-1
        suma += numeros[i]; // Vamos sumando cada elemento del arreglo usando su índice 'i'
    }

    cout<<"La suma de los elementos del vector es: "<<suma<<endl; // Imprimimos en pantalla

    getch();
    return 0;
}