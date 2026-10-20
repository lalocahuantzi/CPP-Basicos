#ifndef ARREGLO_H // Verificamos si ARREGLO_H no ha sido definido previamente
#define ARREGLO_H // Definimos ARREGLO_H para evitar incluir el archivo varias veces

#include <iostream>
using namespace std;

template <class T> // Declaramos una plantilla de clase que utiliza un tipo de dato genérico
class Arreglo{ // Definimos la clase genérica Arreglo

    private: // Atributos (sólo accesibles dentro de la clase)
        T* arreglo; // Declaramos un puntero a un arreglo dinámico de elementos de tipo genérico T
        int indice; // Declaramos la variable de tipo entero para almacenar el índice del siguiente elemento
        int nElementos; // Declaramos la variable de tipo entero para almacenar la capacidad del arreglo
    
    public: // Métodos (accesibles desde fuera de la clase)
        Arreglo(int n){ // Declaramos un constructor que recibe la capacidad del arreglo
            arreglo = new T[n]; // Creamos dinámicamente un arreglo de elementos de tipo genérico T
            indice = 0; // Inicializamos el índice en la primera posición del arreglo
            nElementos = n; // Almacenamos la capacidad del arreglo
        }

        ~Arreglo(){ // Declaramos el destructor de la clase Arreglo
            delete [] arreglo; // Liberamos la memoria del arreglo dinámico
        }

        void agregar(T elemento){ // Definimos el método agregar() para añadir un nuevo elemento al arreglo
            arreglo[indice++] = elemento; // Asignamos el elemento a la posición actual e incrementamos el índice
        }

        bool arregloLleno(){ // Definimos el método arregloLleno() para comprobar si el arreglo está lleno
            if(indice>=nElementos){ // Verificamos si el índice ha alcanzado la capacidad del arreglo
                return true; // Retornamos true si el arreglo está lleno
            }
            else{ // Si el arreglo todavía tiene espacio disponible
                return false; // Retornamos false si el arreglo no está lleno
            }
        }

        void mostrarArreglo(){ // Definimos el método mostrarArreglo() para mostrar los elementos del arreglo
            for(int i=0;i<indice;i++){ // Recorremos el arreglo para mostrar sus elementos
                cout<<"Elemento["<<i<<"]: "<<arreglo[i]<<endl; // Mostramos el elemento en la posición i del arreglo
            }
        }

        void vaciarArreglo(){ // Definimos el método vaciarArreglo() para vaciar el arreglo
            indice = 0; // Reiniciamos el índice para considerar el arreglo vacío
        }
};

#endif // Finalizamos la protección contra inclusiones múltiples