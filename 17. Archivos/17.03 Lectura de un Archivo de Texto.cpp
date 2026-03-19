/*Lectura de un archivo de texto*/

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
    string texto; // Declaramos la variable de tipo cadena para almacenar cada línea leída del archivo

    // Abrimos el archivo en modo lectura (ios::in)
    archivo.open(R"(C:\Users\lykca\OneDrive\Desktop\C_C++\C++\Programacion ATS - C++\17. Archivos\prueba.txt)",ios::in);

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo correctamente
    }

while(getline(archivo, texto)){ // Leemos el archivo línea por línea de forma segura, getline devuelve true si la lectura fue exitosa
    cout << texto << endl; // Mostramos la línea en la consola
} // El ciclo se detiene automáticamente cuando ya no hay más líneas que leer

    archivo.close(); // Cerramos el archivo
}

