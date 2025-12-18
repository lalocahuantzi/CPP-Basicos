/*Realice un programa que lea una cadena de caracteres y muestre en la salida cuántas
ocurrencias de cada vocal existen en la cadena*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char frase[100]; // Declaramos la variable 'frase' donde almacenaremos la cadena introducida por el usuario
    int vocal_a=0,vocal_e=0,vocal_i=0,vocal_o=0,vocal_u=0; // Declaramos e inicializamos en 0 las variables necesarias para contar las vocales

    cout<<"Digite una frase: ";
    cin.getline(frase, 100);

    strlwr(frase); // Se convierte toda la cadena a minúsculas para unificar el conteo y no importe si son mayúsculas

    for(int i=0; frase[i] !='\0'; i++){ // Se recorre la cadena carácter por carácter y el ciclo se ejecuta hasta encontrar el carácter nulo '\0'
        switch(frase[i]){ // Se evalúa cada carácter para verificar si es una vocal
            case 'a': vocal_a++; break; // Contabilizando las 'a'
            case 'e': vocal_e++; break; // Contabilizando las 'e'
            case 'i': vocal_i++; break; // Contabilizando las 'i'
            case 'o': vocal_o++; break; // Contabilizando las 'o'
            case 'u': vocal_u++; break; // Contabilizando las 'u'
        }
    }

    // Se imprimen los resultados del conteo vocal por vocal
    cout<<"Vocal a: "<<vocal_a<<endl;
    cout<<"Vocal e: "<<vocal_e<<endl;
    cout<<"Vocal i: "<<vocal_i<<endl;
    cout<<"Vocal o: "<<vocal_o<<endl;
    cout<<"Vocal u: "<<vocal_u<<endl;

    getch();
    return 0;
}