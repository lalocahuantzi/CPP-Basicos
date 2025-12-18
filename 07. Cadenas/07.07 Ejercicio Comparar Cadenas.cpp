/*Pedir al usuario que digite 2 cadenas de caracteres, e indicar si ambas cadenas son iguales,
en caso de no serlo, indicar cuál es mayor alfabeticamente*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char cadena1[100], cadena2[100]; // Declaramos la variable 'cadena' con una memoria asignada de 99 espacios + '\0'

    cout<<"Digite la primera cadena: "<<endl;
    cin.getline(cadena1, 100); // Capturamos la cadena1 digitada por el usuario

    cout<<"Digite la segunda cadena: "<<endl;
    cin.getline(cadena2, 100); // Capturamos la cadena2 digitada por el usuario

    if(strcmp(cadena1,cadena2) == 0){ // Si ambas cadenas SON IGUALES se ejecuta este bloque
        cout<<"Ambas cadenas son iguales: "<<cadena1<<endl;
    }
    else{ // Si las cadenas SON DIFERENTES se ejecuta este bloque        
        if(strcmp(cadena1,cadena2) > 0){ // strcmp(cadena1,cadena2) > 0 -> cadena1 va después que cadena2 alfabéticamente
            cout<<"Las cadenas son diferentes y "<<cadena1<<" está después alfabéticamente"<<endl;
        }
        else{ // strcmp(cadena1,cadena2) < 0 -> cadena2 va después que cadena1 alfabéticamente
            cout<<"Las cadenas son diferentes y "<<cadena2<<" está después alfabéticamente"<<endl;
        }
    }

    return 0;
}