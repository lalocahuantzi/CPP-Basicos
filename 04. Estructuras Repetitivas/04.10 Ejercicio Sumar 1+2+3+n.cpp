/*Escriba un programa que calcule el valor de: 1+2+3+...+n*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n, suma=0; // Declaramos la variable del número de elmeentos y donde vamos a almacenar el valor de la suma

    cout<<"Digite el número de elementos a sumar: "; cin>>n;

    for(int i=1; i<=n; i++){ // Se repite el proceso desde 1 hasta 'n'
        suma += i; // (suma = suma + i); Vamos sumando el valor del iterador 'i' con lo que ya se había almacenado en 'suma'
    }

    cout<<"\nLa suma es: "<<suma<<endl; // Imprimimos en pantalla el valor de la suma hasta 'n'

    getch();
    return 0;
}