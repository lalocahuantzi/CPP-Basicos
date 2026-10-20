#ifndef MAMIFERO_H // Verificamos si MAMIFERO_H no ha sido definido previamente
#define MAMIFERO_H // Definimos MAMIFERO_H para evitar incluir el archivo varias veces

#include <iostream>
using namespace std;

class Mamifero{ // Definimos la clase abstracta Mamifero
    private: // Atributos (sólo accesibles dentro de la clase)
        int anioNacimiento; // Declaramos la variable de tipo entero para almacenar el año de nacimiento
        string lugarNacimiento, raza; // Declaramos las variables de tipo cadena para almacenar el lugar de nacimiento y la raza


    public: // Métodos (accesibles desde fuera de la clase)
        Mamifero(int anioNacimiento, string lugarNacimiento, string raza){ // Declaramos un constructor que recibe los datos del mamífero
            this->anioNacimiento = anioNacimiento; // Asignamos el valor recibido al atributo anioNacimiento
            this->lugarNacimiento = lugarNacimiento; // Asignamos el valor recibido al atributo lugarNacimiento
            this->raza = raza; // Asignamos el valor recibido al atributo raza
        }

        virtual string imprimirDieta()=0; // Declaramos un método virtual puro para imprimir la dieta del mamífero

        virtual ~Mamifero() = default; // Declaramos el destructor virtual de la clase Mamifero

        int getAnioNacimiento(){ // Definimos el método getAnioNacimiento() para obtener el año de nacimiento
            return anioNacimiento; // Retornamos el valor del atributo anioNacimiento
        }

        string getLugarNacimiento(){ // Definimos el método getLugarNacimiento() para obtener el lugar de nacimiento
            return lugarNacimiento; // Retornamos el valor del atributo lugarNacimiento
        }

        string getRaza(){ // Definimos el método getRaza() para obtener la raza
            return raza; // Retornamos el valor del atributo raza
        }
};

#endif // Finalizamos la protección contra inclusiones múltiples