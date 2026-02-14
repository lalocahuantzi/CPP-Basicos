/*Crear una lista que almacene "n" números enteros y calcular el menor y mayor de ellos.*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

struct Nodo{ // Iniciamos la estructura Nodo
    int dato; // Declaramos el campo de tipo entero 'dato'
    Nodo *siguiente; // Almacena la dirección del siguiente nodo de la lista
};

void insertarLista(Nodo *&,int); // Indicamos la existencia de la función insertarLista()
void mostrarLista(Nodo *); // Indicamos la existencia de la función mostrarLista()
void calcularMayorMenor(Nodo *); // Indicamos la existencia de la función calcularMayorMenor()

int main(){
    Nodo *lista = NULL; // Inicializamos el puntero lista en NULL (NO apunta a ningún nodo porque la lista está vacía)
    int dato; // Declaramos la variable de tipo entero donde almacenaremos los datos ingresados por el usuario
    char respuesta; // Declaramos la variable de tipo carácter donde almacenaremos las respuestas ingresadas por el usuario

    do{
        cout<<"Digite un número: "; cin>>dato; // Solicitamos un dato al usuario para insertarlo dentro de la lista
        insertarLista(lista,dato); // Agregamos a la lista el dato ingresado por el usuario

        cout<<"\nDesea agregar otro nodo (s/n): "; cin>>respuesta; // Preguntamos al usuario si desea agregar otro elemento a la lista
        
    }while(respuesta == 's' || respuesta == 'S'); // Mientras el usuario responsa con 'S'||'s' seguimos agregando elementos a la lista

    cout<<"\nElementos de la lista: \n";
    mostrarLista(lista); // Mostramos todos los elementos de la lista

    calcularMayorMenor(lista); // Ejecutamos la función para calcular el mayor y menor valor de la lista

    cout<<"\n";

    return 0;
}

void insertarLista(Nodo *&lista,int n){ // Función que inserta elementos a la lista
    Nodo *nuevo_nodo = new Nodo(); // Reservamos memoria dinámica para un nuevo nodo
    nuevo_nodo->dato = n; // Asignamos el valor al nuevo nodo
        
    Nodo *aux; // Declaramos un puntero auxiliar para recorrer la lista

    nuevo_nodo->siguiente = NULL; // El nuevo nodo siempre apunta a NULL (último elemento de la lista)

    if(lista == NULL){ // Si la lista está vacía
        lista = nuevo_nodo; // Agregamos el primer elemento a la lista
    }
    else{
        aux = lista; // Iniciamos el recorrido de la lista desde el primer nodo
        while(aux->siguiente != NULL){ // Avanzamos hasta llegar al último nodo
            aux = aux->siguiente; // Avanzamos al siguiente nodo
        }
        aux->siguiente = nuevo_nodo; // Agrego el nuevo nodo a la lista
    }
    cout<<"\tElemento "<<n<<" agregado a la lista correctamente";
}

void mostrarLista(Nodo *lista){ // Función que muestra los elementos de la lista
    Nodo *actual = lista; // Declaramos un puntero auxiliar para recorrer la lista

    while(lista != NULL){ // Mientras no sea el final de la lista
        cout<<lista->dato<<" -> "; // Imprimimos el dato del nodo actual
        lista = lista->siguiente; // Avanzamos al siguiente nodo
    }
    cout<<"NULL"; // Indicamos el final de la lista
}

void calcularMayorMenor(Nodo *lista){ // Función que calcula el mayor y menor valor de la listaS
    if(lista == NULL){ // Verificamos si la lista está vacía
        cout << "La lista está vacía\n";
        return;
    }

    int mayor = lista->dato; // Inicializamos la variable mayor con el primer elemento 
    int menor = lista->dato; // Inicializamos la variable menor con el primer elemento

    lista = lista->siguiente;  // Avanzamos al segundo nodo

    while(lista != NULL){ // Recorremos el resto de la lista
        if(lista->dato > mayor){ // Comparamos para encontrar el mayor
            mayor = lista->dato; // Actualizamos el valor mayor
        }
        if(lista->dato < menor){ // Comparamos para encontrar el menor
            menor = lista->dato; // Actualizamos el valor menor
        }
        lista = lista->siguiente; // Avanzamos al siguiente nodo
    }

    cout << "\nEl mayor elemento de la lista es: " << mayor << endl;
    cout << "El menor elemento de la lista es: " << menor << endl;
}

