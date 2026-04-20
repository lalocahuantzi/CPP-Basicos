/*Implementación de la clase Expediente*/

#include <iostream>
using namespace std;

class Expediente{ // Definimos la clase Expediente
    private: // Atributos (sólo accesibles dentro de la clase)
        int nroExpediente; // Declaramos la variable de tipo entero para almacenar el número de expediente
    public: // Métodos (accesibles desde fuera de la clase)
        Expediente(int nroExpediente){ // Declaramos un constructor que recibe el número de expediente
            this->nroExpediente = nroExpediente; // Asignamos el valor recibido al atributo nroExpediente
        }
        
        Expediente(){ // Declaramos el constructor por defecto

        }

        ~Expediente(){ // Declaramos el destructor de la clase Expediente

        }

        int getNroexpediente(){ // Declaramos el método getNroexpediente() para obtener el número de expediente
            return nroExpediente; // Retornamos el valor del atributo nroExpediente
        }
};