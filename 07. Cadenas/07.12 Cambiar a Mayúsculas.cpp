/*Pasar una cadena de texto a MAYÚSCULAS - Función strupr()*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char palabra[] = "eduardo"; // Declaramos la cadena que vamos a convertir a mayúsculas

    strupr(palabra); // strupr() convierte todos los caracteres alfabéticos de la cadena a mayúsculas

    cout<<palabra<<endl; // Imprimimos la cadena ahora en mayúsculas

    getch();
    return 0;
}