/*Realice un programa que pida al usuario el nombre o ubicación de un fichero de texto y,
a continuación añada texto en el fichero hasta que el usuario lo decida.*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <limits>
using namespace std;

void agregar(); // Indicamos la existencia de la función agregar()

int main(){
    agregar(); // Ejecutamos la función agregar()

    system("pause"); // Pausamos el programa para que la consola no se cierre inmediatamente
    return 0;
}

void agregar(){ // Función para agregar múltiples textos al final de un archivo
    ofstream archivo; // Declaramos un objeto de tipo ofstream para manejar archivos de salida
    string nombreArchivo,texto; // Declaramos variables de tipo cadena para almacenar el nombre del archivo y el texto a escribir
    char rpt; // Declaramos la variable para almacenar la respuesta del usuario para seguir escribiendo frases o no

    cout<<"Digite el nombre o la ubicación del archivo: ";
    getline(cin,nombreArchivo); // Capturamos el nombre del archivo ingresado por el usuario

    string ruta = "17. Archivos/" + nombreArchivo; // Construimos la ruta donde se guardará el archivo
    archivo.open(ruta, ios::app); // Abrimos el archivo en modo añadir (ios::app), sin borrar el contenido existente

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo
    }

    do{ // Ciclo para permitir ingresar múltiples frases
        cout<<"Digite una frase: ";
        getline(cin,texto); // Capturamos la frase ingresada por el usuario
        archivo<<texto<<endl; // Escribimos la frase en el archivo y añadimos un salto de línea

        cout<<"¿Desea agregar otra frase al archivo? (S/N): ";
        cin>>rpt; // Capturamos la respuesta del usuario

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiamos el buffer de entrada para evitar conflictos con getline()
    }while((rpt == 'S') || (rpt == 's')); // El ciclo se repite si el usuario ingresa 'S' o 's'

    archivo.close(); // Cerramos el archivo
}  

