/*Implementación de la clase Atleta*/

#include <iostream>
using namespace std;

class Atleta{ // Definimos la clase Atleta
    private: // Atributos (sólo accesibles dentro de la clase)
        int numeroAtleta; // Declaramos la variable de tipo entero para almacenar el número del atleta
        string nombre; // Declaramos la variable de tipo cadena para almacenar el nombre del atleta
        float tiempoCarrera; // Declaramos la variable de tipo flotante para almacenar el tiempo de carrera
    public: // Métodos (accesibles desde fuera de la clase)
        Atleta(int numeroAtleta,string nombre,float tiempoCarrera){ // Declaramos un constructor que recibe los datos del atleta
            this->numeroAtleta = numeroAtleta; // Asignamos el valor recibido al atributo numeroAtleta
            this->nombre = nombre; // Asignamos el valor recibido al atributo nombre
            this->tiempoCarrera = tiempoCarrera; // Asignamos el valor recibido al atributo tiempoCarrera
        }

        Atleta(){ // Declaramos el constructor por defecto

        }

        ~Atleta(){ // Declaramos el destructor de la clase Atleta

        }

        float getTiempoCarrera(); // Declaramos el método getTiempoCarrera() para obtener el tiempo de carrera
        void mostrarDatos(); // Declaramos el método mostrarDatos() para mostrar los datos del atleta
        static int indiceGanador(Atleta atletas[],int n); // Declaramos un método static para obtener el índice del atleta con menor tiempo
};