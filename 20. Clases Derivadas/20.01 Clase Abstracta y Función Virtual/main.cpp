#include <iostream>
#include "Planta.h" // Incluimos la definición de la clase Planta
#include "AnimalCarnivoro.h" // Incluimos la definición de la clase AnimalCarnivoro
#include "AnimalHerbivoro.h" // Incluimos la definición de la clase AnimalHerbivoro
using namespace std;

int main(int argc, char** argv){
    
    Planta* planta1 = new Planta(); // Creamos dinámicamente un objeto Planta
    planta1->alimentarse(); // Llamamos al método alimentarse() de la planta

    AnimalCarnivoro* animal1 = new AnimalCarnivoro(); // Creamos dinámicamente un objeto AnimalCarnivoro
    animal1->alimentarse(); // Llamamos al método alimentarse() del animal carnívoro

    AnimalHerbivoro* animal2 = new AnimalHerbivoro(); // Creamos dinámicamente un objeto AnimalHerbivoro
    animal2->alimentarse(); // Llamamos al método alimentarse() del animal herbívoro

    delete planta1; // Liberamos la memoria del objeto Planta
    delete animal1; // Liberamos la memoria del objeto AnimalCarnivoro
    delete animal2; // Liberamos la memoria del objeto AnimalHerbivoro

    return 0;
}