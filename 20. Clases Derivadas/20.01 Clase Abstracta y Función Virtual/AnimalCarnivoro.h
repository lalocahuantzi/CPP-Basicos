#include <iostream>
#include "Animal.h" // Incluimos la definición de la clase Animal
using namespace std;

class AnimalCarnivoro : public Animal{ // Definimos la clase AnimalCarnivoro que hereda de Animal
    public: // Métodos (accesibles desde fuera de la clase)
        void alimentarse(){ // Definimos el método alimentarse() para indicar cómo se alimenta el animal carnívoro
            cout<<"El animal carnivoro se alimenta de carne"<<endl; // Mostramos la forma de alimentación del animal carnívoro
        }
};
