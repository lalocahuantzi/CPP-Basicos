/*Transformar una cadena a números - Funciones atoi() & atof()*/

//"123.45" -> 123.45

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char cad[] = "123.456";
    float numero;

    numero = atof(cad); // Transformamos la cadena de texto "123.456" al número 123.456

    /*
    Vamos a explicar la razón por la que sí podemos asignar atof(cadena) a una nueva variable y NO se puede con strlwr(texto) o strupr(texto):

    atof() convierte una cadena en un valor numérico y devuelve ese valor como un tipo primitivo (float o double),
    mientras que strupr() y strlwr() trabajan directamente sobre la memoria de la cadena original a través de punteros,
    modificándola en el mismo lugar sin crear ni devolver un nuevo resultado independiente.
    
    atof() usa el puntero solo para leer datos y generar un nuevo valor, mientras que strupr() usa el puntero para acceder
    directamente a la memoria y modificar lo que ya existe.

    atof() y atoi() leen la cadena desde el inicio y convierten caracteres válidos HASTA que encuentran uno que no forma parte de un número.
    Por ejemplo "123.45abc" se convertiría a 123.45 y "abc123.456" nos devolvería un 0 porque desde el primer carácter NO es válido para un número
    */

    cout<<numero<<endl;

    getch();
    return 0;
}

