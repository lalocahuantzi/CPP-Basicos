/*Realice un programa que lea una matriz dinámica de NxM y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.

|1 2 3|     |1 4 7|         
|4 5 6| --> |2 5 8|
|7 8 9|     |3 6 9|

*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void mostrarMatriz(int **, int,int); // Indicamos la existencia de la función mostrarMatriz()

int **puntero_matriz,nFilas,nCol;

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    mostrarMatriz(puntero_matriz,nFilas,nCol); // Se muestran la matriz original y la transpuesta 

    // Librerando memoria de la matriz
    for(int i=0;i<nFilas;i++){ // Primero se liberan las columnas de cada fila
        delete[] puntero_matriz[i];
    }
    delete[] puntero_matriz; // Luego se liberan los punteros de las filas

    cout<<"\n";

    getch();
    return 0;
}


void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite el número de filas: ";
    cin>>nFilas; // Capturamos el número de filas ingresado por el usuario
    cout<<"Digite el número de columnas: ";
    cin>>nCol; // Capturamos el número de columnas ingresado por el usuario

    // Reservar memoria para la matriz
    puntero_matriz = new int*[nFilas]; // Reservando memoria para las filas
    for(int i=0;i<nFilas;i++){
        puntero_matriz[i] = new int[nCol]; // Reservando memoria para las columnas
    }

    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<"Digite un número["<<i<<"]["<<j<<"]: ";
            cin>>*(*(puntero_matriz+i)+j); // puntero_matriz[i][j]
        }
    }
}

void mostrarMatriz(int **puntero_matriz, int nFilas, int nCol){ // Función que muestra la matriz original y la transpuesta 
    cout<<"\nImprimiendo la matriz original: \n"; // La matriz original tiene dimeniones nFilas x nCol
    for(int i=0;i<nFilas;i++){
        for(int j=0;j<nCol;j++){
            cout<<*(*(puntero_matriz+i)+j)<<" ";
        }
        cout<<"\n";
    }

    cout<<"\nImprimiendo la matriz transpuesta: \n"; // La matriz transpuesta tiene dimensiones nCol x nFilas
    for(int i=0;i<nCol;i++){
        for(int j=0;j<nFilas;j++){
            cout<<*(*(puntero_matriz+j)+i)<<" "; // Se intercambian índices: [j][i]
        }
        cout<<"\n";
    }   
}