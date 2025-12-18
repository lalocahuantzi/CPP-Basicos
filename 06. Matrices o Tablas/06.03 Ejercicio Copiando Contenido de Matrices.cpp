/* Hacer una matriz de tipo entera de 2*2, llenarla de números y luego
copiar todo su contenido hacía otra matriz. */

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    int numeros[2][2] = {{1,2},{3,4}}; // Creamos una matriz 'dummy'  de 2x2 como ejemplo del ejercicio
    int matriz2[2][2]; // Creamos una matriz de 2x2 vacía para copiar ahí el contenido de la primera matriz creada

    // Pasando el contenido hacía matriz2
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            matriz2[i][j] = numeros[i][j]; // Copiamos elemento por elemento de una matriz a otra
        }
    }

    // Imprimimos en pantalla matriz2
    cout<<"\n+--------------------+\n";
    for(int i=0;i<2;i++){
        cout<<"[";
        for(int j=0;j<2;j++){
            cout<<setw(4)<<matriz2[i][j];
        }
        cout<<" ]\n";
    }
    cout<<"+--------------------+\n";

    getch();
    return 0;
}