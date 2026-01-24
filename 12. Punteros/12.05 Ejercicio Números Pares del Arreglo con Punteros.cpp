/*Rellenar un array de 10 números, posteriormente utilizando punteros indicar cuáles son números par y su posición en memoria.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numeros[10], *dir_numeros; // Declaramos un arreglo de 10 enteros y un puntero para recorrer el arreglo

    for(int i=0;i<10;i++){
        cout<<"Digite un número["<<i<<"]: ";
        cin>>numeros[i]; // Cada valor se almacena en una posición distinta de memoria
    }

    dir_numeros = numeros; // Posición de memoria comienza números

    for(int i=0;i<10;i++){
        if(*dir_numeros%2==0){ // *dir_numeros accede al valor almacenado en la posición actual
            cout<<"El número "<<*dir_numeros<<" es par"<<endl;
            cout<<"Posición: "<<dir_numeros<<endl;
        } // dir_numeros muestra la dirección de memoria del elemento par
        dir_numeros++; // Avanzamos el puntero a la siguiente posición del arreglo
    }

    getch();
    return 0;
}