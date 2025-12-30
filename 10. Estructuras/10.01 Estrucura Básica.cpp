/* Estructura Básica en C++

Una estructura en C++ es una colección de datos de distinto tipo, se pueden combinar cadenas con enteros, flotantes, booleanos, etc.
Con la palabra clave 'struct' se declara una Estructura en C++ y su sintaxis se ve de la siguiente manera:

struct <NombreDeLaEstructura>{
<TipoDeDato> <NombreDeCampo>
<TipoDeDato> <NombreDeCampo>
<TipoDeDato> <NombreDeCampo>
...
<TipoDeDato> <NombreDeCampo>
}variable1, variable2,..., variableN; Podemos declarar en la misma estructura las variables y cada una contiene todos los campos de la estructura
*/

#include <iostream>
#include <conio.h>
#include <string>
/*
En C++ moderno se recomienda utilizar std::string junto con std::getline() para leer cadenas de texto,
ya que este enfoque evita problemas de desbordamiento de memoria y elimina la necesidad de definir tamaños máximos fijos,
a diferencia del uso de arreglos de caracteres (char[]).
*/


using namespace std;

struct Persona // Iniciamos la estructura Persona
{
    string nombre; // Declaramos el campo de tipo cadena 'nombre'
    int edad; // Declaramos el campo de tipo entero 'edad'
}persona1; // 

int main(){
    cout<<"Nombre: ";
    getline(cin,persona1.nombre); // Capturamos la cadena de texto para el campo nombre de la estructura persona
    cout<<"Edad: ";
    cin>>persona1.edad; // Capturamos el valor para el campo edad de la estructura persona

    cout<<"\nImprimiendo datos de la persona ->\n";
    cout<<"Nombre: "<<persona1.nombre<<endl;
    cout<<"Edad: "<<persona1.edad<<endl;

    getch();
    return 0;
}
