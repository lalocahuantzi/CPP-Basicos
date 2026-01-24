/*Matrices Dinámicas

Ejemplo: Rellenar una matriz de NxM y mostrar su contenido

**puntero_matriz -> *puntero_fila -> [int] [int] [int]
                    *puntero_fila -> [int] [int] [int]
                    *puntero_fila -> [int] [int] [int]

1 2 3   1   -> 2 3       
4 5 6   4   -> 5 6
7 8 9   7   -> 8 9

*/

#include <iostream>
#include <conio.h>
#include <stdlib.h> //new y delete
using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void mostrarMatriz(int **,int,int); // Indicamos la existencia de la función mostrarMatriz()

int **puntero_matriz; // Declaramos un puntero doble que manejará la matriz dinámica 
int nFilas, nCol; // Declaramos las variables enteras para el número de filas y columnas de la matriz

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    mostrarMatriz(puntero_matriz,nFilas,nCol);

    // Liberar la memoria que hemos utilizado    
    for(int i=0;i<nFilas;i++){
        delete[] puntero_matriz[i]; // Primero se liberan las columnas de cada fila
    }
    
    delete[] puntero_matriz; // Luego se liberan los punteros de las filas

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite el número de Filas: ";
    cin>>nFilas; // Capturamos el número de filas ingresado por el usuario
    cout<<"Digite el número de Columnas: ";
    cin>>nCol; // Capturamos el número de columnas ingresado por el usuario

    // Reservar memoria para la matriz dinámica
    puntero_matriz = new int*[nFilas]; // Reservando memoria para un arreglo de punteros (filas)
    for(int i=0;i<nFilas;i++){
        puntero_matriz[i] = new int[nCol]; // Cada fila apunta a un arreglo de enteros (columnas)
    }

    cout<<"\nDigitando elementos de la matriz: ";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digite un número["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz+i)+j); // *(*(puntero_matriz+i)+j) es equivalente a puntero_matriz[i][j]
        }
    }
}

void mostrarMatriz(int **puntero_matriz,int nFilas,int nCol){ // Función que imprime en pantalla la matriz usando punteros
    cout<<"\n\nImprimiendo matriz:\n";
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<*(*(puntero_matriz+i)+j)<<" "; // Accedemos al elemento [i][j] mediante aritmética de punteros
        }
        cout<<"\n";
    }
}





