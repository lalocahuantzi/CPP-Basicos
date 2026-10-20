#include <iostream>
#include "SerVivo.h" // Incluimos la definición de la clase SerVivo
using namespace std;

class Planta : public SerVivo{ // Definimos la clase Planta que hereda de SerVivo
    public: // Métodos (accesibles desde fuera de la clase)
        void alimentarse(){ // Definimos el método alimentarse() para indicar cómo se alimentan las plantas
            cout<<"La planta se alimenta mediante fotosintesis"<<endl; // Mostramos la forma de alimentación de las plantas
        }
};