/*Autorreferencia del Objeto*/

#include <iostream>
#include "Perro.h" // Incluimos la definición de la clase Perro

int main(int argc, char** argv){
    Perro perro1("Fido","Doberman"); // Creamos un objeto de tipo Perro en memoria estática (se destruye automáticamente al finalizar el programa)

    perro1.mostrarDatos(); // Llamamos al método mostrarDatos() del objeto perro1
    perro1.jugar(); // Llamamos al método jugar() del objeto perro1

    Perro* perro2 = new Perro("Sasa","Pitbull"); // Creamos dinámicamente un objeto de tipo Perro (memoria en el heap)

    perro2->mostrarDatos(); // Llamamos al método mostrarDatos() del objeto dinámico
    perro2->jugar(); // Llamamos al método jugar() del objeto dinámico

    delete perro2; // Liberamos la memoria del objeto dinámico y llamamos a su destructor

    return 0;
}