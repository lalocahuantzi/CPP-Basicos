/*Crear una cadena que tenga la siguiente frase "Hola que tal",
luego crear otra cadena para preguntarle al usuario su nombre, por último añadir el nombre al final
de la primera cadena y mostrar el mensaje completo "Hola que tal (NombreDelUsuario)".*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){

    char frase[] = "Hola qué tal "; // Declaramos la variable 'frase' con la primera parte que vamos a concatenar
    char nombre[100], saludo[100]; 

    cout<<"Digite el nombre del usuario: ";
    cin.getline(nombre, 100); // Capturamos la cadena1 digitada por el usuario

    strcpy(saludo,frase); //saludo = "Hola qué tal"
    strcat(saludo,nombre); //saludo = "Hola qué tal USUARIO"

    cout<<saludo<<endl; // Imprimimos el resultado de concatenar las 2 cadenas anteriores

    getch();
    return 0;
}