/*Clases Compuestas*/

#include <iostream>
#include "Estudiante.h" // Incluimos la definición de la clase Estudiante

using namespace std;

int main(int argc, char** argv){
    // Creamos dinámicamente un objeto de tipo Estudiante, pasando los datos necesarios para inicializar sus atributos y las clases que lo componen
    Estudiante* estudiante1 = new Estudiante("34FG",15.6,56,"Erial #27");

    estudiante1->mostrardatos(); // Llamamos al método mostrardatos() para mostrar la información completa del estudiante

    return 0;
}