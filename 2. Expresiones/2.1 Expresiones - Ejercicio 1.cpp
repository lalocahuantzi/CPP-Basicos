// Escribe la siguiente expresión como expresión en C++ -> (a/b) + 1

#include <iostream>
#include <iomanip> // Incluimos este header para utilizar 'fixed' y 'setprecision'

using namespace std;

int main(){

    float a,b,resultado = 0; // Declaramos las variables a ocupar en el programa
    
    cout<<"Dígite el valor de a: ";cin>>a; // El usuario ingresa el valor de la variable 'a'
    cout<<"Dígite el valor de b: ";cin>>b; // El usuario ingresa el valor de la variable 'b'

    resultado = (a/b)+1; // Calculamos la expresión

    cout<<fixed<<setprecision(2); // Redondeamos el resultado mostrado a 2 decimales fijos
    cout<<"El resultado de la expresión es: "<<resultado<<endl; // Imprimimos el resultado

    return 0;
}