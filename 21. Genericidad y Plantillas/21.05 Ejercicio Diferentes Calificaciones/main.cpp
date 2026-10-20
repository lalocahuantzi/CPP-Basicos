/*Defina una plantilla para la clase Materia, de tal manera que el tipo de dato del atributo
calificación sea del tipo T. Esto permitirá crear objetos de tipo materia que tengan calificaciones
que sean: números enteros, números decimales y letras.

a) Cree un objeto de tipo Materia usando el tipo int. Imprima los valores de los atributos del objeto creado.
b) Cree un objeto de tipo Materia usando el tipo float
c) Cree un objeto de tipo Materia usando el tipo char
d) Incluya un método en la clase que permita modificar la calificación de una materia.
*/

#include <iostream>
#include "Materia.h" // Incluimos la definición de la clase Materia
using namespace std;

int main(int argc, char** argv){
    Materia <int> curso1("Algoritmos",1,15); // Creamos un objeto Materia con una calificación de tipo entero
    Materia <float> curso2("Matemáticas",2,18.89); // Creamos un objeto Materia con una calificación de tipo flotante
    Materia <char> curso3("Lenguaje",3,'A'); // Creamos un objeto Materia con una calificación de tipo carácter

    cout<<"Mostrando datos del curso 1 ->"<<endl;
    curso1.mostrarDatos(); // Mostramos los datos del objeto

    cout<<"Mostrando datos del curso 2 ->"<<endl;
    curso2.mostrarDatos(); // Mostramos los datos del objeto

    cout<<"Mostrando datos del curso 3 ->"<<endl;
    curso3.mostrarDatos(); // Mostramos los datos del objeto

    curso1.setCalificacion(19); // Modificamos la calificación del primer curso
    cout<<"\nLa nueva calificación de curso 1 es: "<<curso1.getCalificacion()<<endl; // Mostramos la nueva calificación del primer curso

    curso2.setCalificacion(21.70); // Modificamos la calificación del segundo curso
    cout<<"La nueva calificación de curso 2 es: "<<curso2.getCalificacion()<<endl; // Mostramos la nueva calificación del segundo curso

    curso3.setCalificacion('B'); // Modificamos la calificación del tercer curso
    cout<<"La nueva calificación de curso 3 es: "<<curso3.getCalificacion()<<endl; // Mostramos la nueva calificación del tercer curso

    return 0;
}