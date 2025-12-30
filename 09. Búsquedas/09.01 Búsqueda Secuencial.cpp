/*Búsqueda Secuencial

Este programa realiza una búsqueda secuencial dentro de un arreglo de enteros.
Se recorre el arreglo elemento por elemento hasta encontrar el dato buscado o hasta terminar el recorrido.
*/

//a[5] = {3,4,2,1,5}; dato = 4;

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int a[] = {3,4,2,1,5}; // Declaramos el arreglo de números dónde vamos a relizar la búsqueda secuencial
    int i=0, dato=4; // Contador para recorrer el arreglo y elemento que se desea buscar dentro del arreglo
    int n = sizeof(a) / sizeof(a[0]); // Obtenemos el tamaño real del arreglo
    char band = 'F'; // Bandera booleana para indicar si el dato fue encontrado ('V') o no ('F')

    // Búsqueda Secuencial
    while((band == 'F') && (i<n)){ // Se compara el elemento actual del arreglo con el dato buscado
        if(a[i] == dato){
            band = 'V'; // En caso de que el dato buscado se encuentre en el arreglo la bandera booleana cambia
        }
        i++; // En caso de que no haya sido encontrado el dato aún se sigue iterando sobre los elementos restantes del arreglo
    }

    // Imprimimos en pantalla el resultado de la búsqueda
    if(band == 'F'){
        cout<<"El número a buscar NO existe en el arreglo"<<endl;
    }
    else if(band == 'V'){
        cout<<"El número ha sido encontrado en la posición "<<i<<" del arreglo, en C++ sería un índice de ["<<i-1<<"]"<<endl;
    }

    getch();
    return 0;
}