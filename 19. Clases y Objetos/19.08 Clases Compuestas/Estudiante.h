/*Implementación de la clase Estudiante (Utilizando clases compuestas)*/

#include <iostream>
#include "Expediente.h" // Incluimos la definición de la clase Expediente
#include "Direccion.h" // Incluimos la definición de la clase Direccion
using namespace std;

class Estudiante{ // Definimos la clase Estudiante
    private: // Atributos (sólo accesibles dentro de la clase)
        string codigo; // Declaramos la variable de tipo cadena para almacenar el código del estudiante
        float promedio; // Declaramos la variable de tipo flotante para almacenar el promedio del estudiante
        Expediente exp; // Declaramos un objeto de tipo Expediente como atributo de la clase Estudiante (clase compuesta)
        Direccion dir; // Declaramos un objeto de tipo Direccion como atributo de la clase Estudiante (clase compuesta)
    public: // Métodos (accesibles desde fuera de la clase)
        // Declaramos un constructor que recibe los datos del estudiante y utiliza parte de ellos para inicializar los objetos exp y dir
        Estudiante(string codigo,float promedio,int nroExpediente,string direccion) : exp(nroExpediente),dir(direccion){
            this->codigo = codigo; // Asignamos el valor recibido al atributo codigo
            this->promedio = promedio; // Asignamos el valor recibido al atributo promedio
        }
    
        void mostrardatos(){ // Definición del método mostrardatos() para mostrar la información del estudiante
            cout<<"Código: "<<codigo<<endl; // Mostramos el código del estudiante
            cout<<"Promedio: "<<promedio<<endl; // Mostramos el promedio del estudiante
            cout<<"Número de Expediente: "<<exp.getNroexpediente()<<endl; // Mostramos el número de expediente accediendo al objeto exp
            cout<<"Dirección: "<<dir.getDireccion()<<endl; // Mostramos la dirección accediendo al objeto dir
        }
};
