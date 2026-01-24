/*Desarrollar una función que determina es una matriz es simétrica o no.

Una matriz es simétrica : A = A^t

- La matriz debe ser cuadrada -> Aij = Aji

|d  s  e|    |d  s  e|
|s  d  a| -> |s  d  a|
|e  a  d|    |e  a  d|

*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void comprobarSimetria(int m[][100],int,int); // Indicamos la existencia de la función comprobarSimetria()

int m[100][100],nfilas,ncol; // Se declaran variables globales fuera del main para que puedan ser usadas por distintas funciones

int main(){

    pedirDatos(); // Se solicitan los datos al usuario
    comprobarSimetria(m,nfilas,ncol); // Llamamos a la función para comprobar si la matriz es simétrica

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite el número de filas: ";
    cin>>nfilas; // Capturamos el número de filas ingresado por el usuario
    cout<<"Digite el número de columnas: ";
    cin>>ncol; // Capturamos el número de columnas ingresado por el usuario

    for(int i=0;i<nfilas;i++){
        for(int j=0;j<ncol;j++){
            cout<<"Digite un número ["<<i<<"]["<<j<<"]: ";
            cin>>m[i][j]; // Capturamos el valor ingresado por el usuario
        }
    }
}

void comprobarSimetria(int m[][100], int nfilas, int ncol){ // Función para comprobar la simetría de la matriz
    if(nfilas != ncol){ // Si no es cuadrada, no puede ser simétrica
        cout<<"La matriz NO es Simétrica"<<endl;
        return; // Terminamos la función aquí
    }

    char band = 'V'; // 'V' = asumimos que sí es simétrica hasta que se demuestre lo contrario

    for(int i = 0; i < nfilas; i++){ // Comparamos solo la parte superior de la matriz (j > i) para no repetir comparaciones
        for(int j = i + 1; j < ncol; j++){
            if(m[i][j] != m[j][i]){
                band = 'F';  // Ya encontramos un caso que rompe la simetría
                break;       // Salimos del for interno
            }
        }
        if(band == 'F'){
            break;           // Salimos del for externo también
        }
    }

    if(band == 'V'){
        cout<<"La matriz es Simétrica"<<endl;
    }
    else{
        cout<<"La matriz NO es Simétrica"<<endl;
    }
}