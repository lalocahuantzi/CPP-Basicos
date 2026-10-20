#include <iostream>
#include <math.h>
#include "Poligono.h" // Incluimos la definición de la clase Poligono
using namespace std;

class Triangulo : public Poligono{ // Definimos la clase Triangulo que hereda de Poligono
    private: // Atributos (sólo accesibles dentro de la clase)
        float lado1, lado2, lado3; // Declaramos las variables de tipo flotante para almacenar los tres lados del triángulo

    public: // Métodos (accesibles desde fuera de la clase)
        Triangulo(float lado1, float lado2, float lado3){ // Declaramos un constructor que recibe los tres lados del triángulo
            this->lado1 = lado1; // Asignamos el valor recibido al atributo lado1
            this->lado2 = lado2; // Asignamos el valor recibido al atributo lado2
            this->lado3 = lado3; // Asignamos el valor recibido al atributo lado3
        }

        float perimetro() override{ // Definimos el método perimetro() para calcular el perímetro del triángulo
            float per = lado1 + lado2 + lado3; // Calculamos el perímetro del triángulo
            return per; // Retornamos el perímetro calculado
        }

        float area() override{ // Definimos el método area() para calcular el área del triángulo
            float s = (lado1 + lado2 + lado3) / 2; // Calculamos el semiperímetro del triángulo
            float area = sqrt(s*(s-lado1)*(s-lado2)*(s-lado3)); // Calculamos el área mediante la fórmula de Herón
            return area; // Retornamos el área calculada
        }
};