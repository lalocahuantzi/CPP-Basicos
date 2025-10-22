/*Escribe un programa que defina un vector de números y
calcule la multiplicación acumulada de sus elementos*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5}; // Definimos el vector que vamos a utilizar
    int producto = 1; // Declaramos e inicializamos la variable para almacenar la suma

    for(int i=0; i<5; i++){ // Usamos un bucle 'for' que opera hasta el número de elementos-1
        producto *= numeros[i]; // Vamos multiplicando cada elemento del arreglo usando su índice 'i'
    }

    cout<<"La multiplicación de los elementos del vector es: "<<producto<<endl; // Imprimimos en pantalla

    getch();
    return 0;
}