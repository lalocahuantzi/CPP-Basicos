/*Escriba un fragmento de programa que intercambie los valores de 2 variables enteras que escriba el usuario*/

#include <iostream>

using namespace std;

int main(){

    int x,y,aux; // Declaramos las variables que necesitamos en el programa

    cout<<"Ingrese el valor de x: "; cin>>x;
    cout<<"Ingrese el valor de y: "; cin>>y;

    aux = x; // Ocupamos una variable auxiliar para almacenar el valor a intercambiar
    x = y; // Reemplazamos el valor de una variable con el de la otra
    y = aux; // Asignamos el valor almacenado en la variable auxiliar

    cout<<"\nEl nuevo valor de x es: "<<x<<endl; // Imprimimos el nuevo valor de x
    cout<<"El nuevo valor de y es: "<<y<<endl; // Imprimimos el nuevo valor de y
    
    return 0;
}