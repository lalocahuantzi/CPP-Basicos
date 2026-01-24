/*Transmisión de Arreglos

Ejemplo: Hallar el máximo elemento de un arreglo. */

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de Función
int hallarMax(int *, int); // Indicamos la existencia de la función hallarMax()

int main(){
    const int nElementos = 5; // Declaramos el número de elementos del arreglo
    int numeros[nElementos] = {3,5,2,8,1}; // Declaramos e inicializamos el arreglo de enteros

    cout<<"El mayor elemento del arreglo es: "<<hallarMax(numeros,nElementos)<<endl; // Se envía el arreglo (como puntero) y su tamaño

    getch();
    return 0;
}

int hallarMax(int *dirVec, int nElementos){ // Función para hallar el máximo valor dentro del arreglo de elementos
    int max = *dirVec; // Inicializamos el máximo con el primer elemento del arreglo

    for(int i=0;i<nElementos;i++){ // *(dirVec + i) accede al elemento i del arreglo
        if(*(dirVec+i)>max){
            max = *(dirVec+i);
        }
    }
    return max; // Devuelve el máximo valor encontrado en el arreglo
}