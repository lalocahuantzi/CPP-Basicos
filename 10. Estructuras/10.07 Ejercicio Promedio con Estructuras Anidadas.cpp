/*Hacer 2 estructuras, una llamada promedio que tendrá los siguientes campos:
nota1, nota2, nota3; y otra llamada alumno que tendrá los siguientes miembros:
nombre, sexo, edad; hacer que la estructura promedio esté anidada en la estructura alumnos, luego pedir todos
los datos para un alumno, luego calcular su promedio, y por último imprimir todos sus datos inlcuidos el promedio.*/

#include <iostream>
#include <conio.h>
#include <string>
#include <limits>

using namespace std;

struct Promedio{ // Iniciamos la estructura Promedio
    float nota1; // Declaramos el campo de tipo flotante 'nota1'
    float nota2; // Declaramos el campo de tipo flotante 'nota2'
    float nota3; // Declaramos el campo de tipo flotante 'nota3'
};

struct Alumno{ // Iniciamos la estructura Alumno
    string nombre; // Declaramos el campo de tipo cadena 'nombre'
    string sexo; // Declaramos el campo de tipo cadena 'sexo'
    int edad; // Declaramos el campo de tipo entero 'edad'
    struct Promedio prom; // Estructura anidada (promedio)
}alumno1;

int main(){
    float promedio_alumno;

    cout<<"Digite su nombre: ";
    getline(cin, alumno1.nombre); // Capturamos la cadena de texto para el campo nombre de la estructura Alumno
    cout<<"Digite su sexo: ";
    getline(cin, alumno1.sexo); // Capturamos la cadena de texto para el campo sexo de la estructura Alumno
    cout<<"Digite su edad: ";
    cin>>alumno1.edad; // Capturamos el valor para el campo edad de la estructura Alumno

    cout<<"\n.:Notas del Alumno:.\n";
    cout<<"Nota1: "; cin>>alumno1.prom.nota1; // Capturamos el valor para el campo nota1 de la estructura Promedio
    cout<<"Nota2: "; cin>>alumno1.prom.nota2; // Capturamos el valor para el campo nota2 de la estructura Promedio
    cout<<"Nota3: "; cin>>alumno1.prom.nota3; // Capturamos el valor para el campo nota3 de la estructura Promedio

    promedio_alumno = (alumno1.prom.nota1+alumno1.prom.nota2+alumno1.prom.nota3)/3; // Calculamos el promedio usando las 3 notas del alumno

    // Imprimimos los datos del alumno
    cout<<"\nDatos del Alumno\n";
    cout<<"Nombre: "<<alumno1.nombre<<endl;
    cout<<"Sexo: "<<alumno1.sexo<<endl;
    cout<<"Edad: "<<alumno1.edad<<endl;
    cout<<"Promedio: "<<promedio_alumno<<endl;

    getch();
    return 0;
}