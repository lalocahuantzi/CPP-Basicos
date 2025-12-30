/*Ordenamiento por el Método Burbuja:

Es un sencillo algoritmo de ordenamiento. Funciona revisando cada elemento de la lista que va a ser ordenada con el siguiente,
intercambiándolos de posición si están en el orden equivocado. Es necesario revisar varias veces toda la lista hasta que no se necesiten
más intercambios, lo cual significa que la lista está ordenada.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[] = {4,1,2,3,5}; // Declaramos el arreglo de números que vamos a ordenar con el Método Burbuja
    int n = sizeof(numeros) / sizeof(numeros[0]); // Obtenemos el tamaño real del arreglo
    int i,j,aux;

    // Algoritmo del Método Burbuja
    for(i=0;i<n-1;i++){  // Repetimos las iteraciones: en cada iteración el mayor "va quedando" al final
        for(j=0;j<n-1-i;j++){ // Comparamos vecinos y evitamos salirnos del arreglo (j+1 siempre existe)
            if(numeros[j] > numeros[j+1]){ // Si el número actual es mayor que el siguiente número se ejecuta este bloque
                // Este bloque condicional nos ayuda a intercambiar los valores de posición en caso de ser necesario
                aux = numeros[j]; // Nos apoyamos de una variable auxiliar para el intercambio de números
                numeros[j] = numeros[j+1];
                numeros[j+1] = aux;
            }
        }
    }

    cout<<"Orden Ascendente: ";
    // Imprimimos en pantalla el arreglo ya ordenado
    for(i=0;i<n;i++){
        cout<<numeros[i]<<" ";
    }
    cout<<"\n";

    getch();
    return 0;
}