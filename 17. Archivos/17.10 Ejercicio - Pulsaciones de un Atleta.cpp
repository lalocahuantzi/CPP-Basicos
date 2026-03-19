/*Crear un archivo binario donde almacenar un Registro que contenga las pulsaciones de un atleta en una determinada hora,
el programa debe tener un menú con las siguientes opciones:

    1. Comenzar a digitar las pulsaciones
    2. Añadir más pulsaciones
    3. Mostrar las pulsaciones registradas
    4. Salir
*/

#include <iostream>
#include <fstream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

void menu(); // Indicamos la existencia de la función menu()
void escribirPulsacion(); // Indicamos la existencia de la función escribirPulsacion()
void agregarPulsacion(); // Indicamos la existencia de la función agregarPulsacion()
void mostrarPulsaciones(); // Indicamos la existencia de la función mostrarPulsaciones()

struct Registro{ // Iniciamos la estructura Registro
    float hora; // Declaramos el campo de tipo flotante 'hora'
    int pulsaciones; // Declaramos el campo de tipo entero 'pulsaciones'
};

int main(){
    menu(); // Ejecutamos la función menu()

    getch();
    return 0;
}

void menu(){
    int opcion; // Declaramos la variable de tipo entera donde almacenaremos la opción ingresada por el usuario

    do{
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. Comenzar a digitar las pulsaciones"<<endl;
        cout<<"2. Añadir más pulsaciones"<<endl;
        cout<<"3. Mostrar las pulsaciones registradas"<<endl;
        cout<<"4. Salir"<<endl;
        cout<<"Digite una opción: "; cin>>opcion;

        switch(opcion){
            case 1: escribirPulsacion(); // Llamamos a la función para crear el archivo y guardar la primera pulsación
                    break;
            case 2: agregarPulsacion(); // Llamamos a la función para agregar nuevas pulsaciones al archivo
                    break;
            case 3: mostrarPulsaciones(); // Llamamos a la función para mostrar las pulsaciones almacenadas
                    break;
            case 4: break;
            default: cout<<"Se equivoco de opción de menú"<<endl; // Mensaje en caso de opción inválida
        }
        system("pause"); // Pausamos el programa para que la consola no se cierre inmediatamente
        system("cls"); // Limpiamos la pantalla para volver a mostrar el menú
    }while(opcion != 4); // El ciclo se repite mientras la opción seleccionada sea diferente de 4
}

void escribirPulsacion(){ // Función para crear el archivo binario y registrar la primera pulsación
    ofstream archivoB; // Declaramos un objeto de tipo ofstream para manejar archivos de salida binarios

    archivoB.open("pulsaciones.dat",ios::out | ios::binary); // Abrimos el archivo en modo escritura y binario

    if(archivoB.fail()){ // Verificamos si ocurrió un error al crear o abrir el archivo
        cout<<"No se puede crear el archivo";
        exit(1); // Finalizamos el programa si no se pudo crear el archivo
    }

    Registro pulso; // Declaramos una variable de tipo estructura Registro

    cout<<"\nDigite la hora: ";
    cin>>pulso.hora; // Capturamos la hora en el campo 'hora'
    cout<<"Digite la cantidad de pulsaciones: ";
    cin>>pulso.pulsaciones; // Capturamos el pulso en el campo 'pulsaciones'

    archivoB.write((char *)&pulso,sizeof(Registro)); // Escribimos la estructura completa en el archivo binario

    archivoB.close(); // Cerramos el archivo
}

void agregarPulsacion(){ // Función para agregar nuevas pulsaciones al archivo binario existente
    ofstream archivoB; // Declaramos un objeto de tipo ofstream para manejar archivos de salida binarios

    archivoB.open("pulsaciones.dat",ios::app | ios::binary);  // Abrimos el archivo en modo añadir y binario

    if(archivoB.fail()){ // Verificamos si ocurrió un error al crear o abrir el archivo
        cout<<"No se puede crear el archivo";
        exit(1); // Finalizamos el programa si no se pudo crear el archivo
    }

    Registro pulso; // Declaramos una variable de tipo estructura Registro

    cout<<"\nDigite la hora: ";
    cin>>pulso.hora; // Capturamos la hora en el campo 'hora'
    cout<<"Digite la cantidad de pulsaciones: ";
    cin>>pulso.pulsaciones; // Capturamos el pulso en el campo 'pulsaciones'

    archivoB.write((char *)&pulso,sizeof(Registro));  // Escribimos la estructura completa en el archivo binario

    archivoB.close(); // Cerramos el archivo
}

void mostrarPulsaciones(){ // Función para leer y mostrar todas las pulsaciones almacenadas en el archivo binario
    ifstream archivoB; // Declaramos un objeto de tipo ifstream para manejar archivos de entrada binarios

    archivoB.open("pulsaciones.dat",ios::in | ios::binary); // Abrimos el archivo en modo lectura binaria

    if(archivoB.fail()){ // Verificamos si ocurrió un error al abrir el archivo
        cout<<"No se puede abrir el archivo";
        exit(1); // Finalizamos el programa si no se pudo crear el archivo
    }

    Registro pulso; // Declaramos una variable de tipo estructura Registro

    while(archivoB.read((char *)&pulso,sizeof(Registro))){ // Leemos un registro del archivo binario; read devuelve true si la lectura fue exitosa
        cout<<"Hora: "<<pulso.hora<<endl; // Mostramos en pantalla la hora registrada
        cout<<"Pulsaciones: "<<pulso.pulsaciones<<endl<<endl; // Mostramos en pantalla las pulsaciones registradas
    } // El ciclo se detiene automáticamente cuando ya no hay más registros que leer

    archivoB.close(); // Cerramos el archivo
}