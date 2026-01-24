/*Pedir al usuario N números, almacenarlos en un arregli dinámico posteriormente ordenar los números en orden ascendente y mostrarlos en pantalla.
NOTA: utilizar cualquier método de ordenamiento. 
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

//Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void ordenarArreglo(int *, int); // Indicamos la existencia de la función ordenarArreglo()
void mostrarArreglo(int *, int); // Indicamos la existencia de la función mostrarArreglo()

int nElementos, *elemento; // Declaramos la variable entera nElementos y un puntero a una variable de tipo int

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    ordenarArreglo(elemento,nElementos); // Llamamos a la función para ordenar los elementos del arreglo
    mostrarArreglo(elemento,nElementos); // Llamamos a la función para mostrar el arreglo ordenado

    delete[] elemento; // Liberar la memoria utilizada para el arreglo dinámico

    cout<<"\n\n";

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite el número elmentos del arreglo: ";
    cin>>nElementos; // Capturamos el número de elementos ingresado por el usuario

    // Crea el arreglo y se reserva dinámicamente memoria para numCalif enteros, calif apunta al primer elemento del arreglo dinámico
    elemento = new int[nElementos];

    for(int i=0;i<nElementos;i++){
        cout<<"Digite un número["<<i<<"]: ";
        cin>>*(elemento+i); // *(elemento+i) es equivalente a elemento[i]
    }
}

void ordenarArreglo(int *elemento, int nElementos){ // Función para ordenar el arreglo de elementos 
    int aux; // declaramos una variable auxiliar para el intercambio de valores

    // Ordenar el arreglo con el método Burbuja
    for(int i=0;i<nElementos;i++){
        for(int j=0;j<nElementos-1;j++){
            if(*(elemento+j) > *(elemento+j+1)){ // elemento[j] > elemento[j+1]
                aux = *(elemento+j);
                *(elemento+j) = *(elemento+j+1);
                *(elemento+j+1) = aux;        
            }
        } 
    }
}

void mostrarArreglo(int *elemento, int nElementos){ // Función para mostrar el arreglo de elementos ordenado
    cout<<"\n\nMostrando el arreglo ordenado: ";
    for(int i=0;i<nElementos;i++){
        cout<<*(elemento+i)<<" "; // Se imprime cada elemento del arreglo usando aritmética de punteros
    }
}