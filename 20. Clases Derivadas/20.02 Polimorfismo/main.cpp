#include <iostream>
#include "Poligono.h" // Incluimos la definición de la clase Poligono
#include "Rectangulo.h" // Incluimos la definición de la clase Rectangulo
#include "Triangulo.h" // Incluimos la definición de la clase Triangulo
using namespace std;

int main(int argc, char** argv){
    Poligono* poligonos[2]; // Declaramos un arreglo de punteros a objetos de la clase Poligono

    poligonos[0] = new Rectangulo(7,4); // Creamos dinámicamente un objeto Rectangulo y lo asignamos a la primera posición del arreglo
    poligonos[1] = new Triangulo(3,4,4); // Creamos dinámicamente un objeto Triangulo y lo asignamos a la segunda posición del arreglo

    for(int i=0;i<2;i++){ // Recorremos el arreglo para mostrar el área y perímetro de cada polígono
        cout<<"Area: "<<poligonos[i]->area()<<endl; // Mostramos el área del polígono
        cout<<"Perimetro: "<<poligonos[i]->perimetro()<<endl; // Mostramos el perímetro del polígono
    }

    delete poligonos[0]; // Liberamos la memoria del objeto Rectangulo
    delete poligonos[1]; // Liberamos la memoria del objeto Triangulo

    return 0;
}