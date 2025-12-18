/*Pasar una palabra a minúsculas - Función strlwr()*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char palabra[] = "EDUARDO"; // Declaramos la cadena que vamos a convertir a minúsculas

    strlwr(palabra); // strlwr() convierte todos los caracteres alfabéticos de la cadena a minúsculas

    cout<<palabra<<endl; // Imprimimos la cadena ahora en minúsculas

    getch();
    return 0;
}
