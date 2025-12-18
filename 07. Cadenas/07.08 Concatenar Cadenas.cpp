/*Añadir o concatenar una cadena con otra - Función strcat()*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){

    char cad1[] = "Esto es una cadena"; // Declaramos la variable 'cad1' con la primera parte que vamos a concatenar
    char cad2[] = "...de ejemplo concatenada"; // Declaramos la variable 'cad2' con la segunda parte que vamos a concatenar
    char cad3[100]; // Declaramos la variable 'cad3' donde vamos a almacenar la frase completa compuesta de las 2 anteriores concatenadas

    /*
    La razón principal de utilizar cad3[100] como variable auxiliar para concatenar en vez de agregar a cad1 el contenido de cad2 es que están
    declarados como arreglos char[X] con tamaño fijo, es decir, memoria específica ya reservada.
    Esto hace que cad1 tenga exactamente strlen("Esto es una cadena") + 1 bytes. Esto significa que sólo cabe esa frase y el '\0'. No nos está
    sobrando espacio para agregar nada extra a esa cadena.
    
    Si hacemos strcat(cad1,cad2), strcat va a intentar escribir después del final de cad1(overflow) lo cuál es incorrecto.

    En C/C++ con char[] NO existe "crecer" el arreglo. NO hay tipado dinámico que lo impida como tale, lo que lo impide es el tamaño
    fijo de memoria asignada en el arreglo.
    */

    strcpy(cad3,cad1); //cad3 = "Esto es una cadena"
    strcat(cad3,cad2); //cad3 = "Esto es una cadena de ejemplo"

    cout<<cad3<<endl; // Imprimimos el resultado de concatenar las 2 cadenas anteriores

    getch();
    return 0;
}

