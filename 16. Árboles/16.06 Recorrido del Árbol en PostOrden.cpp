/*Recorrido del Árbol en PostOrden*/

#include <iostream>
#include <stdlib.h>
using namespace std;

struct Nodo{ // Iniciamos la estructura Nodo
    int dato; // Declaramos el campo de tipo entero 'dato'
    Nodo *der; // Almacena la dirección del nodo hijo a la derecha
    Nodo *izq; // Almacena la dirección del nodo hijo a la izquierda
};

void menu(); // Indicamos la existencia de la función menu()
Nodo *crearNodo(int); // Indicamos la existencia de la función crearNodo()
void insertarNodo(Nodo *&,int); // Indicamos la existencia de la función insertarNodo()
void mostrarArbol(Nodo *,int); // Indicamos la existencia de la función mostrarArbol()
bool busqueda(Nodo *,int); // Indicamos la existencia de la función busqueda()
void preOrden(Nodo *arbol); // Indicamos la existencia de la función preOrden()
void inOrden(Nodo *arbol); // Indicamos la existencia de la función inOrden()
void postOrden(Nodo *arbol); // Indicamos la existencia de la función postOrden()

Nodo *arbol = NULL; // Inicializamos el puntero árbol en NULL (El árbol comienza vacío)

int main(){
    menu(); // Ejecutamos la función menu()

    return 0;
}

void menu(){
    // Declaramos las variables de tipo entero donde almacenaremos los datos, las opciones ingresadas por el usuario y el contador
    int dato,opcion,contador=0;

    do{
        cout<<"\t.:MENÚ:."<<endl;
        cout<<"1. Insertar un nuevo nodo"<<endl;
        cout<<"2. Mostrar el árbol completo"<<endl;
        cout<<"3. Buscar un elemento en el árbol"<<endl;
        cout<<"4. Recorrer el árbol en PreOrden"<<endl;
        cout<<"5. Recorrer el árbol en InOrden"<<endl;
        cout<<"6. Recorrer el árbol en PostOrden"<<endl;
        cout<<"7. Salir"<<endl;
        cout<<"Opción: ";
        cin>>opcion; // Capturamos la opción ingresada por el usuario

        switch(opcion){
            case 1: cout<<"\nDigite un número: "; // Solicitamos un dato al usuario para insertarlo dentro del árbol
                    cin>>dato;
                    insertarNodo(arbol,dato); // Llamamos a la función que inserta el nodo en el árbol para que inserte el dato
                    cout<<"\n";
                    system("pause");
                    break;
            case 2: cout<<"\nMostrando el árbol completo:\n\n";
                    mostrarArbol(arbol,contador); // Llamamos a la función que muestra el árbol completo
                    cout<<"\n";
                    system("pause");
                    break;
            case 3: cout<<"\nDigite el elemento a buscar: "; // Solicitamos un dato al usuario para buscarlo dentro del árbol
                    cin>>dato;
                    if(busqueda(arbol,dato) == true){ // Si el dato se encuentra dentro del árbol
                        cout<<"\nElemento "<<dato<<" ha sido encontrado en el árbol\n";
                    }
                    else{ // Si el elemento NO se encuentra dentro del árbol
                        cout<<"\nElemento no encontrado\n";
                    }
                    cout<<"\n";
                    system("pause");
                    break;
            case 4: cout<<"\nRecorrido en PreOrden: ";
                    preOrden(arbol); // Llamamos a la función que recorre el árbol en profundidad - PreOrden
                    cout<<"\n\n";
                    system("pause");
                    break;
            case 5: cout<<"\nRecorrido en InOrden: ";
                    inOrden(arbol); // Llamamos a la función que recorre el árbol en profundidad - InOrden
                    cout<<"\n\n";
                    system("pause");
                    break;
            case 6: cout<<"\nRecorrido en PostOrden: ";
                    postOrden(arbol); // Llamamos a la función que recorre el árbol en profundidad - PostOrden
                    cout<<"\n\n";
                    system("pause");
                    break;
        }
        system("cls"); // Limpiamos la pantalla para volver a mostrar el menú
    }while(opcion != 7); // El ciclo se repite mientras la opción seleccionada sea diferente de 7
}

