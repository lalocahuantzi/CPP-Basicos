#include <iostream>
#include "Poligono.h" // Incluimos la definición de la clase Poligono
using namespace std;

class Rectangulo : public Poligono{ // Definimos la clase Rectangulo que hereda de Poligono
    private: // Atributos (sólo accesibles dentro de la clase)
        float base, altura; // Declaramos las variables de tipo flotante para almacenar la base y altura del rectángulo

    public: // Métodos (accesibles desde fuera de la clase)
        Rectangulo(float base, float altura){ // Declaramos un constructor que recibe la base y altura del rectángulo
            this->base = base; // Asignamos el valor recibido al atributo base
            this->altura = altura; // Asignamos el valor recibido al atributo altura
        }

        float perimetro() override{ // Definimos el método perimetro() para calcular el perímetro del rectángulo
            float per = (2*base) + (2*altura); // Calculamos el perímetro del rectángulo
            return per; // Retornamos el perímetro calculado
        }

        float area() override{ // Definimos el método area() para calcular el área del rectángulo
            float area = base*altura; // Calculamos el área del rectángulo
            return area; // Retornamos el área calculada
        }
};