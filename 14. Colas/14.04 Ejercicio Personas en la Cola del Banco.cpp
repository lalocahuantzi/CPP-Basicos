/*Hacer un programa que guarde datos de los clientes de un banco, los almacene en cola,
y por último muestre los clientes en el orden correcto.*/

#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <string>
#include <limits>
using namespace std;

struct Cliente{ // Iniciamos la estructura Cliente
    string nombre; // Declaramos el campo de tipo string 'nombre'
    string clave; // Declaramos el campo de tipo string 'clave'
    int edad; // Declaramos el campo de tipo entero 'edad'
};

struct Nodo{ // Iniciamos la estructura Nodo
    Cliente c; // Estructura anidada (información del cliente)
    Nodo *siguiente; // Almacena la dirección del siguiente nodo de la lista
};

// Prototipos de Funciones
void cargar_clientes(Cliente &); // Indicamos la existencia de la función cargar_clientes()
void insertarCola(Nodo *&, Nodo *&,Cliente); // Indicamos la existencia de la función insertarCola()
bool cola_vacia(Nodo *); // Indicamos la existencia de la función cola_vacia()
void suprimirCola(Nodo *&,Nodo *&,Cliente &); // Indicamos la existencia de la función suprimirCola()

int main(){
    Nodo *frente = NULL; // Al iniciar, el puntero frente es NULL porque la cola está vacía (No hay primer elemento)
    Nodo *fin = NULL; // Al iniciar, el puntero fin es NULL porque no hay elementos en la cola (No hay último elemento)
    Cliente c; // Declaramos la variable de tipo estructura donde almacenaremos los datos de los clientes
    char rpt; // Declaramos la variable de tipo carácter donde almacenaremos las respuestas ingresadas por el usuario

    do{
        cargar_clientes(c); // Pedimos al usuario los datos del cliente
        insertarCola(frente,fin,c); // Insertamos el cliente en la cola

        cout<<"\nDesea agregar un nuevo cliente(s/n): ";  // Preguntamos al usuario si desea agregar otro cliente a la cola
        cin>>rpt;
    }while(rpt == 'S' || rpt == 's'); // Mientras el usuario responsa con 'S'||'s' seguimos agregando elementos a la pila

    cout<<"\n===Carga de cliente existosa===\n\n";

    cout<<"\tClientes agregados a cola:\n\n";
    while(frente != NULL){ // Mientras la cola no esté vacía
        suprimirCola(frente,fin,c); // Extraemos el cliente del frente de la cola y lo guardamos en 'c'

        // Mostramos los datos del cliente extraído
        cout<<"Nombre: "<<c.nombre<<endl;
        cout<<"Clave: "<<c.clave<<endl;
        cout<<"Edad: "<<c.edad<<endl;
        cout<<"\n";
    }
    
    return 0;
}

void cargar_clientes(Cliente &c){ // Función que obtiene los datos de los clientes
    cout<<"\tAgregar Nuevo Cliente\n";
    cout<<"Nombre: "; getline(cin>>ws, c.nombre); // Capturamos el nombre del cliente
    cout<<"Clave: "; getline(cin, c.clave); // Capturamos la clave del cliente
    cout<<"Edad: "; cin>>c.edad; // Capturamos la edad del cliente
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"\n";
}

void insertarCola(Nodo *&frente,Nodo *&fin,Cliente c){ // Función que agrega nuevos clientes a la cola
    Nodo *nuevo_nodo = new Nodo(); // Reservamos memoria dinámica para un nuevo nodo

    nuevo_nodo->c = c; // Guardamos el valor que se va a insertar en la cola
    nuevo_nodo->siguiente = NULL; // El nuevo nodo siempre va al final, por eso apunta a NULL

    if(cola_vacia(frente)){ // Si la cola está vacía, el nuevo nodo será el primero
        frente = nuevo_nodo; // El frente apunta al primer elemento de la cola
    }
    else{ // Si ya hay elementos en la cola
        fin->siguiente = nuevo_nodo; // El último nodo ahora apunta al nuevo nodo
    }

    fin = nuevo_nodo; // Actualizamos el puntero fin al nuevo último nodo
    
}

bool cola_vacia(Nodo *frente){ // Función para determinar si la cola está vacía o no
    return frente == NULL; // Si frente es NULL, significa que no hay ningún nodo en la cola
}

void suprimirCola(Nodo *&frente,Nodo *&fin, Cliente &c){ // Función que elimina el primer cliente de la cola
    c = frente->c;

    Nodo *aux = frente; // Creamos un nodo auxiliar que apunta al frente actual (nodo a eliminar)

    if(frente == fin){ // Si sólo hay un nodo en la cola (frente y fin apuntan al mismo elemento)
        frente = NULL; // La cola queda vacía: no hay primer elemento
        fin = NULL; // La cola queda vacía: no hay último elemento
    }
    else{ // Si hay más de un nodo en la cola
        frente = frente->siguiente; // Avanzamos el frente al siguiente nodo
    }
    delete aux; // Liberamos la memoria del nodo eliminado
}
