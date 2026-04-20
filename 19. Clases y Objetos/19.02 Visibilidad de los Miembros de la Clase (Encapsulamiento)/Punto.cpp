#include "Punto.h" // Incluimos la declaración de la clase

// Método para establecer el valor del atributo x
void Punto::setX(int valorX){
    x = valorX; // Asignamos el valor recibido al atributo x
}

// Método para establecer el valor del atributo y
void Punto::setY(int valorY){
    y = valorY; // Asignamos el valor recibido al atributo y
}

// Método para obtener el valor del atributo x
int Punto::getX(){
    return x; // Retornamos el valor actual de x
}

// Método para obtener el valor del atributo y
int Punto::getY(){
    return y; // Retornamos el valor actual de y
}