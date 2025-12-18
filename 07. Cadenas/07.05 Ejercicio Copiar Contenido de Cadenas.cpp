/*Pedir al usuario una cadena de caracteres, almacenarla en un arreglo
y copiar todo su contenido hacía otro arreglo de caracteres*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char cadena[10]; // Declaramos la variable 'cadena' con una memoria asignada de 9 espacios + '\0'
    char destino[10]; // Declaramos la variable 'destino' con una memoria asignada de 9 espacios + '\0'

    cout<<"Digite una cadena: "<<endl;
    cin.getline(cadena, 10); // Capturamos la cadena digitada por el usuario, lee máximo N-1 caracteres y agrega '\0' para garantizar el terminador nulo

    strncpy(destino, cadena, 9);

    // Forzamos manualmente el terminador nulo '\0' y así garantizamos que destino sea una cadena válida.
    destino[9] = '\0';

    cout<<"Resultado con strncpy() limitada correctamente: "<<endl;
    cout<<destino<<endl;

    return 0;
}
