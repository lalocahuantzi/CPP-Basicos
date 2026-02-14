/*Insertar Elementos en la Pila*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{ // Iniciamos la estructura Nodo
    int dato; // Declaramos el campo de tipo entero 'dato'
    Nodo *siguiente; // Almacena la dirección del siguiente nodo de la lista
};

// Prototipo de Función
void agregarPila(Nodo *&, int); // Indicamos la existencia de la función agregarPila()

int main(){
    Nodo *pila = NULL; // Inicializamos el puntero pila en NULL (NO apunta a ningún nodo porque la pila está vacía)
    int dato; // Declaramos las variables enteras donde almacenaremos los datos ingresados por el usuario

    cout<<"Digite un número: "; // Solicitamos un dato al usuario para insertarlo en la pila
    cin>>dato;
    agregarPila(pila,dato); // Agregamos a la pila el primer dato ingresado por el usuario

    cout<<"\n";

    cout<<"Digite otro número: "; // Solicitamos otro dato al usuario para insertarlo en la pila
    cin>>dato;
    agregarPila(pila,dato); // Agregamos a la pila el segundo dato ingresado por el usuario

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