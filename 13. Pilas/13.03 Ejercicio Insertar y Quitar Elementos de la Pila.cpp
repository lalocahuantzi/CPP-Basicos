/*Ejercicio: Hacer un programa para agregar números enteros a una pila,
hasta que el usuario lo decida, después mostrar todos los números introducidos en la pila.*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{ // Iniciamos la estructura Nodo
    int dato; // Declaramos el campo de tipo entero 'dato'
    Nodo *siguiente; // Almacena la dirección del siguiente nodo de la lista
};

// Prototipo de Función
void agregarPila(Nodo *&,int); // Indicamos la existencia de la función agregarPila()
void sacarPila(Nodo *&,int &); // Indicamos la existencia de la función sacarPila()

int main(){
    Nodo *pila = NULL; // Inicializamos el puntero pila en NULL (NO apunta a ningún nodo porque la pila está vacía)
    int dato; // Declaramos la variable de tipo entera donde almacenaremos los datos ingresados por el usuario
    char rpt; // Declaramos la variable de tipo carácter donde almacenaremos las respuestas ingresadas por el usuario

    do{
        cout<<"Digite un número: "; cin>>dato; // Solicitamos un dato al usuario para insertarlo en la pila
        agregarPila(pila,dato); // Agregamos a la pila el dato ingresado por el usuario

        cout<<"\nDesea agregar otro elemento a PILA(s/n): "; // Preguntamos al usuario si desea agregar otro elemento a la pila
        cin>>rpt;
    }while((rpt=='S')||(rpt=='s')); // Mientras el usuario responsa con 'S'||'s' seguimos agregando elementos a la pila

    cout<<"\nSacando todos los elementos de Pila: ";
    while(pila != NULL){ // Mientras la pila no esté vacía
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

    cout<<"\nElemento "<<n<<" agregado a PILA correctamente"<<endl; // Imprimimos en pantalla el elemento agregado 
}

void sacarPila(Nodo *&pila, int &n){ // Función que elimina elementos de la pila
    Nodo *aux = pila; // Creamos un nodo auxiliar que apunta al tope actual de la pila
    n = aux->dato; // Guardamos en 'n' el dato del nodo que se va a eliminar
    pila = aux->siguiente; // Movemos el tope de la pila al siguiente nodo
    delete aux; // Liberamos la memoria del nodo eliminado
}