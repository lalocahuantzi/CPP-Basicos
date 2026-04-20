/*Arreglo de Objetos*/

#include <iostream>
#include "Alumno.h" // Incluimos la definición de la clase Alumno
using namespace std;

int main(int argc, char** argv){
    Alumno alumnos[4]; // Declaramos un arreglo de objetos de tipo Alumno de tamaño 4 (memoria estática)
    Alumno* alumnos2 = new Alumno[3]; // Declaramos dinámicamente un arreglo de objetos de tipo Alumno de tamaño 3 (memoria dinámica)

    for(int i=0;i<3;i++){ // Recorremos el arreglo de objetos
        (alumnos2+i)->pedirDatos(); // Accedemos a cada objeto del arreglo dinámico y capturamos sus datos (Usando aritmética de punteros)
        cout<<endl;
    }

    cout<<"Mostrando las notas: \n\n"<<endl;

    for(int i=0;i<3;i++){ // Recorremos el arreglo de objetos
        cout<<"Alumno->"<<i+1<<endl; // Indicamos el número de alumno
        (alumnos2+i)->mostrarNotas(); // Mostramos las notas del alumno correspondiente (Usando aritmética de punteros)
        cout<<endl;
    }
    return 0;
}