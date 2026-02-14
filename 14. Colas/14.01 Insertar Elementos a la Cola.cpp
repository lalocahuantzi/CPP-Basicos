/*Insertar elementos a la Cola*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{ // Iniciamos la estructura Nodo
    int dato; // Declaramos el campo de tipo entero 'dato'
    Nodo *siguiente; // Almacena la dirección del siguiente nodo de la lista
};

// Prototipo de Función
void insertarCola(Nodo *&,Nodo *&,int); // Indicamos la existencia de la función insertarCola()
bool cola_vacia(Nodo *); // Indicamos la existencia de la función cola_vacia()

int main(){
    Nodo *frente = NULL; // Al iniciar, el puntero frente es NULL porque la cola está vacía (No hay primer elemento)
    Nodo *fin = NULL; // Al iniciar, el puntero fin es NULL porque no hay elementos en la cola (No hay último elemento)

    int dato; // Declaramos la variable de tipo entera donde almacenaremos los datos ingresados por el usuario

    cout<<"Digite un número: ";  // Solicitamos un dato al usuario para insertarlo en la cola
    cin>>dato;
    insertarCola(frente,fin,dato); // Agregamos a la cola el dato ingresado por el usuario

    cout<<"Digite otro número: "; // Solicitamos otro dato al usuario para insertarlo en la cola
    cin>>dato;
    insertarCola(frente,fin,dato); // Agregamos a la cola el dato ingresado por el usuario

    cout<<"Digite otro número: "; // Solicitamos otro dato al usuario para insertarlo en la cola
    cin>>dato;
    insertarCola(frente,fin,dato); // Agregamos a la cola el dato ingresado por el usuario

    getch();
    return 0;
}

void insertarCola(Nodo *&frente, Nodo *&fin, int n){ // Función que agrega nuevos elementos a la cola
    Nodo *nuevo_nodo = new Nodo(); // Reservamos memoria dinámica para un nuevo nodo

    nuevo_nodo->dato = n; // Guardamos el valor que se va a insertar en la cola
    nuevo_nodo->siguiente = NULL; // El nuevo nodo siempre va al final, por eso apunta a NULL

    if(cola_vacia(frente)){ // Si la cola está vacía, el nuevo nodo será el primero
        frente = nuevo_nodo; // El frente apunta al primer elemento de la cola
    }
    else{ // Si ya hay elementos en la cola
        fin->siguiente = nuevo_nodo; // El último nodo ahora apunta al nuevo nodo
    }

    fin = nuevo_nodo; // Actualizamos el puntero fin al nuevo último nodo

    cout<<"\tElemento "<<n<<" insertado a la cola correctamente\n";
}

bool cola_vacia(Nodo *frente){ // Función para determinar si la cola está vacía o no
    return frente == NULL; // Si frente es NULL, significa que no hay ningún nodo en la cola
}