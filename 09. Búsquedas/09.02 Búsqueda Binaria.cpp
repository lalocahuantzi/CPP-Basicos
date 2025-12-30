/*Búsqueda Binaria

Este programa realiza una búsqueda binaria dentro de un arreglo de enteros.
IMPORTANTE: para poder aplicar búsqueda binaria, el arreglo debe estar ORDENADO de forma ascendente.
El algoritmo divide el arreglo en mitades y decide en qué parte continuar buscando hasta encontrar el dato
o hasta que el rango de búsqueda sea inválido.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5}; // Declaramos el arreglo de números dónde vamos a relizar la búsqueda binaria (ORDENADO)
    int n = sizeof(numeros) / sizeof(numeros[0]); // Obtenemos el tamaño real del arreglo

    int inf=0,sup=n-1; // Declaramos los límites inferior y superior del rango de la búsqueda
    int mitad; // Declaramos la posición media del rango de la búsqueda
    int dato=4; // Elemento que se desea buscar dentro del arreglo
    char band = 'F'; // Bandera booleana para indicar si el dato fue encontrado ('V') o no ('F')

    // Algoritmo de la Búsqueda Binaria

    while((band == 'F') && (inf <= sup)){
        mitad = (inf+sup)/2; // Calculamos la mitad del rango actual

        if(numeros[mitad] == dato){ // Comparamos el elemento central con el dato buscado y si son iguales encontramos el dato
            band = 'V'; // En caso de que el dato buscado se encuentre en el arreglo la bandera booleana cambia
            break;
        }
        else if(numeros[mitad] > dato){ // Si el elemento central es mayor, el dato sólo puede estar en la mitad izquierda
            sup = mitad - 1;
        }
        else{ // Si el elemento central es menor, el dato sólo puede estar en la mitad derecha
            inf = mitad + 1;
        }
    }

    // Imprimimos en pantalla el resultado de la búsqueda
    if(band == 'V'){
        cout<<"El número ha sido encontrado en la posición "<<mitad+1<<" del arreglo, en C++ sería un índice de ["<<mitad<<"]"<<endl;
    }
    else{
        cout<<"El número NO ha sido encontrado"<<endl;
    }

    getch();
    return 0;
}