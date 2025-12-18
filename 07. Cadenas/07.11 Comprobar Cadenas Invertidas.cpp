/*Hacer un programa que determine si una palabra es palíndroma*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){

    char palabra[100], inversa[100]; // Declaramos la variable 'frase'...
     
    cout<<"Digite la palabra a evaluar: ";
    cin.getline(palabra, 100); // Capturamos la cadena1 digitada por el usuario

    strcpy(inversa, palabra); // Copiamos la palabra introducida por el usuario a la variable 'inversa' para manipularla
    strrev(inversa); // Una vez que se ocpió la palabra original a esta variable procedemos a invertir los caracteres para evaluarla

    if(strcmp(palabra,inversa) == 0){ // Si ambas cadenas SON IGUALES se ejecuta este bloque
        cout<<"La palabra '"<<palabra<< "' es un palíndromo"<<endl;
    }
    else{ // Si las cadenas SON DIFERENTES se ejecuta este bloque        
        cout<<"La palabra '"<<palabra<<"' NO es un palíndromo"<<endl;
    }

    getch();
    return 0;
}