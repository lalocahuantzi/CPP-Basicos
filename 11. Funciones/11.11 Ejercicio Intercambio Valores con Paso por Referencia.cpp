/*Intercambiar el valor de 2 variables utilizando paso de parámetros por referencia*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
void intercambiar(int&, int&); // Indicamos la existencia de la función intercambiar()

int main(){
    int num1=10, num2=15; // Declaración de variables de tipo int 

    cout<<"El valor de num1 es: "<<num1<<endl; // Imprimimos en pantalla el valor original del primer número
    cout<<"El valor de num2 es: "<<num2<<endl; // Imprimimos en pantalla el valor original del segundo número

    intercambiar(num1,num2); // Se llama a la función intercambiar() y se le dan los valores ingresados

    cout<<"\nEl nuevo valor de num1 es: "<<num1<<endl; // Imprimimos en pantalla el nuevo valor del primer número
    cout<<"El nuevo valor de num2 es: "<<num2<<endl; // Imprimimos en pantalla el nuevo valor del segundo número

    getch();
    return 0;
}

void intercambiar(int& num1, int& num2){ // Función que intercambia los valores de los 2 parámetros introducidos
    int aux; // Declaramos la variable auxiliar que nos ayudará a hacer el intercambio

    aux = num1; // num1 -> aux
    num1=num2; // num2 -> num1
    num2=aux; // aux -> num2
}