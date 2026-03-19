/*Realice un programa que pida al usuario el nombre o ubicación de un fichero de texto y,
a continuación permita leer todo el fichero.*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
using namespace std;

void lectura(); // Indicamos la existencia de la función lectura()

int main(){
    lectura(); // Ejecutamos la función lectura()

    system("pause"); // Pausamos el programa para que la consola no se cierre inmediatamente
    return 0;
}

void lectura(){ // Función para leer y mostrar el contenido de un archivo de texto
    ifstream archivo; // Declaramos un objeto de tipo ifstream para manejar archivos de entrada
    string nombreArchivo,texto; // Declaramos variables de tipo cadena para almacenar el nombre del archivo y el texto a leer

    cout<<"Digite el nombre o la ubicación del archivo o fichero: ";
    getline(cin,nombreArchivo); // Capturamos el nombre del archivo ingresado por el usuario

    string ruta = "17. Archivos/" + nombreArchivo; // Construimos la ruta donde se almacena el archivo
    archivo.open(ruta, ios::in); // Abrimos el archivo en modo lectura (ios::in)

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo
    }

while(getline(archivo, texto)){ // Leemos el archivo línea por línea de forma segura, getline devuelve true si la lectura fue exitosa
    cout << texto << endl; // Mostramos la línea en la consola
} // El ciclo se detiene automáticamente cuando ya no hay más líneas que leer

    archivo.close(); // Cerramos el archivo 
}