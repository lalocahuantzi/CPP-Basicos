/*Pedir una cadena de caracteres (string) al usuario, e indicar cuantas veces aparece la vocal a,e,i,o,u;
en la cadena de caracteres.*/

#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void contarVocales(char *); // Indicamos la existencia de la función contarVocales()

char palabraUsuario[50]; // Arreglo de caracteres (cadena) para almacenar la frase del usuario

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    contarVocales(palabraUsuario); // Llamamos a la función contarVocales y se envía la cadena a la función usando punteros


    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite una palabra o frase: ";
    cin.getline(palabraUsuario,50,'\n'); // Capturamos la frase ingresada por el usuario

    strupr(palabraUsuario); // Transformando a MAYÚSCULAS LA PALABRA/FRASE
}

void contarVocales(char *palabra){
    int contA=0,contE=0,contI=0,contO=0,contU=0; // Declaramos la variable cont para cada vocal, la cuáles almacenarán el número de vocales encontradas

    while(*palabra){ // El ciclo se repite mientras no se llegue al siguiente carácter nulo '\0'
        switch (*palabra){
            case 'A': contA++;break; // Si el carácter es una vocal 'A', se incrementa el contador
            case 'E': contE++;break; // Si el carácter es una vocal 'E', se incrementa el contador
            case 'I': contI++;break; // Si el carácter es una vocal 'I', se incrementa el contador
            case 'O': contO++;break; // Si el carácter es una vocal 'O', se incrementa el contador
            case 'U': contU++;break; // Si el carácter es una vocal 'U', se incrementa el contador
        }
        palabra++; // Avanzamos el puntero al siguiente carácter de la cadena
    }

    cout<<"\n\nNúmero de veces de la vocal A: "<<contA<<endl; // Imprimimos en pantalla las veces que se encontró la vocal 'A'
    cout<<"Número de veces de la vocal E: "<<contE<<endl; // Imprimimos en pantalla las veces que se encontró la vocal 'E'
    cout<<"Número de veces de la vocal I: "<<contI<<endl; // Imprimimos en pantalla las veces que se encontró la vocal 'I'
    cout<<"Número de veces de la vocal O: "<<contO<<endl; // Imprimimos en pantalla las veces que se encontró la vocal 'O'
    cout<<"Número de veces de la vocal U: "<<contU<<endl; // Imprimimos en pantalla las veces que se encontró la vocal 'U'
}