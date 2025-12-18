/*Realice un programa que calcule el producto de dos matrices cuadradas */

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){

    // Creamos una matriz que reserva espacio de memoria estático fijo (100*100)
    // En C++ moderno hay opciones más optmizadas -> vector<vector<int>> numeros(filas, vector<int>(columnas));
    int matriz_1[100][100], matriz_2[100][100], matriz_3[100][100], n_size; 

    cout<<"Dígite el número de filas y columnas para ambas matrices: "; cin>>n_size; // El usuario define el número de filas


    // Almacenando elementos en la primera matriz
    for(int i=0; i<n_size; i++){ // El primer bucle for nos ayuda a capturar iterando sobre las filas
        for(int j=0; j<n_size; j++){ // El segundo bucle for nos ayuda a capturar iterando sobre las columnas
            cout<<"Dígite un número ["<<i<<"]["<<j<<"] -> ";
            cin>>matriz_1[i][j]; // Capturamos el número para el índice [i][j]
        }
    }

    // Almacenando elementos en la segunda matriz
    for(int i=0; i<n_size; i++){ // El primer bucle for nos ayuda a capturar iterando sobre las filas
        for(int j=0; j<n_size; j++){ // El segundo bucle for nos ayuda a capturar iterando sobre las columnas
            cout<<"Dígite un número ["<<i<<"]["<<j<<"] -> ";
            cin>>matriz_2[i][j]; // Capturamos el número para el índice [i][j]
        }
    }

    // Producto de matrices
    for (int i=0; i<n_size; i++) {
        for (int j=0; j<n_size; j++) {
            // Los elementos de matriz_3 se obtienen multiplicando los elementos de la fila i de A por los elementos de la columna j de B
            // Sumamos esos productos resultantes C(i,j) = A(i,1)*B(1,j)+A(i,2)*B(2,j)+...+A(i,n)*B(n,j)
            matriz_3[i][j] = 0; // Inicializamos en 0
            for (int k=0; k<n_size; k++) {
                matriz_3[i][j] += matriz_1[i][k] * matriz_2[k][j];   
            }
        }
    }

    cout<<"\n"; 

    // Imprimimos el producto de matrices en pantalla
    cout<<"\n+--------------------+\n";
    for(int i=0;i<n_size;i++){ // El primer bucle 'for' nos ayuda a imprimir iterando sobre las filas
        cout<<"[";
        for(int j=0;j<n_size;j++){ // El segundo bucle 'for' nos ayuda a imprimir iterando sobre las columnas
            cout<<setw(4)<<matriz_3[i][j]; 
        }
        cout<<" ]\n"; // Un salto de línea cuando terminamos de iterar sobre cada fila para comenzar a imprimir la siguiente fila
    }
    cout<<"+--------------------+\n";

    getch();
    return 0;
}