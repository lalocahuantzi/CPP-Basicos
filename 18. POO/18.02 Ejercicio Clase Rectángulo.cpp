/*Construya una clase llamada Rectangulo que tenga los siguientes componentes ->
atributos: largo y ancho
métodos: perimetro() y area() */

#include <iostream>
#include <stdlib.h>
using namespace std;

class Rectangulo{ // Definimos la clase Rectángulo
    private: // Atributos (sólo accesibles dentro de la clase)
        float largo,ancho; // Declaramos las variables de tipo flotante para almacenar el largo y el ancho del rectángulo
    public: // Métodos (accesibles desde fuera de la clase)
        Rectangulo(float,float); // Declaramos el constructor de la clase
        void perimetro(); // Declaramos el método perimetro()
        void area(); // Declaramos el método area()
};

// Constructor, se encarga de inicializar los atributos de la clase recibiendo el largo y el ancho
Rectangulo::Rectangulo(float _largo,float _ancho){
    largo = _largo; // Asignamos el valor recibido al atributo largo
    ancho = _ancho; // Asignamos el valor recibido al atributo ancho
}

void Rectangulo::perimetro(){ // Definición del método perimetro()
    float _perimetro; // Declaramos la variable local de tipo flotante para almacenar el resultado del perímetro

    _perimetro = (2*largo) + (2*ancho); // Cálculo del perímetro: 2*largo + 2*ancho

    cout<<"El perímetro es: "<<_perimetro<<endl;
}

void Rectangulo::area(){ // Definición del método area()
    float _area; // Declaramos la variable local de tipo flotante para almacenar el resultado del área

    _area = largo*ancho; // Cálculo del área: largo * ancho

    cout<<"El área es: "<<_area<<endl;
}

int main(){
    Rectangulo r1(11,7); // Creamos el objeto r1 usando el constructor (inicialización directa)

    r1.perimetro(); // Llamamos al método perimetro() del objeto r1
    r1.area(); // Llamamos al método area() del objeto r1

    system("pause");
    return 0;
}