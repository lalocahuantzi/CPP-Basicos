/*Punteros a Estructuras*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Persona{ // Iniciamos la estructura Persona
    char nombre[30]; // Declaramos el campo de tipo cadena 'nombre'
    int edad; // Declaramos el campo de tipo entero 'edad'
}persona, *puntero_persona = &persona;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void mostrarDatos(Persona *); // Indicamos la existencia de la función mostrarDatos()

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    mostrarDatos(puntero_persona); // Se llama a la función para mostrar los datos ingresados por el usuario

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite su nombre: ";
    cin.getline(puntero_persona->nombre,30,'\n'); // Capturamos el nombre ingresado por el usuario
    cout<<"Digite su edad: ";
    cin>>puntero_persona->edad; // Capturamos la edad ingresada por el usuario
}

void mostrarDatos(Persona *puntero_persona){ // Función para imprimir en pantalla los datos ingresados por el usuario usando la estrcutura Persona
    cout<<"\nSu nombre es: "<<puntero_persona->nombre<<endl;
    cout<<"Su edad es: "<<puntero_persona->edad<<endl;
}