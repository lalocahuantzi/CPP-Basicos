/*Hacer una matriz preguntando al usuario el número de filas y columnas, llenarla de
números aleatorios (0-9) y por último mostrarla en pantalla*/

#include <iostream>
#include <conio.h>
#include <time.h>
#include <iomanip>

using namespace std;

int main(){
    int numeros[100][100], filas, columnas, dato_aleatorio;

    cout<<"Digite el número de filas de la matriz: "; cin>>filas; // El usuario define el número de filas
    cout<<"Digite el número de columnas de la matriz: "; cin>>columnas; // El usuario define el número de columnas

    /* time(NULL) llama a 'time' y devuelve los segundos transcurridos desde el 01/01/1970 (epoch)
     srand toma el valor de time(NULL) convertido a unsigned int y lo usa como semilla (seed) del
    generador de número pseudoaleatorios clásico de C*/
    srand(time(NULL));

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){ // El segundo bucle for nos ayuda a capturar iterando sobre las columnas

            /*- rand() devuelve un número pseudoaleatorio en [0,RAND_MAX]
            - %10 toma ese valor y se queda con el residuo al dividir entre 10, queda en [0,9]
            - 'dato_aleatorio' queda uniformemente (aprox.) entre 0 y 9 */
            dato_aleatorio = rand() % (10); // Cada iteración llama a rand() y avanza en la lista de números pseudoaleatorios

            numeros[i][j] = dato_aleatorio; // Capturamos el nuevo número aleatorio por cada iteración en la matriz
            cout<<"Número aleatorio en el índice: ["<<i<<"]["<<j<<"] es igual a "<<dato_aleatorio<<endl;
        }
    }

    cout<<"\n"; 

    // Imprimimos en pantalla la matriz aleatoria
    cout<<"\n+--------------------+\n";
    for(int i=0;i<filas;i++){ // El primer bucle 'for' nos ayuda a imprimir iterando sobre las filas
        cout<<"[";    
        for(int j=0;j<columnas;j++){ // El segundo bucle 'for' nos ayuda a imprimir iterando sobre las columnas
            cout<<setw(4)<<numeros[i][j];
        }
        cout<<" ]\n"; // Un salto de línea cuando terminamos de iterar sobre cada fila para comenzar a imprimir la siguiente fila
    }
    cout<<"+--------------------+\n";

    getch();
    return 0;
}