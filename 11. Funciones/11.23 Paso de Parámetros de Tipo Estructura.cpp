/*Paso de Parámetros de Tipo Estructura*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Persona{ // Iniciamos la estructura Persona
    char nombre[30]; // Declaramos el campo de tipo cadena 'nombre'
    int edad; // Declaramos el campo de tipo entero 'edad'
}p1;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void mostrarDatos(Persona); // Indicamos la existencia de la función mostrarDatos()

int main(){
    pedirDatos();  // Se solicitan los datos al usuario
    mostrarDatos(p1); // Se llama a la función para mostrar los datos ingresados por el usuario

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite su nombre: ";
    cin.getline(p1.nombre,30,'\n'); // Capturamos el nombre ingresado por el usuario
    cout<<"Digite su edad: ";
    cin>>p1.edad; // Capturamos la edad ingresada por el usuario
}

void mostrarDatos(Persona p){ // Función para imprimir en pantalla los datos ingresados por el usuario usando la estrcutura Persona
    // La estructura se pasa por valor, por lo que se crea una copia
    cout<<"\n\nNombre: "<<p.nombre<<endl;
    cout<<"Edad: "<<p.edad<<endl;
}