/*Implementación de la clase Cuadrilatero*/

#include <iostream>
using namespace std;

class Cuadrilatero{ // Definimos la clase Cuadrilatero
    private: // Atributos (sólo accesibles dentro de la clase)
        float lado1,lado2; // Declaramos las variables de tipo flotante para almacenar los lados del cuadrilátero
    public: // Métodos (accesibles desde fuera de la clase)
        Cuadrilatero(float lado1,float lado2){ // Declaramos un constructor que recibe dos lados del cuadrilátero
            this->lado1 = lado1; // Asignamos el valor recibido al atributo lado1
            this->lado2 = lado2; // Asignamos el valor recibido al atributo lado2
        }

        Cuadrilatero(float lado){ // Declaramos un constructor que recibe un solo lado (caso de un cuadrado)
            this->lado1 = this->lado2 = lado; // Asignamos el mismo valor a ambos lados
        }

        float obtenerPerimetro(); // Declaramos el método obtenerPerimetro() para calcular el perímetro
        float obtenerArea(); // Declaramos el método obtenerArea() para calcular el área
};