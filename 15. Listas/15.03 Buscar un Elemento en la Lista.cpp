/*Insertar un elemento en una lista*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{ // Iniciamos la estructura Nodo
    int dato; // Declaramos el campo de tipo entero 'dato'
    Nodo *siguiente; // Almacena la dirección del siguiente nodo de la lista
};

// Prototipos de Funciones
void menu(); 
void insertarLista(Nodo *&,int); // Indicamos la existencia de la función insertarLista()
void mostrarLista(Nodo *); // Indicamos la existencia de la función mostrarLista()
void buscarLista(Nodo *,int); // Indicamos la existencia de la función buscarLista()

Nodo *lista = NULL; // Inicializamos el puntero lista en NULL (NO apunta a ningún nodo porque la lista está vacía)

int main(){
    
    menu(); // Ejecutamos la función menu()

    // getch();
    return 0;
}

void menu(){
    int opcion, dato; // Declaramos las variables enteras para capturar la opciones y los datos ingresados por el usuario

    do{
        cout<<"\t.:MENU:.\n";
        cout<<"1. Insertar elementos a la lista\n";
        cout<<"2. Mostrar los elementos de la lista\n";
        cout<<"3. Buscar un elemento en la lista\n";
        cout<<"4. Salir\n";
        cout<<"Opción: ";
        cin>>opcion; // Capturamos la opción ingresada por el usuario

        switch(opcion){
            case 1: cout<<"Digite un número entero: "; cin>>dato; // Solicitamos un dato al usuario para insertarlo en la lista
                    insertarLista(lista,dato); // Insertamos en la lista el dato ingresado por el usuario
                    cout<<"\n";
                    system("pause");
                    break;
            case 2: mostrarLista(lista); // Mostramos todos los elementos de la lista
                    cout<<"\n";
                    system("pause");
                    break;
            case 3: cout<<"Digite un número entero: "; cin>>dato; // Solicitamos un dato al usuario para buscarlo dentro de la lista
                    buscarLista(lista,dato); // Buscamos en la lista el dato ingresado por el usuario
                    cout<<"\n";
                    system("pause");
                    break;
        }
        system("cls"); // Limpiamos la pantalla para mostrar el menú
    }while(opcion != 4); // Repetimos el proceso hasta que el usuario elija la opción 'Salir'
}

void insertarLista(Nodo *&lista, int n){ // Función que inserta elementos a la lista
    Nodo *nuevo_nodo = new Nodo(); // Reservamos memoria dinámica para un nuevo nodo
    nuevo_nodo->dato = n; // Guardamos el valor que se va a insertar en la lista

    Nodo *aux1 = lista; // Puntero auxiliar para recorrer la lista
    Nodo *aux2; // Puntero auxiliar para guardar el nodo anterior

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

void mostrarLista(Nodo *lista){ // Función que muestra los elementos de la lista
    Nodo *actual = lista; // Puntero auxiliar para recorrer la lista

    while(actual != NULL){ // Recorremos la lista hasta llegar al final
        cout<<actual->dato<<" -> "; // Imprimimos el dato del nodo actual
        actual = actual->siguiente; // Avanzamos al siguiente nodo
    }
    cout<<"NULL"; // Indicamos el final de la lista
}

void buscarLista(Nodo *lista, int n){ // Función que busca un elemento 'n' en la lista
    bool band = false; // Declaramos una bandera booleanada para indicar si encontró el elemento

    Nodo *actual = new Nodo(); // Puntero para recorrer la lista desde el inicio
    actual = lista;

    while((actual != NULL) && (actual->dato <= n)){  // Recorremos mientras no lleguemos al final y el dato sea <= n
        if(actual->dato == n){ // Si el dato actual coincide con n
            band = true; // Marcamos que el elemento fue encontrado
        }
        actual = actual->siguiente; // Avanzamos al siguiente nodo
    }

    if(band == true){ // Si se encontró el elemento
        cout<<"\tElemento "<<n<<" Sí ha sido encontrado en la lista\n";
    }
    else{ // Si no se encontró el elemento
        cout<<"\tElemento "<<n<<" No ha sido encontrado en la lista\n";
    }
}