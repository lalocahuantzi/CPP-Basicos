#include <iostream>
#include "Persona.h" // Incluimos la definición de la clase Persona
using namespace std;

class Futbolista : public Persona{
    private: // Atributos (sólo accesibles dentro de la clase)
        int dorsal; // Declaramos la variable de tipo entero para almacenar el número de dorsal
        string posicion; // Declaramos la variable de tipo cadena para almacenar la posición del futbolista

    public: // Métodos (accesibles desde fuera de la clase)
        Futbolista(string nombre, string apellido, int edad, int dorsal, string posicion) : Persona(nombre, apellido, edad){ // Declaramos un constructor que recibe los datos del futbolista y llama al constructor de Persona
            this->dorsal = dorsal; // Asignamos el valor recibido al atributo dorsal
            this->posicion = posicion; // Asignamos el valor recibido al atributo posicion
        }

        ~Futbolista(){ // Declaramos el destructor de la clase Futbolista

        }

        void partidoFutbol() override{ // Definimos el método partidoFutbol() para mostrar la participación del futbolista
            cout<<"Juega el partido de fútbol"<<endl; // Mostramos la participación del futbolista en el partido
        }

        void entrenamiento() override{ // Definimos el método entrenamiento() para mostrar la participación del futbolista
            cout<<"Entrena"<<endl; // Mostramos la participación del futbolista en el entrenamiento
        }

        void entrevista(){ // Definimos el método entrevista() para mostrar la acción de dar una entrevista
            cout<<"Da una entrevista"<<endl; // Mostramos la acción de dar una entrevista
        }
};