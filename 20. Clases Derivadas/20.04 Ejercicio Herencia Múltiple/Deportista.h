#ifndef DEPORTISTA_H // Verificamos si DEPORTISTA_H no ha sido definido previamente
#define DEPORTISTA_H // Definimos DEPORTISTA_H para evitar incluir el archivo varias veces

#include <iostream>
using namespace std;

class Deportista{ // Definimos la clase Deportista
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombreEntrenador; // Declaramos la variable de tipo cadena para almacenar el nombre del entrenador

    public: // Métodos (accesibles desde fuera de la clase)
        Deportista(string nombreEntrenador){ // Declaramos un constructor que recibe el nombre del entrenador
            this->nombreEntrenador = nombreEntrenador; // Asignamos el valor recibido al atributo nombreEntrenador
        }

        void mostrarDatos(){ // Definimos el método mostrarDatos() para mostrar los datos del deportista
            cout<<"Nombre Entrenador: "<<nombreEntrenador<<endl; // Mostramos el nombre del entrenador
        }

        void setNombreEntrenador(string nuevoNombre){ // Definimos el método setNombreEntrenador() para modificar el nombre del entrenador
            this->nombreEntrenador = nuevoNombre; // Asignamos el valor recibido al atributo nombreEntrenador
        }

        string getNombreEntrenador(){ // Definimos el método getNombreEntrenador() para obtener el nombre del entrenador
            return nombreEntrenador; // Retornamos el valor del atributo nombreEntrenador
        }
};

#endif // Finalizamos la protección contra inclusiones múltiples