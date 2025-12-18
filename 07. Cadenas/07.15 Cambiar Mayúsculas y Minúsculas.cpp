/*Pedir su nombre al usuario en MAYÚSCULA, si su nombre comienza por la letra A,
convertir su nombre a minuscúlas, caso contrario no convertirlo*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){

    char nombre[100]; // Declaramos la variable necesaria para capturar el NOMBRE del usuario

    cout<<"Digite el nombre del usuario en mayúsculas: ";
    cin.getline(nombre, 100); // Capturamos el NOMBRE del usuario en mayúsculas

    if(nombre[0] == 'A'){ // Si el primer carácter es 'A' convertimos la cadena a minúsculas
        strlwr(nombre);
        cout<<"El nombre del usuario convertido a minúsculas es: "<<nombre<<endl;
    }
    else{ // Si el primer carácter es diferente de 'A' no modificamos la cadena
        cout<<"El nombre del usuario sin convertir es: "<<nombre<<endl;
    }

    getch();
    return 0;
}