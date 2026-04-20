/*Sobrecarga de Funciones Miembro*/

#include <iostream>
#include "Persona.h" // Incluimos la definición de la clase Persona

using namespace std;

int main(int argc, char** argv){
    Persona* persona1 = new Persona("Eduardo",29); // Creamos dinámicamente un objeto de tipo Persona utilizando el constructor que recibe nombre y edad
    persona1->correr(); // Llamamos al método correr() sin argumentos

    Persona* persona2 = new Persona("1234567"); // Creamos dinámicamente un objeto de tipo Persona utilizando el constructor que recibe el DNI
    persona2->correr(7);  // Llamamos al método correr() ingresando la cantidad de kilómetros recorridos

    return 0;
}