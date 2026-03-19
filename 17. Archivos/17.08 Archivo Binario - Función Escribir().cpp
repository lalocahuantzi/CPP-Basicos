/*Archivos Binarios - Escritura*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
using namespace std;

void escribir(); // Indicamos la existencia de la función escribir()

struct Registro{  // Iniciamos la estructura Registro
    char nombre[20]; // Declaramos el campo de tipo caracter 'nombre'
    char apellido[20]; // Declaramos el campo de tipo caracter 'apellido'
};

int main(){
    escribir(); // Ejecutamos la función escribir()

    getch();
    return 0;
}

void escribir(){ // Función para capturar datos del usuario y guardarlos en un archivo binario
    ofstream archivoB; // Declaramos un objeto de tipo ofstream para manejar archivos de salida binarios

    archivoB.open("Prueba.dat",ios::out | ios::binary); // Abrimos el archivo en modo escritura y binario

    if(archivoB.fail()){ // Verificamos si ocurrió un error al crear o abrir el archivo
        cout<<"No se puede crear el archivo";
        exit(1); // Finalizamos el programa si no se pudo crear el archivo
    }

    Registro persona; // Declaramos una variable de tipo estructura Registro

    cout<<"Pidiendo datos al usuario"<<endl;
    cout<<"Digite un nombre: ";
    cin.getline(persona.nombre,20,'\n'); // Capturamos el nombre del usuario en el campo 'nombre'
    cout<<"Digite un apellido: ";
    cin.getline(persona.apellido,20,'\n'); // Capturamos el apellido del usuario en el campo 'apellido'

    archivoB.write((char *)&persona,sizeof(Registro)); // Escribimos la estructura completa dentro del archivo binario

    archivoB.close(); // Cerramos el archivo
}