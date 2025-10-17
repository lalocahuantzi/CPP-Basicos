/*Escribe un programa que determine si un número es par o impar*/

#include <iostream>

using namespace std;

int main(){
    int numero;

    cout<<"Dígite un número entero: "; cin>>numero;
    // En C++ existe el operador módulo que nos devuelve el residuo de la división
    if((numero)%2 != 0){ // Si el residuo al dividir entre 2 es distinto de cero significa que es un número impar 
        cout<<"El número digitado es impar"<<endl;
    }
    else{ // Caso contrario, si el residuo al dividir entre 2 es igual a cero significa que es un número par
        cout<<"El número digitado es par"<<endl;
    }
    return 0;
}