/*Escriba un programa que lea dos números y determine cuál de ellos es el mayor*/

#include <iostream>

using namespace std;

int main(){
    int n1,n2; // Declaramos las variables que vamos a ocupar
    
    cout<<"Dígite dos número enteros: "; cin>>n1>>n2;

    if(n1 == n2){ // Evaluamos el caso en que ambos números sean iguales
        cout<<"Ambos números son iguales";
    }
    else if(n1>n2){ //Evaluamos el caso en que n1 sea mayor a n2
        cout<<"El mayor es: "<<n1;
    }
    else{ //Evaluamos el caso faltante en que n2 sea mayor a n1
        cout<<"El mayor es: "<<n2;
    }

    return 0;
}