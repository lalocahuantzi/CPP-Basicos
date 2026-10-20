#ifndef SERVIVO_H  // Verificamos si SERVIVO_H no ha sido definido previamente
#define SERVIVO_H // Definimos SERVIVO_H para evitar incluir el archivo varias veces

#include <iostream>
using namespace std;

class SerVivo{ // Definimos la clase abstracta SerVivo
    public: // Métodos (accesibles desde fuera de la clase)
        virtual void alimentarse() = 0; // Declaramos un método virtual puro para definir la alimentación de los seres vivos
};

#endif // Finalizamos la protección contra inclusiones múltiples