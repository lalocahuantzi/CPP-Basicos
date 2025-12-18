/*Longitud de una cadena de caracteres - Funciones strlen()*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char palabra[] = "Hola ¿Qué tal?"; // Vamos a evaluar la longitud de esta cadena de caracteres
    int longitud = 0; // Inicializamos la variable longitud en 0 para evitar valores aleatorios

    longitud = strlen(palabra); // strlen devuelve el número de caracteres antes del '\0'

    cout<<"Cadena: "<<palabra<<endl;
    cout<<"Número de elementos de la cadena es: "<<longitud<<endl;

    getch();
    return 0;
}
