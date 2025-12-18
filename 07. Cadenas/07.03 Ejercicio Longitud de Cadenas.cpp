/*Hacer un programa que pida al usuario que digite una cadena de caracteres,
luego verificar la longitud de la cadena, y si está supera los 10 caracteres mostrarla en pantalla,
caso contrario no mostrarla*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char cadena[100]; // Declaramos la variable 'cadena' con una memoria asignada de 99 espacios + '\0'
    int longitud = 0; // Inicializamos la variable 'longitud' en 0 para evitar valores aleatorios

    cout<<"Digite una cadena: "<<endl;
    cin.getline(cadena, 100); // Capturamos la cadena digitada por el usuario

    longitud = strlen(cadena); // strlen devuelve el número de caracteres antes del '\0' y asigna ese valor a la variable 'longitud'

    if (longitud > 10) { // Se ejecuta este bloque si la longitud de la cadena es mayor a 10 caracteres
        cout << "Cadena: "<< cadena<<endl;
        cout << "Número de caracteres: "<< longitud<< endl;
    } else { // Se ejecuta este bloque si la longitud de la cadena es menor a 10 caracteres
        cout << "La cadena tiene 10 caracteres o menos, no se mostrará." << endl;
    }
    
    return 0;
}