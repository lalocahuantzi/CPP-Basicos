/*Comprobar si un número es par o impar, y señalar la posición de memnoria donde se está guardando el número.
Todo esto utilizando punteros.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numero, *dir_numero; // Declaramos la variable entera numero y un puntero a una variable de tipo int

    cout<<"Digite un número: "; cin>>numero; // Capturamos el número ingresado por el usuario

    dir_numero = &numero; // Guardando la posición en memoria

    if(*dir_numero%2==0){ // *dir_numero obtiene el valor almacenado en la dirección de memoria y podemos evaluar su paridad
        cout<<"El número "<<*dir_numero<<" es par"<<endl; // Imprimimos el resultado con el valor del número
        cout<<"Dirección de memoria: "<<dir_numero<<endl; // Impimimos la dirección de memoria donde está almacenado el número
    }
    else{
        cout<<"El número "<<*dir_numero<<" es impar"<<endl; // Imprimimos el resultado con el valor del número
        cout<<"Dirección de memoria: "<<dir_numero<<endl; // Impimimos la dirección de memoria donde está almacenado el número
    }

    getch();
    return 0;
}
