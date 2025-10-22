/*Realice un programa que solicite de la entrada estándar un entero del 1 al 10
y muestre en la salida estándar su tabla de multiplicar hasta el 20*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int numero; // Declaramos la variable entera que utilizaremos para la tabla de multiplicar

    do{ // Este 'do while' NO permite avanzar al usuario mientras NO ingrese un número válido entre 1 y 10 estrictamente
        cout<<"Dígite un número entero del 1 al 10: "; cin>>numero; // Imprime el mensaje hasta que NO haya una restricción
    }while((numero<1) || (numero>10)); // Una vez que no se cumpla esto el programa avanza

    for (int i=1; i<=20; i++){ // Utilizamos este bucle for para realizar las multiplicaciones hasta 20
        cout<<numero<<" * "<<i<<" = "<<numero*i<<endl; // Imprimimos los resultados de (número*i)
    }

    cout<<"\n";
    system("pause");
    return 0;
}