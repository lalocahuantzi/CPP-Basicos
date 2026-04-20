/*Creación de Objetos*/

#include <iostream>
#include "Punto.h" // Incluimos la definición de la clase Punto

using namespace std;

int main(int argc, char** argv){
    Punto p1(2,1); // Creación de un objeto estático (se crea en la pila)

    // Mostramos los valores del objeto estático utilizando los métodos get
    cout<<"El valor de X es: "<<p1.getX()<<endl;
    cout<<"El valor de Y es: "<<p1.getY()<<endl;

    Punto* p2 = new Punto(); // Creación de un objeto dinámico (se crea en el heap)

    // Utilizamos el operador -> porque p2 es un puntero a un objeto
    p2->setX(5); // Asignamos valor a X del objeto dinámico
    p2->setY(7); // Asignamos valor a Y del objeto dinámico

    // Mostramos los valores del objeto dinámico utilizando los métodos get
    cout<<"El valor de X es: "<<p2->getX()<<endl;
    cout<<"El valor de Y es: "<<p2->getY()<<endl;

    return 0;
}