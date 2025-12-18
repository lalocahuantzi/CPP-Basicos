/*Realice un programa que lea una matriz de 3x3 y cree su matriz traspuesta.
La matriz traspuesta es aquella en la que la columna i era la fila i de la matriz original.

|1 2 3|     |1 4 7|
|4 5 6| --> |2 5 8|
|7 8 9|     |3 6 9|

*/

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){

    // Creamos una matriz que reserva espacio de memoria estático fijo (100*100)
    // En C++ moderno hay opciones más optmizadas -> vector<vector<int>> numeros(filas, vector<int>(columnas));
    int numeros[100][100], filas, columnas; 

    cout<<"Dígite el número de filas: "; cin>>filas; // El usuario define el número de filas
    cout<<"Dígite el número de columnas: "; cin>>columnas; // El usuario define el número de columnas

    // Almacenando elementos en la matriz
    for(int i=0; i<filas; i++){ // El primer bucle for nos ayuda a capturar iterando sobre las filas
        for(int j=0; j<columnas; j++){ // El segundo bucle for nos ayuda a capturar iterando sobre las columnas
            cout<<"Dígite un número ["<<i<<"]["<<j<<"] ->";
            cin>>numeros[i][j]; // Capturamos el número para el índice [i][j]
        }
    }

    cout<<"\n"; 

    // Imprimimos en pantalla la matriz traspuesta
    cout<<"\n+--------------------+\n";
    for(int i=0;i<columnas;i++){ // El primer bucle 'for' nos ayuda a imprimir iterando sobre las filas hasta el número de columnas-1
        cout<<"[";
        for(int j=0;j<filas;j++){ // El segundo bucle 'for' nos ayuda a imprimir iterando sobre las columnas hasta el número de filas-1
            cout<<setw(4)<<numeros[j][i]; // Intercambios los índices 'i' con 'j' para mostrar la matriz traspuesta
        }
        cout<<" ]\n"; // Un salto de línea cuando terminamos de iterar sobre cada fila para comenzar a imprimir la siguiente fila
    }
    cout<<"+--------------------+\n";

    getch();
    return 0;
}