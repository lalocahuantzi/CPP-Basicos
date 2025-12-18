/*Desarrollar un programa que determine si una matriz es simétrica o no. Una matriz es
simétrica si es cuadrada y si es igual a su matriz transpuesta.

|8 1 3|     |8 1 3|
|1 7 4| --> |1 7 4|
|3 4 9|     |3 4 9|

*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    // Creamos una matriz que reserva espacio de memoria estático fijo (100*100)
    // En C++ moderno hay opciones más optmizadas -> vector<vector<int>> numeros(filas, vector<int>(columnas));
    int numeros[100][100], filas, columnas;
    bool simetrica = false;

    cout<<"Dígite el número de filas: "; cin>>filas; // El usuario define el número de filas
    cout<<"Dígite el número de columnas: "; cin>>columnas; // El usuario define el número de columnas

    // Almacenando elementos en la matriz
    for(int i=0; i<filas; i++){ // El primer bucle for nos ayuda a capturar iterando sobre las filas
        for(int j=0; j<columnas; j++){ // El segundo bucle for nos ayuda a capturar iterando sobre las columnas
            cout<<"Dígite un número ["<<i<<"]["<<j<<"] -> ";
            cin>>numeros[i][j]; // Capturamos el número para el índice [i][j]
        }
    }

    if(filas==columnas){ // Evaluamos primero si la matriz es cuadrada (i.e. # de filas== # de columnas)
        simetrica = true; // Al ser una matriz cuadrada cumple el primer criterio y la bandera se cambia a verdadero
        // Procedemos a evaluar la simetría elemento por elemento
        for(int i=0; i<filas;i++){
            for(int j=0; j<columnas;j++){
                if(numeros[i][j] != numeros[j][i]){ // Evaluamos ahora si los valores X(i,j) son diferentes a X(j,i)
                    simetrica = false; // En caso de que sean diferentes la bandera se cambia a Falso
                    break; // Rompemos el primer bucle for (columnas)
                }
            }
            if(!simetrica){ // En caso de que la bandera se haya cambiado a Falso
                break; // Rompemos el segundo bucle for (filas) y conservamos la bandera como False
            }
        }
    }

    if(simetrica){ // Evaluamos la variable booleana o bandera que nos dice si la matriz es simétrica o no
        cout<<"\nLa matriz SÍ es simétrica :) "<<endl;
    }
    else{ // Evaluamos la variable booleana o bandera que nos dice si la matriz es simétrica o no
        cout<<"\nLa matriz NO es simétrica :( "<<endl;
    }

    getch();
    return 0;
}
