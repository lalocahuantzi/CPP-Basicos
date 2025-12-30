/*Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
Nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál de los 3 tiene el mejor promedio y posteriormente
imprimir los datos del alumno.*/

#include <iostream>
#include <conio.h>
#include <string>
#include <limits>

using namespace std;

struct Alumno{ // Iniciamos la estructura Alumno
    string nombre; // Declaramos el campo de tipo cadena 'nombre'
    int edad; // Declaramos el campo de tipo entero 'edad'
    float promedio; // Declaramos el campo de tipo flotante 'promedio'
}alumnos[3];

int main(){
    float mayor = alumnos[0].promedio; // Declaramos la variable auxiliar para almacenar el mayor promedio
    int pos = 0; // Declaramos la variable dónde almacenaremos la posición del alumno con mejor promedio

    for(int i=0;i<3;i++){
        // Capturamos la cadena de texto para el campo nombre de la estructura Alumno
        cout<<i+1<<". Digite su nombre: "; getline(cin, alumnos[i].nombre);
        // Capturamos el valor para el campo edad de la estructura Alumno
        cout<<i+1<<". Digite su edad: "; cin>>alumnos[i].edad;
        // Capturamos el valor para el campo promedio de la estructura Alumno
        cout<<i+1<<". Digite su promedio: "; cin>>alumnos[i].promedio;

        // Regla mental: si se usa cin >> y después getline, es obligatorio limpiar el buffer.
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout<<"\n";

        // Comprobando cuál de los 3 alumnos tiene el mejor promedio
        if(alumnos[i].promedio>mayor){
        mayor = alumnos[i].promedio;
        pos = i;
        }
    }

    // Imprimiendo datos del alumno con el mejor promedio
    cout<<"\nDatos del Alumno con mejor promedio: "<<endl;
    cout<<"Nombre: "<<alumnos[pos].nombre<<endl;
    cout<<"Edad: "<<alumnos[pos].edad<<endl;
    cout<<"Promedio: "<<alumnos[pos].promedio<<endl;

    getch();
    return 0;
}