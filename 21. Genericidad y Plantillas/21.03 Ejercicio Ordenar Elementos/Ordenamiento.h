#ifndef ORDENAMIENTO_H // Verificamos si ORDENAMIENTO_H no ha sido definido previamente
#define ORDENAMIENTO_H // Definimos ORDENAMIENTO_H para evitar incluir el archivo varias veces

#include <iostream>
#include "Intercambio.h" // Incluimos la definición de la función intercambiar()
using namespace std;

template <typename T> // Declaramos una plantilla de función que utiliza un tipo de dato genérico
void ordenarAscendente(T *arreglo, int n){ // Definimos la función ordenarAscendente() para ordenar los elementos del arreglo de menor a mayor
    for(int i=0;i<n;i++){ // Recorremos el arreglo para realizar las pasadas del ordenamiento
        for(int j=0;j<(n-1);j++){ // Recorremos los elementos consecutivos del arreglo para compararlos
            if(arreglo[j] > arreglo[j+1]){ // Verificamos si el elemento actual es mayor que el siguiente
                intercambiar(arreglo[j],arreglo[j+1]); // Llamamos a la función intercambiar() para intercambiar los valores de ambos elementos
            }
        }
    }
}

template <typename T> // Declaramos una plantilla de función que utiliza un tipo de dato genérico
void ordenarDescendente(T *arreglo, int n){ // Definimos la función ordenarDescendente() para ordenar los elementos del arreglo de mayor a menor
    for(int i=0;i<n;i++){ // Recorremos el arreglo para realizar las pasadas del ordenamiento
        for(int j=0;j<(n-1);j++){ // Recorremos los elementos consecutivos del arreglo para compararlos
            if(arreglo[j] < arreglo[j+1]){ // Verificamos si el elemento actual es menor que el siguiente
                intercambiar(arreglo[j],arreglo[j+1]); // Llamamos a la función intercambiar() para intercambiar los valores de ambos elementos
            }
        }
    }
}

#endif // Finalizamos la protección contra inclusiones múltiples