/*Pedir su nombre al usuario y devolver el número de vocales que hay.
NOTA: Recuerda que debes utilizar punteros .*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
int contandoVocales(char *); // Indicamos la existencia de la función contandoVocales()

char nombreUsuario[30]; // Arreglo de caracteres (cadena) para almacenar el nombre del usuario

int main(){
    pedirDatos();  // Se solicitan los datos al usuario
    cout<<"\nEl número de vocales del nombre es: "<<contandoVocales(nombreUsuario)<<endl; // Se envía la cadena a la función usando un puntero 

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite su nombre: ";
    cin.getline(nombreUsuario,30,'\n'); // Capturamos el nombre ingresado por el usuario

    strupr(nombreUsuario); // Transformando a MAYÚSCULAS EL NOMBRE
}

int contandoVocales(char *nombre){ // Función para contar las vocales en un arreglo usando punteros
    int cont=0; // Declaramos la variable cont, la cuál almacenará el número de vocales encontradas

    while(*nombre){ // El ciclo se repite mientras no se llegue al siguiente carácter nulo '\0'
        switch (*nombre){
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U': cont++; // Si el carácter es una vocal, se incrementa el contador
        }
        nombre++; // Avanzamos el puntero al siguiente carácter de la cadena
    }
    return cont; // Se devuelve el número total de vocales encontradas
}