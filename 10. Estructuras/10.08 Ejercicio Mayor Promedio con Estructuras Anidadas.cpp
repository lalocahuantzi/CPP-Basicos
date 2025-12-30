/*utilizar las 2 estructuras del ejercicio anterior pero ahora solicitar los datos para N alumnos,
calcular cuál de todos tiene el mejor promedio e imprimir sus datos en pantalla.*/

#include <iostream>
#include <conio.h>
#include <string>
#include <limits>

using namespace std;

struct Promedio{
    float nota1; // Declaramos el campo de tipo flotante 'nota1'
    float nota2; // Declaramos el campo de tipo flotante 'nota2'
    float nota3; // Declaramos el campo de tipo flotante 'nota3'
};

struct Alumno{ // Iniciamos la estructura Alumno
    string nombre; // Declaramos el campo de tipo cadena 'nombre'
    string sexo; // Declaramos el campo de tipo cadena 'sexo'
    int edad; // Declaramos el campo de tipo entero 'edad'
    struct Promedio prom; // Estructura anidada (promedio)
}alumnos[100];

int main(){
    int numero_alumnos, posM=0;
    float promedio_alumno[100],mayor=0;

    cout<<"Digite el número de alumnos: "; cin>>numero_alumnos; // Capturamos el número de alumnos

    if(numero_alumnos <= 0 || numero_alumnos > 100){
        cout << "Cantidad invalida. Debe estar entre 1 y 100.\n";
        getch();
        return 0;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for(int i=0;i<numero_alumnos;i++){
        // Capturamos la cadena de texto para el campo nombre de la estructura Alumno
        cout<<i+1<<".Digite su nombre: "; getline(cin,alumnos[i].nombre);
        // Capturamos la cadena de texto para el campo sexo de la estructura Alumno
        cout<<i+1<<".Digite su sexo: "; getline(cin,alumnos[i].sexo);
        // Capturamos el valor para el campo edad de la estructura Alumno
        cout<<i+1<<".Digite su edad: "; cin>>alumnos[i].edad;
        cout<<"\n";

        cout<<"\n.:Notas del Alumno:.\n";
        cout<<"Nota1: "; cin>>alumnos[i].prom.nota1; // Capturamos el valor para el campo nota1 de la estructura Promedio
        cout<<"Nota2: "; cin>>alumnos[i].prom.nota2; // Capturamos el valor para el campo nota2 de la estructura Promedio
        cout<<"Nota3: "; cin>>alumnos[i].prom.nota3; // Capturamos el valor para el campo nota3 de la estructura Promedio
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        
        promedio_alumno[i] = (alumnos[i].prom.nota1+alumnos[i].prom.nota2+alumnos[i].prom.nota3)/3; // Calculamos el promedio usando las 3 notas del alumno

        if(promedio_alumno[i] > mayor){
            mayor = promedio_alumno[i];
            posM = i;
        }
        cout<<"\n";
    }

    // Imprimimos los datos del alumno con mejor promedio
    cout<<"\nMostrando los datos del alumno con mejor promedio"<<endl;
    cout<<"Nombre: "<<alumnos[posM].nombre<<endl;
    cout<<"Sexo: "<<alumnos[posM].sexo<<endl;
    cout<<"Edad: "<<alumnos[posM].edad<<endl;
    cout<<"Promedio: "<<promedio_alumno[posM]<<endl;

    getch();
    return 0;
}