#ifndef PERSONA_H // Verificamos si PERSONA_H no ha sido definido previamente
#define PERSONA_H // Definimos PERSONA_H para evitar incluir el archivo varias veces

#include <iostream>
using namespace std;

class Persona{ // Definimos la clase abstracta Persona
    protected: // Atributos (accesibles dentro de la clase y sus clases derivadas)
        string nombre; // Declaramos la variable de tipo cadena para almacenar el nombre
        string apellido; // Declaramos la variable de tipo cadena para almacenar el apellido
        int edad; // Declaramos la variable de tipo entero para almacenar la edad
    
    public: // Métodos (accesibles desde fuera de la clase)
        Persona(string nombre, string apellido, int edad){ // Declaramos un constructor que recibe los datos de la persona
            this->nombre = nombre; // Asignamos el valor recibido al atributo nombre
            this->apellido = apellido; // Asignamos el valor recibido al atributo apellido
            this->edad = edad; // Asignamos el valor recibido al atributo edad
        }

        virtual ~Persona(){ // Declaramos el destructor virtual de la clase Persona

        }

        string getNombre(){ // Definimos el método getNombre() para obtener el nombre
            return nombre; // Retornamos el valor del atributo nombre
        }

        string getApellido(){ // Definimos el método getApellido() para obtener el apellido
            return apellido; // Retornamos el valor del atributo apellido
        }

        int getEdad(){ // Definimos el método getEdad() para obtener la edad
            return edad; // Retornamos el valor del atributo edad
        }

        void viajar(){ // Definimos el método viajar() para mostrar la acción de viajar
            cout<<"Viajar"<<endl; // Mostramos la acción de viajar
        }

        virtual void partidoFutbol()=0; // Declaramos un método virtual puro para definir la participación en el partido de fútbol
        virtual void entrenamiento()=0; // Declaramos un método virtual puro para definir la participación en el entrenamiento
};

#endif // Finalizamos la protección contra inclusiones múltiples