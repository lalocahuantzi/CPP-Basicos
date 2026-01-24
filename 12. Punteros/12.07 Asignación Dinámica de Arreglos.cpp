/*Asignación Dinámica de Arreglos

new : Reserva el número de bytes solicitado por la declaración | Reserva memoria en tiempo de ejecución.
delete : Libera un bloque de bytes (memoria) reservado con anterioridad.

Ejemplo: Pedir al usuario n calificaciones y almacenarlos en un arreglo dinámico
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// Prototipo de Función
void pedirNotas(); // Indicamos la existencia de la función pedirNotas()
void mostrarNotas(); // Indicamos la existencia de la función mostrarNotas()

int numCalif, *calif; // Declaramos la variable entera numCalif y un puntero a una variable de tipo int

int main(){
    pedirNotas(); // Se solicitan los datos al usuario
    mostrarNotas(); // Se muestran los datos ingresados por el usuario

    delete[] calif; // Liberando el espacio en bytes utilizados anteriormente

    getch();
    return 0;
}

void pedirNotas(){ // Función para solicitar las notas al usuario
    cout<<"Digite el número de calificaciones: ";
    cin>>numCalif;
    
    // Crea el arreglo y se reserva dinámicamente memoria para numCalif enteros, calif apunta al primer elemento del arreglo dinámico
    calif = new int[numCalif]; 

    for(int i=0;i<numCalif;i++){
        cout<<"Ingrese una nota: ";
        cin>>calif[i]; // Se almacenan las notas en el arreglo dinámico
    }
}   

void mostrarNotas(){ // Función para mostrar las notas ingresadas para el usuario
    cout<<"\n\nMostrando notas del usuario:\n";
    for(int i=0;i<numCalif;i++){
        cout<<calif[i]<<endl;
    }
}





