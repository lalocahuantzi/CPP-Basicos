#ifndef POLIGONO_H // Verificamos si POLIGONO_H no ha sido definido previamente
#define POLIGONO_H // Definimos POLIGONO_H para evitar incluir el archivo varias veces

#include <iostream>
using namespace std;

class Poligono{ // Definimos la clase abstracta Poligono
    public: // Métodos (accesibles desde fuera de la clase)
        virtual float perimetro()=0; // Declaramos un método virtual puro para calcular el perímetro
        virtual float area()=0; // Declaramos un método virtual puro para calcular el área

        virtual ~Poligono() = default; // Declaramos el destructor virtual de la clase Poligono
};

#endif // Finalizamos la protección contra inclusiones múltiples