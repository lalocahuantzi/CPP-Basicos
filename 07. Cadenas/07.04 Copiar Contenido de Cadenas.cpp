/*Copiar el contenido de una cadena a otra - Funcion strcpy()*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char origen[] = "Eduardo Cahuantzi Jiménez"; // Vamos a copiar el contenido de la cadena 'origen'
    char destino1[20]; // Creamos una cadena destino1 con sólo 20 espacios de memoria asignados en dónde copiaremos el contenido de 'origen'
    char destino2[20];
    char destino3[20];

    /* 
    destino1 solo tiene espacio para 19 caracteres + '\0' y strcpy copia toda la cadena origen hasta encontrar '\0'
    NO verifica si el arreglo destino tiene suficiente espacio y esto puede provocar desbordamiento de memoria (buffer overflow).
    */
    strcpy(destino1,origen); // Sintaxis -> strcpy(new, original)

    cout<<"Resultado con strcpy(): "<<endl; // Parece funcionar pero ESTÁ MAL por diseño ya que ocupa más memoria de la asignada
    cout<<destino1<<endl<<endl;

    /*
    strncpy copia como máximo n caracteres y si la cadena origen es mas larga que n, NO se copia el caracter '\0'
    Al no tener un caracter nulo final correcto, se puede imprimir 'basura' almacenda en la memoria no inicializada
    */
    strncpy(destino2, origen, 19);

    cout<<"Resultado con strncpy() sin forzar '\\0': "<<endl;
    cout<<destino2<<endl<<endl;
    // El resultado puede mostrarse bien o mostrar basura porque no hay garantia de que exista '\0'

    strncpy(destino3, origen, 19);

    // Forzamos manualmente el terminador nulo '\0' y así garantizamos que destino3 sea una cadena válida.
    destino3[19] = '\0';

    cout<<"Resultado con strncpy() limitada correctamente: "<<endl;
    cout<<destino3<<endl;

    getch();
    return 0;
}