/*Escriba un programa que calcule x^y, donde tanto x como y son enteros positivos,
todo esto sin utilizar la función pow(x,y)*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    int x,y,pow = 1; // Declaramos e inicializamos las variables necesarias para el programa
    cout<<"Digite un valor entero para la variable x: "; cin>>x;
    cout<<"Digite un valor entero para la variable y: "; cin>>y;

    for(int i = 1; i<=y; i++){ // Vamos a ocupar un bucle 'for' para replicar 'pow(x,y)'
        pow *= x; // Multiplicaremos por x un total de y veces 
    }

cout<<"El valor de "<<x<<" elevado a "<<y<<" es igual a: "<<pow<<endl; // Imprimimos el resultado de x^y

    getch();
    return 0;
}