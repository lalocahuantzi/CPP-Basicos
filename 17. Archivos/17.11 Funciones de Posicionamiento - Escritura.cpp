/*Funciones de Posicionamiento - Escritura*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir(); // Indicamos la existencia de la función escribir()

int main(){
    escribir(); // Ejecutamos la función escribir()

    getch();
    return 0;
}

void escribir(){
    ofstream archivo; // Declaramos un objeto de tipo ofstream para manejar archivos de salida
    
    archivo.open("posicion.txt",ios::out); // Abrimos el archivo en modo escritura (ios::out)

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo
    }

    cout<<"Posición actual: "<<archivo.tellp()<<endl; // Mostramos la posición actual del puntero de escritura antes de escribir
    archivo<<"Hola ¿Qué tal?"; // Escribimos una cadena en el archivo

    archivo.seekp(5); // Movemos el puntero de escritura a la posición 5 del archivo

    archivo<<"Nuevo texto"; // Escribimos a partir de la nueva posición, sobrescribiendo el contenido desde ese punto
    cout<<"Posición actual: "<<archivo.tellp()<<endl; // Mostramos la nueva posición del puntero de escritura después de escribir

    archivo.close(); // Cerramos el archivo
} 