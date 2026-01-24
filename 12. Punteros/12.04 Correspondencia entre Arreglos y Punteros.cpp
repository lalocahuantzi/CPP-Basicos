/*Correspondencia entre arrays y punteros*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numeros[] = {1,2,3,4,5}; // Declaramos un arreglo de enteros
    int *dir_numeros; // Declaramos un putero a una variable de tipo entero

    dir_numeros = numeros; // El nombre del arreglo apunta a la dirección del primer elemento

    for(int i=0;i<5;i++){
        cout<<"Elemento del vector ["<<i<<"]: " // *dir_numeros muestra el valor
            <<*dir_numeros++<<endl; // dir_numeros++ avanza a la siguiente posición de memoria
    }

    for(int i=0;i<5;i++){
        cout<<"La Posición de memoria del elemento "<<numeros[i]
            <<" es: "<<dir_numeros++<<endl; // Se muestra la dirección de memoria (puntero)
    }

    getch();
    return 0;
}