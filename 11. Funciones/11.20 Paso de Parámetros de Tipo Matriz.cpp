/*Paso de parámetros de tipo matriz*/

// Elevar al cuadrado todos los elementos de una matriz

#include <iostream>
#include <conio.h>

using namespace std;

const int NCOL = 3; // Declaramos la constante global del número de columnas

// Prototipo de Función
void mostrarMatriz(int m[][3],int,int); // Indicamos la existencia de la función mostrarMatriz()

int main(){
    const int NFILAS = 2;
    int m[NFILAS][NCOL] = {{1,2,3},{4,5,6}}; // Declaramos la matriz

    mostrarMatriz(m,NFILAS,NCOL); // Llamamos a la función para imprimir en pantalla la matriz

    getch();
    return 0;
}

void mostrarMatriz(int m[][NCOL], int nfilas, int ncol){ // Función para imprimir en pantalla la matriz 
    cout<<"Mostrando matriz original:\n";
    for(int i=0;i<nfilas;i++){
        for(int j=0;j<ncol;j++){
            cout<<m[i][j]<<" ";
        }
        cout<<"\n";
    }
}