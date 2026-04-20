#include <iostream>
#include "Tablero.h"
using namespace std;

void Tablero::moverArriba(int n){ // Definición del método moverArriba() para aumentar la coordenada Y
    y += n; // Incrementamos la posición en el eje Y
}

void Tablero::moverAbajo(int n){ // Definición del método moverAbajo() para disminuir la coordenada Y
    y -= n; // Disminuimos la posición en el eje Y
}

void Tablero::moverDerecha(int n){ // Definición del método moverDerecha() para aumentar la coordenada X
    x += n; // Incrementamos la posición en el eje X
}

void Tablero::moverIzquierda(int n){ // Definición del método moverIzquierda() para disminuir la coordenada X
    x -= n; // Disminuimos la posición en el eje X
}

int Tablero::getX(){ // Definición del método getX() para obtener la coordenada X
    return x; // Retornamos el valor actual de X
}

int Tablero::getY(){ // Definición del método getY() para obtener la coordenada Y
    return y; // Retornamos el valor actual de Y
}