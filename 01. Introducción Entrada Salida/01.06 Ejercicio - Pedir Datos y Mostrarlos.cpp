/*
Realice un programa que lea de la entrdad estándar los siguientes datos de una persona:
    
    Edad: dato de tipo entero
    Sexo: dato de tipo carácter
    Altura en metros: dato de tipo real (flotante)

Tras leer los datos, el programa debe mostrarlos en la salida estándar
*/
#include <iostream>

using namespace std;

int main(){

    int edad; // Declaramos la edad en años usando una variable entera
    char sexo[10]; // Asignamos 10 espacios en memoria para que el usuario escriba el sexo
    float altura; // La altura en metros y centímetros se almacenará en una variable flotante

    cout<<"Ingrese su edad en años: "; cin>>edad;
    cout<<"Ingrese su sexo: "; cin>>sexo;
    cout<<"Ingrese su altura en metros y centímetros: "; cin>>altura;

    cout<<"\nEdad: "<<edad<<endl; // Imprimimos en pantalla la edad
    cout<<"Sexo: "<<sexo<<endl; // Imprimimos en pantalla el sexo
    cout<<"Altura en metros: "<<altura<<"\n"<<endl; // Imprimimos en pantalla la altura

    return 0;
}