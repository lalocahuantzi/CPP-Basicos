/*Plantilla de Clases*/

#include <iostream>
#include "EjemploPlantilla.h" // Incluimos la definición de la clase EjemploPlantilla
using namespace std;

int main(int argc, char** argv){
    EjemploPlantilla <int, float> ob1(5,9.87); // Creamos un objeto EjemploPlantilla con un dato entero y otro flotante

    ob1.mostrarDatos(); // Mostramos los datos del objeto

    ob1.setDato1(10); // Modificamos el valor del primer dato
    ob1.setDato2(8.7); // Modificamos el valor del segundo dato

    cout<<endl;

    ob1.mostrarDatos(); // Mostramos los datos del objeto

    return 0;
}