/*Hacer una estructura llamada 'corredor', en la cual se tendrán los siguientes campos:
Nombre, edad, sexo, club, pedir datos al usuario para un corredor, y asignar una categoría de competición:
- Juvenil <= 18 años
- Señor <= 40 años
- Veterano > 40 años
Posteriormente imprimir todos los datos del corredor incluida su categoría de competición
*/

#include <iostream>
#include <conio.h>
#include <string>
#include <limits> //numeric_limits para limpiar el buffer

using namespace std;

struct Corredor{ // Iniciamos la estructura Corredor
    string nombre; // Declaramos el campo de tipo cadena 'nombre'
    int edad; // Declaramos el campo de tipo entero 'edad'
    string sexo; // Declaramos el campo de tipo cadena 'sexo'
    string club; // Declaramos el campo de tipo cadena 'club'
}c1;

int main(){

    string categoria; // Declaramos la variable tipo cadena 'categoria'

    cout<<"Nombre: ";
    getline(cin, c1.nombre); // Capturamos la cadena de texto para el campo nombre de la estructura Corredor
    cout<<"Edad: ";
    cin>>c1.edad; // Capturamos el valor para el campo edad de la estructura Corredor

    // Importante: limpiamos el buffer para que el siguiente getline no se “salte” la entrada
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    // Al combinar cin >> con getline, es necesario limpiar el buffer porque cin >> no consume el salto de línea '\n'
    // Regla: siempre que se pase de cin >> a getline, se debe limpiar el buffer de entrada.
    cout<<"Sexo: ";
    getline(cin, c1.sexo); // Capturamos la cadena de texto para el campo sexo de la estructura Corredor
    cout<<"Club: ";
    getline(cin, c1.club); // Capturamos la cadena de texto para el campo club de la estructura Corredor

    // Clasificación por edad del corredor
    if(c1.edad <= 18){
        categoria = "Juvenil";
    }
    else if(c1.edad <= 40){
        categoria = "Senior";
    }
    else{
        categoria = "Veterano";
    }

    // Imprimiendo los datos
    cout<<"\n\nDatos del Corredor: "<<endl;
    cout<<"Nombre: "<<c1.nombre<<endl;
    cout<<"Edad: "<<c1.edad<<endl;
    cout<<"Sexo: "<<c1.sexo<<endl;
    cout<<"Club: "<<c1.club<<endl;
    cout<<"Categoría: "<<categoria<<endl;
    
    getch();
    return 0;
}