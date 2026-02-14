/*Quitar Elementos de la Pila*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{ // Iniciamos la estructura Nodo
    int dato; // Declaramos el campo de tipo entero 'dato'
    Nodo *siguiente; // Almacena la dirección del siguiente nodo de la lista
};

// Prototipo de Función
void agregarPila(Nodo *&, int); // Indicamos la existencia de la función agregarPila()
void sacarPila(Nodo *&, int &); // Indicamos la existencia de la función sacarPila()

int main(){
    Nodo *pila = NULL; // Inicializamos el puntero pila en NULL (NO apunta a ningún nodo porque la pila está vacía)
    int dato; // Declaramos la variable entera donde almacenaremos los datos ingresados por el usuario

    cout<<"Digite un número: "; // Solicitamos un dato al usuario para insertarlo en la pila
    cin>>dato;
    agregarPila(pila,dato); // Agregamos a la pila el primer dato ingresado por el usuario

    cout<<"\n";

    cout<<"Digite otro número: "; // Solicitamos otro dato al usuario para insertarlo en la pila
    cin>>dato;
    agregarPila(pila,dato); // Agregamos a la pila el segundo dato ingresado por el usuario

    cout<<"\nSacando todos los elementos de la PILA: ";

    while (pila != NULL){ // Mientras NO sea el final de la PILA
        sacarPila(pila,dato); // Extraemos el elemento del tope de la pila y lo guardamos en 'dato'
        if(pila != NULL){ // Si aún quedan elementos en la pila
            cout<<dato<<" , "; // Imprimimos el dato seguido de una ','
        }
        else{ // Si ya no quedan más elementos en la pila
            cout<<dato<<"."; // Imprimimos el último dato con un '.'
        }
    }

    cout<<"\n";
    
    getch();
    return 0;
}

void agregarPila(Nodo *&pila, int n){ // Función que agrega nuevos elementos a la pila
    Nodo *nuevo_nodo = new Nodo(); // Reservamos memoria dinámica para un nuevo nodo
    nuevo_nodo->dato = n; // Asignamos al campo 'dato' del nodo el valor ingresado por el usuario
    nuevo_nodo->siguiente = pila; // El nuevo nodo apunta al nodo que antes era el tope de la pila
    pila = nuevo_nodo; // Actualizamos el tope de la pila para que apunte al nuevo nodo

    cout<<"\nElemento "<<n<<" agregado a la PILA correctamente"<<endl; // Imprimimos en pantalla el elemento agregado 
}

void sacarPila(Nodo *&pila, int &n){ // Función que elimina elementos de la pila
    Nodo *aux = pila; // Creamos un nodo auxiliar que apunta al tope actual de la pila
    n = aux->dato; // Guardamos en 'n' el dato del nodo que se va a eliminar
    pila = aux->siguiente; // Movemos el tope de la pila al siguiente nodo
    delete aux; // Liberamos la memoria del nodo eliminado
}