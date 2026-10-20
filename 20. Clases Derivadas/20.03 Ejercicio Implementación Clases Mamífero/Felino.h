#ifndef FELINO_H // Verificamos si FELINO_H no ha sido definido previamente
#define FELINO_H // Definimos FELINO_H para evitar incluir el archivo varias veces

#include <iostream>
#include "Mamifero.h" // Incluimos la definición de la clase Mamifero
using namespace std;

class Felino : public Mamifero{ // Definimos la clase Felino que hereda de Mamifero
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombreCirco; // Declaramos la variable de tipo cadena para almacenar el nombre del circo

    public: // Métodos (accesibles desde fuera de la clase)
    
        // Declaramos un constructor que recibe los datos del felino y llama al constructor de Mamifero
        Felino(int anioNacimiento, string lugarNacimiento, string raza, string nombreCirco) : Mamifero(anioNacimiento, lugarNacimiento, raza){
            this->nombreCirco = nombreCirco; // Asignamos el valor recibido al atributo nombreCirco
        }

        // Declaramos un constructor que recibe los datos del felino y llama al constructor de Mamifero
        Felino(int anioNacimiento, string lugarNacimiento, string raza) : Mamifero(anioNacimiento, lugarNacimiento, raza){

        }

        string imprimirDieta() override{ // Definimos el método imprimirDieta() para mostrar la dieta del felino
            return "La dieta del felino es a base de carne"; // Retornamos la descripción de la dieta del felino
        }

        void setNombreCirco(string nuevoNombre){ // Definimos el método setNombreCirco() para modificar el nombre del circo
            this->nombreCirco = nuevoNombre; // Asignamos el valor recibido al atributo nombreCirco
        }

        string getNombreCirco(){ // Definimos el método getNombreCirco() para obtener el nombre del circo
            return nombreCirco; // Retornamos el valor del atributo nombreCirco
        }
};

#endif
