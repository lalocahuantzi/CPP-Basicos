/*Añadir texto al final de un archivo*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

void agregar(); // Indicamos la existencia de la función agregar()

int main(){
    agregar(); // Ejecutamos la función agregar()

    system("pause"); // Pausamos el programa para que la consola no se cierre inmediatamente
    return 0;
}

void agregar(){ // Función para agregar texto al final de un archivo existente
    ofstream archivo; // Declaramos un objeto de tipo ofstream para manejar archivos de salida
    string texto; // Declaramos la variable de tipo cadena para almacenar el texto a agregar

    string ruta = "17. Archivos/programacion.txt"; // Definimos la ruta del archivo donde se agregará el contenido
    archivo.open(ruta, ios::app); // Abrimos el archivo en modo añadir (ios::app), sin borrar el contenido existente

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo
    }

    cout<<"Digite el texto que desea agregar: ";
    getline(cin,texto); // Capturamos el texto que se agregará en el archivo

    archivo<<"\n"<<texto<<endl; // Escribimos la frase dentro del archivo

    archivo.close(); // Cerramos el archivo
}

