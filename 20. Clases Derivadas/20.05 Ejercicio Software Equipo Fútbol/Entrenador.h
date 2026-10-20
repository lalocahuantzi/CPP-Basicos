#include <iostream>
#include "Persona.h" // Incluimos la definición de la clase Persona
using namespace std;

class Entrenador : public Persona{
    private: // Atributos (sólo accesibles dentro de la clase)
        string estrategia; // Declaramos la variable de tipo cadena para almacenar la estrategia del entrenador

    public: // Métodos (accesibles desde fuera de la clase)

        // Declaramos un constructor que recibe los datos del entrenador y llama al constructor de Persona
        Entrenador(string nombre, string apellido, int edad, string estrategia) : Persona(nombre, apellido, edad){
            this->estrategia = estrategia; // Asignamos el valor recibido al atributo estrategia
        }

        ~Entrenador(){ // Declaramos el destructor de la clase Entrenador

        }
    
        void partidoFutbol() override{ // Definimos el método partidoFutbol() para mostrar la participación del entrenador
            cout<<"Dirige el partido de fútbol"<<endl; // Mostramos la participación del entrenador en el partido
        }

        void entrenamiento() override{ // Definimos el método entrenamiento() para mostrar la participación del entrenador
            cout<<"Dirige el entrenamiento"<<endl; // Mostramos la participación del entrenador en el entrenamiento
        }

        void planificarEntrenamiento(){ // Definimos el método planificarEntrenamiento() para mostrar la acción de planificar el entrenamiento
            cout<<"Planifica el entrenamiento"<<endl; // Mostramos la acción de planificar el entrenamiento
        }
};