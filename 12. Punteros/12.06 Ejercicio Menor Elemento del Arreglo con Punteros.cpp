/*Rellenar un arreglo con n números, posteriormente utilizando punteros determinar el menor elemento del vector.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int nElementos, numeros[100]; 
    int *dir_numeros, *dir_menor; // Declaramos dos punteros, uno recorrerá el arreglo y otro almacenará la dirección del menor elemento

    cout<<"Digite el número de elementos: "; cin>>nElementos; // Capturamos el número de elementos ingresado por el usuario

    for(int i=0;i<nElementos;i++){ // nElementos indica cuántos valores del arreglo se utilizarán
        cout<<"Digite un número["<<i<<"]: "; cin>>numeros[i]; // Cada valor se almacena en una posición distinta de memoria
    }

    dir_numeros = numeros; // El puntero apunta al primer elemento
    dir_menor = dir_numeros; // Inicialmente asumimos que el menor es el primer elemento del arreglo

    for(int i=0;i<nElementos;i++){
        if(*dir_numeros < *dir_menor){ // *dir_numeros accede al valor almacenado en la posición actual
            dir_menor = dir_numeros; // Si el valor actual es menor, guardamos su dirección
        }
        dir_numeros++; // Avanzamos el puntero a la siguiente posición del arreglo
    }

    cout<<"\nEl menor elemento es -> "<<*dir_menor // *dir_menor muestra el valor menos
        <<" con la posición en memoria -> "<<dir_menor<<endl; // dir_menor muestra la dirección de la memoria donde se encuentra

    getch();
    return 0;
}