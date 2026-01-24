/*Realice una función que dada una matriz y un número de fila de la matriz devuelva el menor de los elementos
almacenados en dicha fila.*/

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
int comprobarMenorElemento(int m[][100],int,int); // Indicamos la existencia de la función comprobarMenorElemento()

int m[100][100], nfilas, ncol, menor_final; // Se declaran variables globales fuera del main para que puedan ser usadas por distintas funciones

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    menor_final = comprobarMenorElemento(m,nfilas,ncol); // Llamamos a la función que comprueba el menor elemento de 'x' fila de la matriz
    cout<<"El menor elemento es: "<<menor_final; // Imprimimos en pantalla el resultado

    cout<<"\n";

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

// Función para obtener el menor elemento de la fila de la matriz ingresada por el usuario
int comprobarMenorElemento(int m[][100], int nfilas, int ncol){
    int fila; // Declaramos la variable para almacenar la fila dónde se hará la búsqueda

    cout<<"\nDigite un número de fila para comprobar menor elemento: ";
    cin>>fila; // Capturamos el valor ingresado por el usuario

    if(fila < 1 || fila > nfilas){ // Validación básica: la fila debe estar dentro del rango
        cout<<"Fila inválida"<<endl;
        return 0; // Valor por defecto para evitar errores
    }

    int menor = m[fila-1][0]; // Se inicializa con el primer elemento de la fila seleccionada

    for(int j = 1; j < ncol; j++){ // Solo recorremos las columnas de ESA fila
        if(m[fila-1][j] < menor){
            menor = m[fila-1][j];
        }
    }
    return menor;
}