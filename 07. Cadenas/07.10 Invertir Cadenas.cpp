/*Invertir una cadena - Función strrev()*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char cad[] = "Eduardo"; // Declaramos la cadena de caracteres que queremos invertir
    strrev(cad); // La función strrev(texto) funciona en Visual Studio pero falla en GCC porqye no es estándar de C/C++

    cout<<cad<<endl; // Imprimimos en pantalla la cadena de texto invertida

    getch();
    return 0;

}