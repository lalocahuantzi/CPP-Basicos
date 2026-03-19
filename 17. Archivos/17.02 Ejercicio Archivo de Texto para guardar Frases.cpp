/*Realice un programa que pida al usuario el nombre de un fichero de texto y,
a continuación permita almacenar tantas frases como el usuario desee.*/

#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
#include <limits>
using namespace std;

void escribirFrase(); // Indicamos la existencia de la función escribirFrase()

int main(){
    escribirFrase(); // Ejecutamos la función escribirFrase()

    system("pause"); // Pausamos el programa para que la consola no se cierre inmediatamente
    return 0;
}


void escribirFrase(){ // Función para crear un archivo y almacenar múltiples frases
    ofstream archivo; // Declaramos un objeto de tipo ofstream para manejar archivos de salida
    string nombreArchivo,frase; // Declaramos variables de tipo cadena para almacenar el nombre del archivo y el texto a escribir
    char rpt; // Declaramos la variable para almacenar la respuesta del usuario para seguir escribiendo frases o no

    cout<<"Digite el nombre del archivo: ";
    getline(cin,nombreArchivo); // Capturamos el nombre del archivo ingresado por el usuario

    string ruta = "17. Archivos/" + nombreArchivo; // Construimos la ruta donde se guardará el archivo
    archivo.open(ruta, ios::out); // Abrimos el archivo en modo escritura (ios::out) 

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo correctamente
    }

    do{ // Ciclo para permitir ingresar múltiples frases
        cout<<"Digite una frase: ";
        getline(cin,frase); // Capturamos la frase ingresada por el usuario
        archivo<<frase<<endl; // Escribimos la frase en el archivo y añadimos un salto de línea

        cout<<"¿Desea agregar otra frase al archivo? (S/N): ";
        cin>>rpt; // Capturamos la respuesta del usuario

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiamos el buffer de entrada para evitar conflictos con getline()
    }while((rpt == 'S') || (rpt == 's')); // El ciclo se repite si el usuario ingresa 'S' o 's'

    archivo.close(); // Cerramos el archivo
}