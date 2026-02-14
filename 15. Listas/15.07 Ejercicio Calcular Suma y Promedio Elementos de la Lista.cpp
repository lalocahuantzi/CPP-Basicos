/*Crear una lista que almacene "n" números reales y calcular su suma y su promedio*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Nodo{ // Iniciamos la estructura Nodo
    float dato; // Declaramos el campo de tipo entero 'dato'
    Nodo *siguiente; // Almacena la dirección del siguiente nodo de la lista
};
void insertarLista(Nodo *&,float); // Indicamos la existencia de la función insertarLista()
void mostrarLista(Nodo *); // Indicamos la existencia de la función mostrarLista()
void calcularSumaPromedio(Nodo *); // Indicamos la existencia de la función calcularSumaPromedio()

int main(){
    Nodo *lista = NULL; // Inicializamos el puntero lista en NULL (NO apunta a ningún nodo porque la lista está vacía)
    float dato; // Declaramos la variable de tipo flotante donde almacenaremos los datos ingresados por el usuario
    char respuesta; // Declaramos la variable de tipo carácter donde almacenaremos las respuestas ingresadas por el usuario

    do{
        cout<<"Digite un número: "; cin>>dato; // Solicitamos un dato al usuario para insertarlo dentro de la lista
        insertarLista(lista,dato);

        cout<<"\nDesea agregar otro nodo (s/n): "; cin>>respuesta; // Preguntamos al usuario si desea agregar otro elemento a la lista

    }while(respuesta == 's' || respuesta == 'S'); // Mientras el usuario responsa con 'S'||'s' seguimos agregando elementos a la lista

    cout<<"\nElementos de la lista:\n";
    mostrarLista(lista); // Ejecutamos la función mostrarLista()

    calcularSumaPromedio(lista); // Ejecutamos la función calcularSumaPromedio()

    getch();
    return 0;
}

void insertarLista(Nodo *&lista,float n){ // Función que inserta elementos a la lista
    Nodo *nuevo_nodo = new Nodo(); // Reservamos memoria dinámica para un nuevo nodo
    Nodo *aux; // Declaramos un puntero auxiliar para recorrer la lista

    nuevo_nodo->dato = n; // Asignamos el valor al nuevo nodo
    nuevo_nodo->siguiente = NULL; // El nuevo nodo siempre apunta a NULL (último elemento de la lista)

    if(lista == NULL){ // Si la lista está vacía
        lista = nuevo_nodo; // El nuevo nodo pasa a ser el primer elemento de la lista
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
    Nodo *actual = lista; // Puntero auxiliar para recorrer la lista

    while(actual != NULL){ // Recorremos la lista hasta llegar al final
        cout<<actual->dato<<" -> "; // Imprimimos el dato del nodo actual
        actual = actual->siguiente; // Avanzamos al siguiente nodo
    }
    cout<<"NULL"; // Indicamos el final de la lista
}

void calcularSumaPromedio(Nodo *lista){ // Función que calcula la suma y el promedio de los elementos de la lista
    float suma=0,promedio; // Declaramos las variables de tipo flotante para calcular la suma y calcular el promedio
    int contador = 0;// Declaramos la variable de tipo entero para llevar el contador de elementos de la lista

    while(lista != NULL){ // Recorremos la lista completa
        suma += lista->dato; // Acumulamos el valor del nodo actual
        contador++; // Incrementamos el número de elementos
        lista = lista->siguiente; // Avanzamos al siguiente nodo
    }
    promedio = suma/contador; // Calculamos el promedio de los elementos

    cout<<"\n\nLa suma es: "<<suma<<endl;
    cout<<"El promedio es: "<<promedio<<endl;
}