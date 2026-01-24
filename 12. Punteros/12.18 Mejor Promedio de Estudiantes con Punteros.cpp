/*Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos: Nombre, edad, promedio, pedir datos al usuario
para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente imprimir los datos del alumno.
NOTA: Usar punteros a estructura*/

#include <iostream>
#include <conio.h>
#include <limits> //numeric_limits para limpiar el buffer
using namespace std;

struct Alumno{ // Iniciamos la estructura Alumno
    char nombre[30]; // Declaramos el campo de tipo cadena 'nombre'
    int edad; // Declaramos el campo de tipo entero 'edad'
    float promedio; // Declaramos el campo de tipo flotante 'promedio'
}alumno[3], *puntero_alumno = alumno; // puntero_alumno apunta al primer elemento del arreglo alumno

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void calcularMejorPromedio(Alumno *); // Indicamos la existencia de la función calcularMejorPromedio()

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    calcularMejorPromedio(puntero_alumno); // Llamamos a la función que obtiene e imprime los datos del alumno con mayor promedio

    cout<<"\n";

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    for(int i=0;i<3;i++){
        cout<<"Digite su nombre: ";
        cin.getline((puntero_alumno+i)->nombre,30,'\n'); // Capturamos el nombre ingresado por el usuario
        cout<<"Digite su edad: ";
        cin>>(puntero_alumno+i)->edad; // Capturamos la edad ingresada por el usuario
        cout<<"Digite el promedio: ";
        cin>>(puntero_alumno+i)->promedio; // Capturamos el promedio ingresado por el usuario
        // Importante: limpiamos el buffer para que el siguiente getline no se “salte” la entrada
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
}

void calcularMejorPromedio(Alumno *puntero_alumno){ // Función para imprimir los datos del alumno con el mejor promedio
    float mayor = puntero_alumno->promedio; // Suponemos que el mayor promedio es el primer elemento antes de la comparación
    int pos=0; // Declaramos la variable que guarda la posición del alumno con el mejor promedio

    for(int i=0;i<3;i++){
        if((puntero_alumno+i)->promedio > mayor){ // puntero_alumno[i].promedio
            mayor = (puntero_alumno+i)->promedio; // Comprobar el mayor promedio
            pos = i;
        }
    }

    // Imprimir los datos del alumno con mayor promedio
    cout<<"\nEl alumno con mejor promedio es: \n";
    cout<<"Nombre: "<<(puntero_alumno+pos)->nombre<<endl;
    cout<<"Edad: "<<(puntero_alumno+pos)->edad<<endl;
    cout<<"Promedio: "<<(puntero_alumno+pos)->promedio<<endl;
}
