/*Clases en C++*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{ // Definimos la clase Persona
    private: // Atributos (sólo accesibles dentro de la clase)
        int edad; // Declaramos la variable de tipo entero para almacenar la edad de la persona
        string nombre; // Declaramos la variable de tipo cadena para almacenar el nombre de la persona
    public: // Métodos (accesibles desde fuera de la clase)
        Persona(int,string); // Declaramos el constructor de la clase
        void leer(); // Declaramos el método leer()
        void correr(); // Declaramos el método correr()
};

// Constructor, se encarga de inicializar los atributos de la clase recibiendo la edad y el nombre
Persona::Persona(int _edad, string _nombre){
    edad = _edad; // Asignamos el valor recibido al atributo edad
    nombre = _nombre; // Asignamos el valor recibido al atributo nombre
}

void Persona::leer(){ // Definición del método leer()
    cout<<"Soy "<<nombre<<", estoy leyendo un libro y tengo "<<edad<<" años"<<endl;
}

void Persona::correr(){ // Definición del método correr()
    cout<<"Soy "<<nombre<<", estoy corriendo un maratón y tengo "<<edad<<" años"<<endl;
}

int main(){
    Persona p1 = Persona(29,"Eduardo"); // Creamos el objeto p1 usando el constructor (inicialización directa)
    Persona p2(30,"Paola"); // Creamos el objeto p2 usando el constructor (inicialización directa)

    p1.leer(); // Llamamos al método leer() del objeto p1
    p2.correr(); // Llamamos al método correr() del objeto p2

    system("pause");
    return 0;
}