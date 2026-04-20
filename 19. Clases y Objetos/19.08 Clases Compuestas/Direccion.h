/*Implementación de la clase Direccion*/

#include <iostream>
using namespace std;

class Direccion{ // Definimos la clase Direccion
    private: // Atributos (sólo accesibles dentro de la clase)
        string direccion; // Declaramos la variable de tipo cadena para almacenar la dirección
    public: // Métodos (accesibles desde fuera de la clase)
        Direccion(string direccion){ // Declaramos un constructor que recibe la dirección
            this->direccion = direccion; // Asignamos el valor recibido al atributo direccion
        }

        Direccion(){ // Declaramos el constructor por defecto

        }

        ~Direccion(){ // Declaramos el destructor de la clase Direccion

        }

        string getDireccion(){ // Declaramos el método getDireccion() para obtener la dirección
            return direccion; // Retornamos el valor del atributo direccion
        }
};