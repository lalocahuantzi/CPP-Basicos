/*Implementación de la clase Perro*/

#include <iostream>
using namespace std;

class Perro{ // Definimos la clase Perro
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombre,raza; // Declaramos las variables de tipo cadena para almacenar el nombre y la raza del perro
    public: // Métodos (accesibles desde fuera de la clase)
        Perro(string nombre,string raza){ // Declaramos un constructor que recibe el nombre y la raza del perro
            this->nombre = nombre; // Utilizamos this-> para referirnos al atributo de la clase y asignarle el valor recibido
            this->raza = raza; // Utilizamos this-> para referirnos al atributo de la clase y asignarle el valor recibido
        }

        ~Perro(){ // Declaramos el destructor de la clase Perro (se ejecuta automáticamente al destruir el objeto)

        }
        void mostrarDatos(); // Declaramos el método mostrarDatos() para mostrar los datos del perro
        void jugar(); // Declaramos el método jugar() para indicar que el perro está jugando
};