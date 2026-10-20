#include <iostream>
#include "Persona.h" // Incluimos la definición de la clase Persona
using namespace std;

class Medico : public Persona{ // Definimos la clase Medico que hereda de Persona
    private: // Atributos (sólo accesibles dentro de la clase)
        string titulacion; // Declaramos la variable de tipo cadena para almacenar la titulación del médico
        int aniosExperiencia; // Declaramos la variable de tipo entero para almacenar los años de experiencia
    
    public: // Métodos (accesibles desde fuera de la clase)

        // Declaramos un constructor que recibe los datos del médico y llama al constructor de Persona
        Medico(string nombre, string apellido, int edad, string titulacion, int aniosExperiencia) : Persona(nombre, apellido, edad){
            this->titulacion = titulacion; // Asignamos el valor recibido al atributo titulacion
            this->aniosExperiencia = aniosExperiencia; // Asignamos el valor recibido al atributo aniosExperiencia
        }

        ~Medico(){ // Declaramos el destructor de la clase Medico

        }

        void partidoFutbol() override{ // Definimos el método partidoFutbol() para mostrar la participación del médico
            cout<<"Da asistencia en el partido de fútbol"<<endl; // Mostramos la participación del médico en el partido
        }

        void entrenamiento() override{ // Definimos el método entrenamiento() para mostrar la participación del médico
            cout<<"Da asistencia en el entrenamiento"<<endl; // Mostramos la participación del médico en el entrenamiento
        }

        void curarLesion(){ // Definimos el método curarLesion() para mostrar la acción de curar una lesión
            cout<<"Curar lesión"<<endl; // Mostramos la acción de curar una lesión
        }
};
