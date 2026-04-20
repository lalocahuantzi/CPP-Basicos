/*Métodos Constructores y Modificadores (Getters & Setters)*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Punto{ // Definimos la clase Punto
    private: // Atributos (sólo accesibles dentro de la clase)
        int x,y; // Declaramos las variables de tipo entero para almacenar las coordenadas del punto
    public: // Métodos (accesibles desde fuera de la clase)
        Punto(); // Declaramos un constructor por defecto (sin parámetros)
        void setPunto(int,int); // Declaramos el método setPunto() para asignar valores a las coordenadas
        int getPuntoX(); // Declaramos el método getPuntoX() para obtener el valor de x
        int getPuntoY(); // Declaramos el método getPuntoY() para obtener el valor de y
};

// Constructor por defecto, no inicializa los atributos
Punto::Punto(){
}

// Establecemos valores a los atributos
void Punto::setPunto(int _x,int _y){ // Definición del método setPunto()
    x = _x; // Asignamos el valor recibido al atributo x
    y = _y; // Asignamos el valor recibido al atributo y
}

int Punto::getPuntoX(){ // Definición del método getPuntoX()
    return x; // Retornamos el valor del atributo x
}

int Punto::getPuntoY(){ // Definición del método getPuntoY()
    return y; // Retornamos el valor del atributo y
}

int main(){
    Punto punto1; // Creamos el objeto punto1 usando el constructor por defecto

    punto1.setPunto(15,10); // Asignamos valores a las coordenadas del objeto punto1
    cout<<punto1.getPuntoX()<<endl; // Mostramos el valor de la coordenada x
    cout<<punto1.getPuntoY()<<endl; // Mostramos el valor de la coordenada y

    system("pause");
    return 0;
}