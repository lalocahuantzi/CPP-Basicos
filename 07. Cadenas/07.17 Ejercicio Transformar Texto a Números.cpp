/*Pedir al usuario 2 cadenas de caracteres de números (texto), uno entero y el otro real,
convertirlos a sus respectivos valores y por último sumarlos*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char cadena_int[100], cadena_flot[100]; //
    float num_int, num_flot, suma;

    cout<<"Digite un número entero: "<<endl;
    cin.getline(cadena_int, 100); // Capturamos el número entero digitado por el usuario (como cadena de texto)

    cout<<"Digite un número flotante: "<<endl;
    cin.getline(cadena_flot, 100); // Capturamos el número flotante digitado por el usuario (como cadena de texto)

    num_int = atof(cadena_int); // Transformamos la cadena de texto "123.456" al número 123.456
    num_flot = atof(cadena_flot); // Transformamos la cadena de texto "123.456" al número 123.456

    suma = num_int + num_flot;

    cout<<"El resultado de la suma del número flotante + el número entero es: "<<suma<<endl;

    getch();
    return 0;
}