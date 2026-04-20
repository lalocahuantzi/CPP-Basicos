#include <iostream>
#include "Alumno.h" // Incluimos la definición de la clase Alumno

using namespace std;

void Alumno::pedirDatos(){ // Definición del método pedirDatos() para capturar las calificaciones del alumno
    cout<<"Digite la calificación de Matemáticas: ";
    cin>>calMate; // Capturamos la calificación de Matemáticas


    cout<<"Digite la calificación de Programación: ";
    cin>>calProgra; // Capturamos la calificación de Programación
}

void Alumno::mostrarNotas(){ // Definición del método mostrarNotas() para mostrar las calificaciones y el promedio del alumno
    cout<<"Nota de Matemática: "<<calMate<<endl; // Mostramos la calificación de Matemáticas
    cout<<"Nota de Programación: "<<calProgra<<endl; // Mostramos la calificación de Programación
    cout<<"Promedio: "<<(calMate+calProgra)/2<<endl;  // Calculamos y mostramos el promedio de ambas calificaciones
}