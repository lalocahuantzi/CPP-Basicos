/*Devolver Valores Múltiples*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
void calcular(int, int, int&, int&); // Indicamos la existencia de la función calcular()
// Los parámetros suma y producto se pasan por referencia para poder devolver más de un resultado desde la función

int main(){
    int num1, num2, suma=0, producto=0; // Declaración de variables de tipo int

    cout<<"Digite 2 números: "<<endl; // Solicitamos 2 valores al usuario
    cin>>num1; // Capturamos el valor ingresado por el usuario
    cin>>num2; // Capturamos el valor ingresado por el usuario

    calcular(num1,num2,suma,producto);  // suma y producto se modificarán directamente dentro de la función

    cout<<"El valor de la suma es: "<<suma<<endl; // Imprimimos en pantalla el resultado de la suma
    cout<<"El valor del producto es: "<<producto<<endl; // Imprimimos en pantalla el resultado del producto

    getch();
    return 0;
}

void calcular(int num1, int num2, int& suma, int& producto){ // Función que calcula la suma y el producto de los valores ingresados
    suma = num1+num2; // Suma de los valores
    producto = num1*num2; // Producto de los valores
}