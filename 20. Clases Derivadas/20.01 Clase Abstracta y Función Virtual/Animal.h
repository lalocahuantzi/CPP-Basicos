#ifndef ANIMAL_H  // Verificamos si ANIMAL_H no ha sido definido previamente
#define ANIMAL_H // Definimos ANIMAL_H para evitar incluir el archivo varias veces

#include <iostream>
#include "SerVivo.h" // Incluimos la definición de la clase SerVivo
using namespace std;

class Animal : public SerVivo{ // Definimos la clase Animal que hereda de SerVivo

};

#endif // Finalizamos la protección contra inclusiones múltiples