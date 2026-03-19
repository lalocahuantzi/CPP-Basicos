#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <string>
using namespace std;

void escribir(); // Indicamos la existencia de la función escribir()

int main(){

    escribir(); // Ejecutamos la función escribir()

    system("pause"); // Pausamos el programa para que la consola no se cierre inmediatamente
    return 0;
}

void escribir(){ // Función para crear y escribir en un archivo de texto
    ofstream archivo; // Declaramos un objeto de tipo ofstream para manejar archivos de salida
    string nombreArchivo,frase; // Declaramos variables de tipo cadena para almacenar el nombre del archivo y el texto a escribir 

    cout<<"Digite el nombre del archivo: ";
    getline(cin,nombreArchivo); // Capturamos el nombre del archivo ingresado por el usuario
    
    string ruta = "17. Archivos/" + nombreArchivo; // Construimos la ruta donde se guardará el archivo
    archivo.open(ruta, ios::out); // Abrimos el archivo en modo escritura (ios::out)  

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo correctamente
    }

    cout<<"\nDigite el texto del archivo: ";
    getline(cin,frase); // Capturamos la frase que se escribirá en el archivo

    archivo<<frase; // Escribimos la frase dentro del archivo

    archivo.close(); // Cerramos el archivo
}