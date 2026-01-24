/*Realice un programa que calcule la suma de dos matrices dinámicas.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void sumarMatrices(int **,int **,int,int); // Indicamos la existencia de la función sumarMatrices()
void mostrarMatrizResultado(int **,int,int); // Indicamos la existencia de la función mostrarMatrizResultado()

int **puntero_matriz1, **puntero_matriz2; // Declaramos dos punteros doble que manejarán las matrices dinámicas
int nFilas, nCol; // Declaramos las variables enteras para el número de filas y columnas de la matriz

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    // Se suman las dos matrices y el resultado se almacena directamente en la primera matriz
    sumarMatrices(puntero_matriz1,puntero_matriz2,nFilas,nCol); 
    mostrarMatrizResultado(puntero_matriz1,nFilas,nCol); // Se muestra la matriz resultado

    // Liberar la memoria utilizada en matriz2
    for(int i=0;i<nFilas;i++){ // Primero se liberan las columnas de cada fila
        delete[] puntero_matriz2[i];
    }
    delete[] puntero_matriz2; // Luego se liberan los punteros de las filas

    
    // Liberar la memoria utilizada en matriz1
    for(int i=0;i<nFilas;i++){ // Primero se liberan las columnas de cada fila
        delete[] puntero_matriz1[i];
    }
    delete[] puntero_matriz1; // Luego se liberan los punteros de las filas

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite el número de Filas: ";
    cin>>nFilas; // Capturamos el número de filas ingresado por el usuario
    cout<<"Digite el número de Columnas: ";
    cin>>nCol; // Capturamos el número de columnas ingresado por el usuario

    // Reservar memoria para la primera matriz dinámica
    puntero_matriz1 = new int*[nFilas]; // Reservando memoria para un arreglo de punteros (filas)
    for(int i=0;i<nFilas;i++){
        puntero_matriz1[i] = new int[nCol]; // Cada fila apunta a un arreglo de enteros (columnas)
    }

    cout<<"\nDigite los elementos de la primera matriz: \n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digite un número["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz1+i)+j); // *(*(puntero_matriz1+i)+j) es equivalente a puntero_matriz1[i][j]
        }
    }

    // Reservar memoria para la segunda matriz dinámica
    puntero_matriz2 = new int*[nFilas]; // Reservando memoria para un arreglo de punteros (filas)
    for(int i=0;i<nFilas;i++){
        puntero_matriz2[i] = new int[nCol]; // Cada fila apunta a un arreglo de enteros (columnas)
    }

    cout<<"\nDigite los elementos de la segunda matriz: \n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digite un número["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz2+i)+j); // *(*(puntero_matriz2+i)+j) es equivalente a puntero_matriz2[i][j]
        }
    }
}

void sumarMatrices(int **puntero_matriz1, int **puntero_matriz2, int nFilas, int nCol){ // Función que suma dos matrices elemento a elemento
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            *(*(puntero_matriz1+i)+j) += *(*(puntero_matriz2+i)+j); // Cada elemento de la primera matriz se suma con el correspondiente de la segunda matriz
        }
    }  
}

void mostrarMatrizResultado(int **puntero_matriz1,int nFilas, int nCol){ // Función que muestra la matriz resultado después de la suma
    // NO existe una tercera matriz resultado, la suma se acumula directamente en puntero_matriz1
    cout<<"La suma de las 2 matrices es: \n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<*(*(puntero_matriz1+i)+j)<<" "; // puntero_matriz[i][j]
        }
        cout<<"\n";
    }
}