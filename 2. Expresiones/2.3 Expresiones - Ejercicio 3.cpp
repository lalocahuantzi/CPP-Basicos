/*Escribe la siguiente expresión como expresión en C++ (a+(b/c))/(d+(e/f))*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float a,b,c,d,e,f,resultado = 0; // Declaramos las variables a ocupar en el programa
    
    cout<<"Dígite el valor de a: ";cin>>a; // El usuario ingresa el valor de la variable 'a'
    cout<<"Dígite el valor de b: ";cin>>b; // El usuario ingresa el valor de la variable 'b'
    cout<<"Dígite el valor de c: ";cin>>c; // El usuario ingresa el valor de la variable 'c'
    cout<<"Dígite el valor de d: ";cin>>d; // El usuario ingresa el valor de la variable 'd'
    cout<<"Dígite el valor de e: ";cin>>e; // El usuario ingresa el valor de la variable 'e'
    cout<<"Dígite el valor de f: ";cin>>f; // El usuario ingresa el valor de la variable 'f'

    resultado = (a+(b/c))/(d+(e/f)); // Calculamos la expresión

    cout<<fixed<<setprecision(2); // Redondeamos el resultado mostrado a 2 decimales fijos
    cout<<"El resultado de la expresión es: "<<resultado<<endl; // Imprimimos el resultado

    return 0;
}