/*Defina una estructura que sirva para representar a una persona. La estructura debe contener dos campos:
el nombre de la persona y un valor de tippo lógico que indica si la persona tiene algún tipo de discapacidad.
Realice un programa que dado un vector de personas rellene dos nuevos vectores: uno que contenga las personas que no tienen
ninguna discapacidad y otro que contenga las personas con discapacidad.*/

#include <iostream>
#include <string>
#include <limits>
#include <conio.h>

using namespace std;

struct Persona{ // Iniciamos la estructura Persona
    string nombre; // Declaramos el campo de tipo cadena 'nombre'
    bool discapacidad; // Declaramos el campo de tipo booleano 'discapacidad'
}personas[100],personasSinD[100],personasConD[100];
//personasSinD = Personas sin Discapacidad
//PersonasConD = Personas con Discapacidad

int main(){
    int numero_personas, j=0, k=0;

    cout<<"Digite el número de personas: "; cin>>numero_personas; // Capturamos el número de personas

        if(numero_personas <= 0 || numero_personas > 100){
        cout << "Cantidad invalida. Debe estar entre 1 y 100.\n";
        getch();
        return 0;
    }
    cout<<'\n';

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Rellenando el vector con los datos de las personas
    for(int i=0;i<numero_personas;i++){
        
        cout<<"Digite su nombre: "; getline(cin,personas[i].nombre);
        cout<<"La persona tiene discapacidad(1/0): "; cin>>personas[i].discapacidad;

        // Almacenando personas con discapacidad
        if(personas[i].discapacidad == 1){
            personasConD[j]=personas[i];
            j++;
        }
        else{
            personasSinD[k] = personas[i];
            k++;
        }
        /*
        En C++ moderno, la asignación de estructuras con std::string se parece a Python en sintaxis,
        pero en C++ se copian los datos (semántica de valor), mientras que en Python se copian referencias (semántica de referencia).
        */
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }   

    // Imprimimos en pantalla la clasificación de personas
    cout<<'\n';
    cout<<"Mostrar las personas sin Discapacidad:\n";
    for(int i=0;i<k;i++){
        cout<<personasSinD[i].nombre<<endl;
    }

    cout<<"Mostrar las personas con Discapacidad:\n";
    for(int i=0;i<j;i++){
        cout<<personasConD[i].nombre<<endl;
    }

    getch();
    return 0;
}