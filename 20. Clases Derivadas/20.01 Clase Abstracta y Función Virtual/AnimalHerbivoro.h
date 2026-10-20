#include <iostream>
#include "Animal.h" // Incluimos la definición de la clase Animal
using namespace std;

class AnimalHerbivoro : public Animal{ // Definimos la clase AnimalHerbivoro que hereda de Animal
    public: // Métodos (accesibles desde fuera de la clase)
        void alimentarse(){ // Definimos el método alimentarse() para indicar cómo se alimenta el animal herbívoro
            cout<<"El animal herbivoro se alimenta de hierba"<<endl; // Mostramos la forma de alimentación del animal herbívoro
        }
};