Nodo *crearNodo(int n){ // Función para crear un nuevo nodo
    Nodo *nuevo_nodo = new Nodo();

    nuevo_nodo->dato = n; // Asignamos el valor ingresado al campo 'dato'
    nuevo_nodo->der = NULL; // Inicializamos el nodo hijo derecho en NULL
    nuevo_nodo->izq = NULL; // Inicializamos el nodo hijo izquierdo en NULL

    return nuevo_nodo; // Se devuelve el nuevo nodo creado
}

void insertarNodo(Nodo *&arbol, int n){ // Función para insertar un nuevo nodo al árbol
    if(arbol == NULL){ // Si el árbol está vacío
        Nodo *nuevo_nodo = crearNodo(n); // Creamos un nuevo nodo con el dato ingresado
        arbol = nuevo_nodo; // El nuevo nodo se convierte en la raíz del árbol
    }
    else{ // Si el árbol ya contiene elementos
        int valorRaiz = arbol->dato; // Guardamos el valor del nodo actual (raíz del subárbol)
        if(n < valorRaiz){ // Si el nuevo dato es menor que el nodo actual
            insertarNodo(arbol->izq,n); // Insertamos el nodo en el subárbol izquierdo
        }
        else{ // Si el nuevo dato es mayor o igual que el nodo actual
            insertarNodo(arbol->der,n); // Insertamos el nodo en el subárbol derecho
        }
    }
}

void mostrarArbol(Nodo *arbol, int cont){ // Función para mostrar el árbol completo
    if(arbol == NULL){ // Si el árbol está vacío NO hay nada que mostrar
        return;
    }
    else{ // Si el árbol contiene elementos
        mostrarArbol(arbol->der,cont+1); // Primero mostramos el subárbol derecho (aumentando el nivel del árbol)
        for(int i=0;i<cont;i++){ // Generamos espacios para representar la profundidad del nodo en el árbol
            cout<<"  ";
        }
        cout<<arbol->dato<<endl; // Mostramos el dato del nodo actual
        mostrarArbol(arbol->izq,cont+1); // Finalmente mostramos el subárbol izquierdo (aumentando el nivel del árbol)
    }
}

bool busqueda(Nodo *arbol, int n){ // Función para buscar un elemento dentro del árbol
    if(arbol == NULL){ // Si el árbol está vacío NO hay nada que buscar
        return false;
    }
    else if(arbol->dato == n){ // Si el dato del nodo actual es igual al dato que buscamos
        return true;
    }
    else if(n<arbol->dato){ // Si el dato que buscamos es menor que el nodo actual
        return busqueda(arbol->izq,n); // Buscamos recursivamente en el subárbol izquierdo
    }
    else{ // Si el dato que buscamos es mayor que el nodo actual
        return busqueda(arbol->der,n); // Buscamos recursivamente en el subárbol derecho
    }
}

void preOrden(Nodo *arbol){ // Función para recorrer el árbol en profundidad - PreOrden
    if(arbol == NULL){ // Si el árbol está vacío NO hay nada que recorrer
        return;
    }
    else{
        cout<<arbol->dato<<" - "; // Mostramos el dato del nodo actual (raíz)
        preOrden(arbol->izq); // Recorremos el subárbol izquierdo
        preOrden(arbol->der); // Recorremos el subárbol derecho
    }
}

void inOrden(Nodo *arbol){ // Función para recorrer el árbol en profundidad - InOrden
    if(arbol == NULL){ // Si el árbol está vacío NO hay nada que recorrer
        return;
    }
    else{
        inOrden(arbol->izq); // Recorremos el subárbol izquierdo
        cout<<arbol->dato<<" - "; // Mostramos el dato del nodo actual (raíz)
        inOrden(arbol->der); // Recorremos el subárbol derecho
    }
}

void postOrden(Nodo *arbol){ // Función para recorrer el árbol en profundidad - PostOrden
    if(arbol == NULL){ // Si el árbol está vacío NO hay nada que recorrer
        return;
    }
    else{
        postOrden(arbol->izq); // Recorremos el subárbol izquierdo
        postOrden(arbol->der); // Recorremos el subárbol derecho
        cout<<arbol->dato<<" - "; // Mostramos el dato del nodo actual (raíz)
    }
}