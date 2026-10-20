#ifndef INTERCAMBIO_H // Verificamos si INTERCAMBIO_H no ha sido definido previamente
#define INTERCAMBIO_H // Definimos INTERCAMBIO_H para evitar incluir el archivo varias veces

#include <iostream>
using namespace std;

template <typename T> // Declaramos una plantilla de función que utiliza un tipo de dato genérico
void intercambiar(T &dato1, T &dato2){ // Definimos la función intercambiar() para intercambiar dos valores mediante referencias
    T aux; // Declaramos una variable auxiliar del tipo de dato genérico T
    
    aux = dato1; // Almacenamos el primer valor en la variable auxiliar
    dato1 = dato2; // Asignamos el segundo valor a la primera variable
    dato2 = aux; // Asignamos el valor auxiliar a la segunda variable
}

#endif // Finalizamos la protección contra inclusiones múltiples