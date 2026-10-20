/*Definir dos plantillas de funciones dentro de un archivo de cabecera llamado "Ordenamiento.h"
que puedan ordenar tanto ascendentemente como descendentemente un arreglo de N elementos,
recuerde que puede utilizar la plantilla intercambiar del ejercicio anterior.
*/

#include <iostream>
#include "Ordenamiento.h" // Incluimos la definición de las funciones de ordenamiento
using namespace std;

template <typename T> // Declaramos una plantilla de función que utiliza un tipo de dato genérico
void pedirDatos(T *arreglo, int n){ // Definimos la función pedirDatos() para capturar los elementos del arreglo
    for(int i=0;i<n;i++){ // Recorremos el arreglo para capturar sus elementos
        cout<<"Digite un elemento["<<i<<"]: ";
        cin>>arreglo[i]; // Capturamos el elemento en la posición i del arreglo
    }
}

template <typename T> // Declaramos una plantilla de función que utiliza un tipo de dato genérico
void mostrarArreglo(T *arreglo, int n){ // Definimos la función mostrarArreglo() para mostrar los elementos del arreglo
    for(int i=0;i<n;i++){ // Recorremos el arreglo para mostrar sus elementos
        cout<<"Elemento["<<i<<"]: "<<arreglo[i]<<endl; // Mostramos el elemento en la posición i del arreglo
    }
}

int main(int argc, char** argv){
    int nElementos; // Declaramos la variable de tipo entero para almacenar la cantidad de elementos del arreglo

    cout<<"Digite la cantidad de elementos del arreglo: ";
    cin>>nElementos; // Capturamos la cantidad de elementos del arreglo

    int *elementos = new int[nElementos]; // Creamos dinámicamente un arreglo de números enteros
    // float *elementos = new float[nElementos]; // Creamos dinámicamente un arreglo de números reales
    // char *elementos = new char[nElementos]; // Creamos dinámicamente un arreglo de caracteres

    cout<<"\nPidiendo los elementos del arreglo: "<<endl;
    pedirDatos(elementos,nElementos); // Llamamos a la función pedirDatos() para capturar los elementos del arreglo

    // Ordenamos los elementos del arreglo de manera Ascendente
    ordenarAscendente(elementos, nElementos); // Llamamos a la función ordenarAscendente() para ordenar los elementos de menor a mayor
    cout<<"\nArreglo ordenado Ascendentemente ->"<<endl;
    mostrarArreglo(elementos,nElementos); // Llamamos a la función mostrarArreglo() para mostrar los elementos del arreglo

    // Ordenamos los elementos del arreglo de manera Descendente
    ordenarDescendente(elementos, nElementos); // Llamamos a la función ordenarDescendente() para ordenar los elementos de mayor a menor
    cout<<"\nArreglo ordenado Descendentemente ->"<<endl;
    mostrarArreglo(elementos,nElementos); // Llamamos a la función mostrarArreglo() para mostrar los elementos del arreglo

    delete[] elementos; // Liberamos la memoria del arreglo dinámico

    return 0;
}