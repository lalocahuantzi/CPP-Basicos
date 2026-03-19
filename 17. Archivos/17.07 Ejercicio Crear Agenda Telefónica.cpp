/*Hacer un programa en C++ para guardar números telefónicos que muestre un menú con las siguientes opciones:

    1. Crear(nombre,apellidos,teléfono)
    2. Agregar más contactos (nombre,apellidos,teléfono)
    3. Visualizar contactos existentes
*/

#include <iostream>
#include <stdlib.h>
#include <string>
#include <fstream>
#include <limits>
using namespace std;

void menu(); // Indicamos la existencia de la función menu()
void crear_contacto(); // Indicamos la existencia de la función crear_contacto()
void agregar_contacto(); // Indicamos la existencia de la función agregar_contacto()
void visualizar_contactos(); // Indicamos la existencia de la función visualizar_contactos()

struct Datos{ // Iniciamos la estructura Datos
    string nombre,apellido,telefono; // Declaramos los campos de tipo cadena para almacenar los datos del contacto
}datos;

int main(){
    menu(); // Ejecutamos la función menu()

    system("pause"); // Pausamos el programa para que la consola no se cierre inmediatamente
    return 0;
}

void menu(){
    int opcion; // Declaramos la variable de tipo entera donde almacenaremos la opción ingresada por el usuario

    do{
        cout<<"\tMENU"<<endl;
        cout<<"1. Crear(nombre,apellidos,teléfono)"<<endl;
        cout<<"2. Agregar más contactos(nombre,apellidos,teléfono)"<<endl;
        cout<<"3. Visualizar contactos existentes"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Opción: "<<endl;
        cin>>opcion; // Capturamos la opción ingresada por el usuario

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiamos el buffer de entrada para evitar conflictos con getline()

        switch(opcion){
            case 1: crear_contacto(); // Llamamos a la función para crear el archivo de contactos
            cout<<"\n";
            system("pause");
            break;
            case 2: agregar_contacto(); // Llamamos a la función para agregar nuevos contactos al archivo
            cout<<"\n";
            system("pause");
            break;
            case 3: visualizar_contactos(); // Llamamos a la función para mostrar todos los contactos guardados
            cout<<"\n";
            system("pause");
            break;
        }
        system("cls"); // Limpiamos la pantalla para volver a mostrar el menú
    }while(opcion != 4); // El ciclo se repite mientras la opción seleccionada sea diferente de 4
}

void crear_contacto(){ // Función para crear un archivo nuevo y guardar contactos
    ofstream archivo; // Declaramos un objeto de tipo ofstream para manejar archivos de salida
    char rpt; // Declaramos la variable para almacenar la respuesta del usuario

    archivo.open("17. Archivos/AgendaTelefonica.txt",ios::out); // Abrimos el archivo en modo escritura (ios::out) 

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo
    }

    archivo<<"\tAgenda Telefónica"<<endl;

    do{ // Ciclo para permitir ingresar múltiples contactos
        cout<<"Digite su nombre: ";
        getline(cin,datos.nombre); // Capturamos el nombre del contacto
        cout<<"Digite su apellido: ";
        getline(cin,datos.apellido); // Capturamos el apellido del contacto
        cout<<"Digite su teléfono: ";
        getline(cin,datos.telefono); // Capturamos el teléfono del contacto
        cout<<"\n";

        archivo<<"Nombre: "<<datos.nombre<<endl; // Escribimos el nombre del contacto en el archivo
        archivo<<"Apellido: "<<datos.apellido<<endl; // Escribimos el apellido del contacto en el archivo
        archivo<<"Teléfono: "<<datos.telefono<<endl<<endl; // Escribimos el teléfono del contacto en el archivo y dejamos una línea en blanco

        cout<<"¿Desea agregar otro contacto (S/N): ";
        cin>>rpt; // Capturamos la respuesta del usuario

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiamos el buffer de entrada para evitar conflictos con getline()
    }while(rpt == 'S' || rpt == 's'); // El ciclo se repite si el usuario ingresa 'S' o 's'

    archivo.close(); // Cerramos el archivo
}

void agregar_contacto(){ // Función para agregar contactos a un archivo ya existente
    ofstream archivo; // Declaramos un objeto de tipo ofstream para manejar archivos de salida
    char rpt; // Declaramos la variable para almacenar la respuesta del usuario 

    archivo.open("17. Archivos/AgendaTelefonica.txt",ios::app); // Abrimos el archivo en modo 'añadir'

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo
    }

    do{ // Ciclo para permitir ingresar múltiples contactos
        cout<<"Digite su nombre: ";
        getline(cin,datos.nombre); // Capturamos el nombre del contacto
        cout<<"Digite su apellido: ";
        getline(cin,datos.apellido); // Capturamos el apellido del contacto
        cout<<"Digite su teléfono: ";
        getline(cin,datos.telefono); // Capturamos el teléfono del contacto
        cout<<"\n";

        archivo<<"Nombre: "<<datos.nombre<<endl; // Escribimos el nombre del contacto en el archivo
        archivo<<"Apellido: "<<datos.apellido<<endl; // Escribimos el apellido del contacto en el archivo
        archivo<<"Teléfono: "<<datos.telefono<<endl<<endl; // Escribimos el teléfono del contacto en el archivo y dejamos una línea en blanco

        cout<<"¿Desea agregar otro contacto (S/N): ";
        cin>>rpt; // Capturamos la respuesta del usuario

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiamos el buffer de entrada para evitar conflictos con getline()
    }while(rpt == 'S' || rpt == 's'); // El ciclo se repite si el usuario ingresa 'S' o 's'

    archivo.close(); // Cerramos el archivo
}

void visualizar_contactos(){ // Función para leer y mostrar todos los contactos guardados en el archivo
    ifstream archivo; // Declaramos un objeto de tipo ifstream para manejar archivos de entrada
    string texto; // Declaramos una variable de tipo cadena para almacenar cada línea leída del archivo

    archivo.open("17. Archivos/AgendaTelefonica.txt",ios::in); // Abrimos el archivo en modo lectura (ios::in)

    if(archivo.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se pudo abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo abrir el archivo
    }

    while(getline(archivo, texto)){ // Leemos el archivo línea por línea de forma segura, getline devuelve true si la lectura fue exitosa
        cout << texto << endl; // Mostramos la línea en la consola
    } // El ciclo se detiene automáticamente cuando ya no hay más líneas que leer

    archivo.close(); // Cerramos el archivo
}
