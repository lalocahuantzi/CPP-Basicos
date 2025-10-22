/*Realiza un programa que defina dos vectores de caracteres y después almacene el contenido de ambos vectores
en un nuevo vector, situando en primer lugar los elementos del primer vector seguido por los elementos del
segundo vector. Muestre el contenido del nuevo vector en la salida estándar*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){

    char letras1[] = {'a','b','c','d','e'}; // Declaramos el primer vector de caracteres
    char letras2[] = {'f','g','h','i','j'}; // Declaramos el segundo vector de caracteres
    char letras3[10]; // // Reservamos el número de espacios en memoria que vamos a necesitar para almacenar los 2 vectores anteriores

    // Copiando los elementos de letras1 hacía letras3
    for(int i=0;i<5;i++){
        letras3[i] = letras1[i];
    }

    // Copiando los elementos de letras2 hacía letras3
    for(int j=5;j<10;j++){
        letras3[j] = letras2[j-5]; // Comenzamos a agregar a partir de dónde termina el vector letras1[]
    }

    // Mostrar el nuevo vector
    for(int k=0;k<10;k++){
        cout<<letras3[k]<<endl; // Imprimimos en pantalla el nuevo vector
    }

    getch();
    return 0;
}