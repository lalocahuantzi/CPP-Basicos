#ifndef GATODOMESTICO_H // Verificamos si FELINO_H no ha sido definido previamente
#define GATODOMESTICO_H // Definimos FELINO_H para evitar incluir el archivo varias veces

#include <iostream>
#include "Felino.h" // Incluimos la definición de la clase Felino
using namespace std;

class GatoDomestico : public Felino{ // Definimos la clase GatoDomestico que hereda de Felino
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombreDuenio; // Declaramos la variable de tipo cadena para almacenar el nombre del dueño

    public: // Métodos (accesibles desde fuera de la clase)

        // Declaramos un constructor que recibe los datos del gato y llama al constructor de Felino
        GatoDomestico(int anioNacimiento, string lugarNacimiento, string raza, string nombreDuenio) : Felino(anioNacimiento, lugarNacimiento, raza){
            this->nombreDuenio = nombreDuenio; // Asignamos el valor recibido al atributo nombreDuenio
        }

        string imprimirDieta() override{ // Definimos el método imprimirDieta() para mostrar la dieta del gato
            return "La dieta del gato es con Whiskas"; // Retornamos la descripción de la dieta del gato
        }

        void setNombreDuenio(string nuevoNombre){ // Definimos el método setNombreDuenio() para modificar el nombre del dueño
            this->nombreDuenio = nuevoNombre; // Asignamos el valor recibido al atributo nombreDuenio
        }

        string getNombreDuenio(){ // Definimos el método getNombreDuenio() para obtener el nombre del dueño
            return nombreDuenio; // Retornamos el valor del atributo nombreDuenio
        }
};

#endif