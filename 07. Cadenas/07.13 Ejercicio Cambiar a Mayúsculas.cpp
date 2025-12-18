/*Convertir dos cadenas de minúsculas a MAYÚSCULAS. Compararlas, y decir si son iguales o no*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){

    char palabra1[100], palabra2[100]; // Declaramos las variables necesarias para capturar, transformar y comparar las palabras
     
    cout<<"Digite la primera palabra en minúsculas: ";
    cin.getline(palabra1, 100); // Capturamos la cadena1 digitada por el usuario

    cout<<"Digite la segunda palabra en minúsculas: ";
    cin.getline(palabra2, 100); // Capturamos la cadena2 digitada por el usuario

    strupr(palabra1); strupr(palabra2); // Convertimos a mayúsculas ambas cadenas de caracteres

    if(strcmp(palabra1,palabra2) == 0){ // Si ambas cadenas SON IGUALES se ejecuta este bloque
        cout<<"La palabras "<<palabra1<<" son iguales :)"<<endl;
    }
    else{ // Si las cadenas SON DIFERENTES se ejecuta este bloque        
        cout<<"La palabras "<<palabra1<<" y "<<palabra2<<" son diferentes :("<<endl;
    }

    getch();
    return 0;
}