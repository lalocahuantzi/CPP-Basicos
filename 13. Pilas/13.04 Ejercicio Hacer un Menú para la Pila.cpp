/*Ejercicio: Hacer un programa en C++, utilizando Pilas que contenga el siguiente menú:

    1. Insertar un caracter a la pila
    2. Mostrar todos los elementos de la pila
    3. Salir
*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

struct Nodo{ // Iniciamos la estructura Nodo
    char dato; // Declaramos el campo de tipo carácter 'dato'
    Nodo *siguiente; // Almacena la dirección del siguiente nodo de la lista
};

// Prototipo de Función
void menu(); // Indicamos la existencia de la función menu()
void agregarPila(Nodo *&, char); // Indicamos la existencia de la función agregarPila()
void sacarPila(Nodo *&, char &); // Indicamos la existencia de la función sacarPila()

Nodo *pila = NULL; // Inicializamos el puntero pila en NULL (NO apunta a ningún nodo porque la pila está vacía)
char dato; // Declaramos la variable de tipo carácter donde almacenaremos los datos ingresados por el usuario

int main(){

    menu(); // Ejecutamos la función menu()

    // Al salir del menú, eliminamos todos los elementos de la pila
    cout<<"\nSacando los nodos de la pila: ";
    while(pila != NULL){ // Mientras la pila no esté vacía
        sacarPila(pila,dato); // Extraemos (y eliminamos) el nodo del tope, guardando su dato en 'dato'

        if(pila != NULL){ // Si aún quedan elementos en la pila
            cout<<dato<<" , "; // Imprimimos el dato seguido de una ','
        }
        else{ // Si ya no quedan más elementos en la pila
            cout<<dato<<"."; // Imprimimos el último dato con un '.'
        }
    }
    cout<<"\n";

    return 0;
}


void menu(){
    int opcion; // Declaramos la variable de tipo entera donde almacenaremos las opciones ingresadas por el usuario

    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar un caracter a la pila"<<endl;
        cout<<"2. Mostrar todos los elementos de la pila"<<endl;
        cout<<"3. Salir"<<endl;
        cout<<"Opción: ";
        cin>>opcion; // Capturamos la opción ingresada por el usuario

        switch(opcion){
            case 1: cout<<"\nDigite un caracter: "; // Solicitamos un dato al usuario para insertarlo en la pila
                    cin>>dato;
                    agregarPila(pila,dato); // Agregamos a la pila el dato ingresado por el usuario
                    break;
            case 2: cout<<"\nMostrando todos los elementos de la pila: ";
                    if(pila == NULL){
                            cout<<"(Pila vacía)"; // Si la pila está vacía, mostramos un mensaje
                    }
                    else{
                        Nodo *aux = pila; // Creamos un puntero auxiliar para recorrer la pila sin modificarla
                        while(aux != NULL){
                            cout<<aux->dato; // Mostramos el dato del nodo actual
                            if(aux->siguiente != NULL) cout<<" , ";
                            else cout<<".";
                            aux = aux->siguiente; // Avanzamos al siguiente nodo
                        }
                    }
                    cout<<"\n";
                    system("pause");
                    break;
            case 3: break; // Opción para salir del menú
        }
        system("cls"); // Limpiamos la pantalla para volver a mostrar el menú
    }while(opcion != 3); // El ciclo se repite mientras la opción seleccionada sea diferente de 3
}

void agregarPila(Nodo *&pila, char n){ // Función que agrega nuevos elementos a la pila
    Nodo *nuevo_nodo = new Nodo(); // Reservamos memoria dinámica para un nuevo nodo
    nuevo_nodo->dato = n; // Asignamos al campo 'dato' del nodo el valor ingresado por el usuario
    nuevo_nodo->siguiente = pila; // El nuevo nodo apunta al nodo que antes era el tope de la pila
    pila = nuevo_nodo; // Actualizamos el tope de la pila para que apunte al nuevo nodo

    cout<<"\nElemento "<<n<<" agregado a PILA correctamente"<<endl; // Imprimimos en pantalla el elemento agregado 
}

void sacarPila(Nodo *&pila, char &n){ // Función que elimina elementos de la pila
    Nodo *aux = pila; // Creamos un nodo auxiliar que apunta al tope actual de la pila
    n = aux->dato; // Guardamos en 'n' el dato del nodo que se va a eliminar
    pila = aux->siguiente; // Movemos el tope de la pila al siguiente nodo
    delete aux; // Liberamos la memoria del nodo eliminado
}