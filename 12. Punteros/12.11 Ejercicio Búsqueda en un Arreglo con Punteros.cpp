/*Hacer una función para almacenar N números en un arreglo dinámico, posteriormente en otra función buscar un número en particular.
NOTA: Puedes utilizar cualquier método de búsqueda (Secuencial o Binaria) */

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void buscarElemento(int *, int); // Indicamos la existencia de la función buscarElemento()

int nElementos, *elemento; // Declaramos la variable entera nElementos y un puntero a una variable de tipo int

int main(){
    pedirDatos();  // Se solicitan los datos al usuario
    buscarElemento(elemento,nElementos); // Llamando a la función para buscar un elemento

    delete[] elemento; // Liberamos la memoria reservada dinámicamente

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite el número elementos del arreglo: ";
    cin>>nElementos; // Capturamos el número de elementos ingresado por el usuario

    // Crea el arreglo y se reserva dinámicamente memoria para numCalif enteros, calif apunta al primer elemento del arreglo dinámico
    elemento = new int[nElementos];
    for(int i=0;i<nElementos;i++){
        cout<<"Digite un número["<<i<<"]: ";
        cin>>*(elemento+i); // *(elemento+i) es equivalente a elemento[i]
    }
}

void buscarElemento(int *elemento, int nElementos){ // Función para buscar un número dentro del arreglo
    int dato, i;
    bool band = false; // La bandera booleana nos indica si el número fue encontrado o no

    cout<<"\n\nDigite un número a buscar: ";
    cin>>dato; // Capturamos el número que desea encontrar el usuario

    // Búsqueda Secuencial
    i = 0;
    while((i<nElementos)&&(band == false)){
        if(*(elemento+i) == dato){
            band = true; // El dato fue encontrado
        }
        i++;
    }

    if(band == false){ // Si la bandera booleana se mantiene en False, el número NO existe en el arreglo
        cout<<"El número "<<dato<<" NO existe en el arreglo"<<endl;
    }
    else{ // Si la bandera booleana se cambia a True, el número existe en el arreglo
        cout<<"El número "<<dato<<" SÍ existe en el arreglo. Posición: "<<i-1<<endl;
    }
}