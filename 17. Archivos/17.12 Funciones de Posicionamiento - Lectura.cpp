/*Funciones de Posicionamiento - Lectura*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;

void escribir(); // Indicamos la existencia de la función escribir()
void leer(); // Indicamos la existencia de la función leer()

int main(){
    escribir(); // Ejecutamos la función escribir()
    leer(); // Ejecutamos la función leer()

    getch();
    return 0;
}

void escribir(){ // Función para demostrar el uso de las funciones de posicionamiento en archivos (escritura)
    ofstream archivo; // Declaramos un objeto de tipo ofstream para manejar archivos de salida
    
    archivo.open("posicion.txt",ios::out); // Abrimos el archivo en modo escritura (ios::out)

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo
    }

    cout<<"Posición actual: "<<archivo.tellp()<<endl; // Mostramos la posición actual del puntero de escritura antes de escribir
    archivo<<"Hola ¿Qué tal?"; // Escribimos una cadena en el archivo
    cout<<"Posición actual: "<<archivo.tellp()<<endl; // Mostramos la nueva posición del puntero de escritura después de escribir

    archivo.close(); // Cerramos el archivo
}

void leer(){ // Función para demostrar el uso de las funciones de posicionamiento en archivos (lectura)
    ifstream archivo; // Declaramos un objeto de tipo ifstream para manejar archivos de entrada

    archivo.open("posicion.txt",ios::in); // Abrimos el archivo en modo lectura (ios::in)

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo
    }

    string linea; // Declaramos una variable de tipo cadena para almacenar la línea leída del archivo

    archivo.seekg(5); // Movemos el puntero de lectura a la posición 5 del archivo
    cout<<"\nPosición actual: "<<archivo.tellg()<<endl; // Mostramos la posición actual del puntero de lectura
    getline(archivo,linea); // Leemos una línea completa desde la posición actual del puntero
    
    cout<<linea<<endl; // Mostramos en pantalla el contenido leído desde esa posición

    archivo.close(); // Cerramos el archivo
}