/*determinar si un número es primo o no; con punteros y además indicar en qué posición de memoria
se guardó el número.*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int numero, *dir_numero, cont=0; // Declaramos las variables enteras numero, cont y un puntero a una variable de tipo int

    cout<<"Digite un número: "; cin>>numero; // Capturamos el número ingresado por el usuario

    dir_numero = &numero; // Guardando la posición en memoria

    // Determinar si el número es primo o no lo es
    for(int i=1;i<=*dir_numero;i++){ // *dir_numero obtiene el valor almacenado en la dirección de memoria y podemos evaluar su primalidad
        if(*dir_numero%i==0){
            cont++;
        }
    }

    if(cont==2){ // Si el contador de divisores es igual a 2 significa que es un número primo (1 y él mismo)
        cout<<"El número "<<*dir_numero<<" ES PRIMO"<<endl; // Imprimimos el resultado con el valor del número
        cout<<"Posición: "<<dir_numero<<endl; // Impimimos la dirección de memoria donde está almacenado el número
    }
    else{
        cout<<"El número "<<*dir_numero<<" NO es primo"<<endl; // Imprimimos el resultado con el valor del número
        cout<<"Posición: "<<dir_numero<<endl; // Impimimos la dirección de memoria donde está almacenado el número
    }

    getch();
    return 0;
}