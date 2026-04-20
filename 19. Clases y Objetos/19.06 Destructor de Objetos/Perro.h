/*Implementación de la clase Perro*/

#include <iostream>
using namespace std;

class Perro{ // Definimos la clase Perro
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombre,raza; // Declaramos las variables de tipo cadena para almacenar el nombre y la raza del perro
    public: // Métodos (accesibles desde fuera de la clase)
        Perro(string _nombre,string _raza){ // Declaramos un constructor que recibe el nombre y la raza del perro
            nombre = _nombre; // Asignamos el valor recibido al atributo nombre
            raza = _raza; // Asignamos el valor recibido al atributo raza
        }

        ~Perro(){ // Declaramos el destructor de la clase Perro (se ejecuta automáticamente al destruir el objeto)

        }
        void mostrarDatos(); // Declaramos el método mostrarDatos() para mostrar los datos del perro
        void jugar(); // Declaramos el método jugar() para mostrar que el perro está jugando
};