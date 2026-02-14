/*Insertar un elemento en una lista*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{ // Iniciamos la estructura Nodo
    int dato; // Declaramos el campo de tipo entero 'dato'
    Nodo *siguiente; // Almacena la dirección del siguiente nodo de la lista
};

// Prototipos de Funciones
void insertarLista(Nodo *&,int); // Indicamos la existencia de la función insertarLista()

int main(){
    Nodo *lista = NULL; // Inicializamos el puntero lista en NULL (NO apunta a ningún nodo porque la lista está vacía)

    int dato; // Declaramos la variable de tipo entera donde almacenaremos los datos ingresados por el usuario

    cout<<"Digite un número: "; // Solicitamos un dato al usuario para insertarlo en la lista
    cin>>dato;
    insertarLista(lista,dato); // Agregamos a la lista el dato ingresado por el usuario

    cout<<"Digite un número: "; // Solicitamos otro dato al usuario para insertarlo en la lista
    cin>>dato;
    insertarLista(lista,dato); // Agregamos a la lista el dato ingresado por el usuario

    cout<<"Digite un número: "; // Solicitamos otro dato al usuario para insertarlo en la lista
    cin>>dato;
    insertarLista(lista,dato); // Agregamos a la lista el dato ingresado por el usuario

    return 0;
}

void insertarLista(Nodo *&lista, int n){ // Función que inserta elementos a la lista
    Nodo *nuevo_nodo = new Nodo(); // Reservamos memoria dinámica para un nuevo nodo
    nuevo_nodo->dato = n; // Guardamos el valor que se va a insertar en la lista

    Nodo *aux1 = lista; // Puntero auxiliar para recorrer la lista
    Nodo *aux2 = NULL; // Puntero auxiliar para guardar el nodo anterior

    while((aux1 != NULL) && (aux1->dato <n)){ // Buscamos la posición correcta para mantener la lista ordenada
        aux2 = aux1; // Guardamos el nodo anterior
        aux1 = aux1->siguiente; // Avanzamos al siguiente nodo
    }

    if(lista == aux1){ // Si se inserta al inicio o la lista está vacía
        lista = nuevo_nodo; // El nuevo nodo pasa a ser el primero
    }
    else{
        aux2->siguiente = nuevo_nodo; // Insertamos después del nodo anterior
    }

    nuevo_nodo->siguiente = aux1; // Conectamos el nuevo nodo con el siguiente

    cout<<"\tElemento "<<n<<" insertado a la lista correctamente\n";
}