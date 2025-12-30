/*Ordenamiento por el Método de Selección:

Es un algoritmo de ordenamiento sencillo que funciona seleccionando, en cada iteración, el elemento más pequeño de la parte
no ordenada del arreglo y colocándolo en su posición correcta. El arreglo se divide conceptualmente en dos partes:
una ya ordenada al inicio y otra sin ordenar. En cada iteración, se busca el valor mínimo de la parte no ordenada y se intercambia
con el primer elemento de dicha sección. Este proceso se repite hasta que todo el arreglo queda ordenado.
*/
#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[] = {3,2,1,5,4}; // Declaramos el arreglo de números que vamos a ordenar con el Método de Selección
    int n = sizeof(numeros) / sizeof(numeros[0]); // Obtenemos el tamaño real del arreglo
    int i,j,aux,min; // Declaramos las variables auxiliares del algoritmo

    for(i=0;i<n-1;i++){  // En cada iteración se coloca el menor elemento en su posición correcta
        min = i; // Suponemos que el elemento actual es el menor
        for(j=i+1;j<n;j++){
            if(numeros[j] < numeros[min]){
                min = j; // Actualizamos la posición del nuevo elemento mínimo
            }
        }
        // Intercambiamos el elemento actual con el mínimo encontrado
        aux = numeros[i];
        numeros[i] = numeros[min];
        numeros[min] = aux;
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