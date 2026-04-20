#include <iostream>
#include "Perro.h" // Incluimos la definición de la clase Perro

using namespace std;

void Perro::mostrarDatos(){ // Definición del método mostrarDatos() para mostrar el nombre y la raza del perro
    cout<<"Nombre: "<<nombre<<endl; // Mostramos el nombre del perro
    cout<<"Raza: "<<raza<<endl; // Mostramos la raza del perro
}

void Perro::jugar(){ // Definición del método jugar() para mostrar que el perro está jugando
    cout<<"El perrito "<<nombre<<" está jugando"<<endl; // Mostramos un mensaje indicando que el perro está jugando
}