/*Implementación de la clase Tablero*/

#include <iostream>
using namespace std;

class Tablero{ // Definimos la clase Tablero
    private: // Atributos (sólo accesibles dentro de la clase)
        int x,y; // Declaramos las variables de tipo entero para almacenar las coordenadas en el tablero
    public: // Métodos (accesibles desde fuera de la clase)
        Tablero(int x,int y){ // Declaramos un constructor que recibe las dos coordenadas iniciales en el tablero
            this->x = x; // Asignamos el valor recibido al atributo x
            this->y = y; // Asignamos el valor recibido al atributo y
        }

        void moverArriba(int); // Declaramos el método moverArriba() para desplazar el objeto hacia arriba
        void moverAbajo(int); // Declaramos el método moverAbajo() para desplazar el objeto hacia abajo
        void moverDerecha(int); // Declaramos el método moverDerecha() para desplazar el objeto hacia la derecha
        void moverIzquierda(int); // Declaramos el método moverIzquierda() para desplazar el objeto hacia la izquierda
        int getX(); // Declaramos el método getX() para obtener la coordenada X
        int getY(); // Declaramos el método getY() para obtener la coordenada Y
};