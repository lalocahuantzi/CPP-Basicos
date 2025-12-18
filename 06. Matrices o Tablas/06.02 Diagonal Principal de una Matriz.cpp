/*Realiza un programa que defina una matriz de 3x3 y escriba un ciclo para que
muestre la diagonal principal de la matriz*/

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
            cout<<"Dígite un número ["<<i<<"]["<<j<<"] -> ";
            cin>>numeros[i][j]; // Capturamos el número para el índice [i][j]
        }
    }

    cout<<"\n";

    // Imprimimos la diagonal principal de la matriz en pantalla
    cout<<"\n+--------------------+\n";
    for(int i=0;i<filas;i++){ // El primer bucle 'for' nos ayuda a imprimir iterando sobre las filas
        cout<<"[";
        for(int j=0;j<columnas;j++){ // El segundo bucle 'for' nos ayuda a imprimir iterando sobre las columnas
            if(i == j){ // Para imprimir la diagonal principal sólo nos enfocamos en los elementos con el mismo índice (i=j)
                cout<<setw(4)<<numeros[i][j];
            }
            else{
                cout<<setw(4)<<"*"; // Para enfocarnos sólo en la diagonal principal el resto de elementos se reemplazan con '*'
            }
        }
        cout<<" ]\n"; // Un salto de línea cuando terminamos de iterar sobre cada fila para comenzar a imprimir la siguiente fila
    }
    cout<<"+--------------------+\n";

    getch();
    return 0;
}