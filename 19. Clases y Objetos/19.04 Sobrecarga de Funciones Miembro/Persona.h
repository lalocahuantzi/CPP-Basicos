/*Implementación de la clase Persona*/

#include <iostream>
using namespace std;

class Persona{ // Definimos la clase Persona
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombre; // Declaramos la variable de tipo cadena para almacenar el nombre de la persona
        int edad; // Declaramos la variable de tipo entero para almacenar la edad de la persona
        string dni; // Declaramos la variable de tipo cadena para almacenar el DNI de la persona
    public: // Métodos (accesibles desde fuera de la clase)
        Persona(string _nombre,int _edad){ // Declaramos un constructor que recibe el nombre y la edad de la persona
            nombre = _nombre; // Asignamos el valor recibido al atributo nombre
            edad = _edad; // Asignamos el valor recibido al atributo edad
        }

        Persona(string _dni){ // Declaramos un constructor que recibe el DNI de la persona
            dni = _dni; // Asignamos el valor recibido al atributo dni
        }

        void correr(){ // Definición del método correr() sin parámetros
            cout<<"Soy "<<nombre<<", tengo "<<edad<<" años y estoy corriendo un maratón :)\n"<<endl; // Mostramos un mensaje con el nombre y la edad de la persona
        }

        void correr(int km){ // Definición del método correr() con un parámetro entero
            cout<<"He corrido "<<km<<" kilómetros\n"<<endl; // Mostramos la cantidad de kilómetros recorridos
        }
};