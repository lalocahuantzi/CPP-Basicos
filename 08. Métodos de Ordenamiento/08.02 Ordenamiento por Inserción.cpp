/*Ordenamiento por el Método de Inserción:

Es un algoritmo de ordenamiento sencillo que construye el arreglo ordenado de manera progresiva. Comienza considerando
que el primer elemento ya está ordenado y, a partir de ahí, toma cada nuevo elemento para insertarlo en la posición correcta
dentro de la parte ordenada del arreglo. Para lograrlo, los elementos mayores se desplazan hacia la derecha hasta dejar espacio al
valor actual. Este proceso se repite hasta que todos los elementos han sido insertados en su lugar, obteniendo finalmente un arreglo ordenado.
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int numeros[] = {4,2,3,1,5}; // Declaramos el arreglo de números que vamos a ordenar con el Método de Inserción
    int n = sizeof(numeros) / sizeof(numeros[0]); // Obtenemos el tamaño real del arreglo
    int i,pos,aux; // Declaramos las variables auxiliares del algoritmo

    for(i=1;i<n;i++){ // Comenzamos desde el segundo elemento (el primero ya se considera ordenado)
        pos = i; // Posición actual del elemento a insertar
        aux = numeros[i]; // Guardamos el valor que vamos a insertar en la parte ordenada

        // Desplazamos los elementos mayores hacía la derecha
        while((pos>0) && (numeros[pos-1]>aux)){
            numeros[pos] = numeros[pos-1];
            pos--; // Nos movemos hacía la izquierda en el arreglo para seguir comparando
        }
        numeros[pos] = aux; // Insertamos el valor en la posición correcta
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