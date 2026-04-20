/*Crear un programa en C++ que tenga la siguiente jerarquía de clases:
Animal (Clase Padre) -> Humano (Clase Hija)
Animal (Clase Padre) -> Perro (Clase Hija),
y hacer polimorfismo con el método comer().*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Animal{ // Definimos la clase Animal (Clase Padre o Clase Base)
    private: // Atributos (sólo accesibles dentro de la clase)
        int edad; // Declaramos la variable de tipo entero para almacenar la edad del animal
        string nombre; // Declaramos la variable de tipo cadena para almacenar el nombre del animal
    public: // Métodos (accesibles desde fuera de la clase)
        Animal(int,string); // Declaramos el constructor de la clase Animal
        string getNombre(); // Declaramos el método getNombre() para obtener el nombre
        virtual void comer(); // Declaramos el método comer() como virtual
};

class Humano : public Animal{ // Definimos la clase Humano que hereda de Animal
    public: // Métodos (accesibles desde fuera de la clase)
        Humano(int,string); // Declaramos el constructor de la clase Humano
        void comer(); // Declaramos el método comer()
};

class Perro : public Animal{ // Definimos la clase Perro que hereda de Animal
    private: // Atributos (sólo accesibles dentro de la clase)
        string raza; // Declaramos la variable de tipo cadena para almacenar la raza del perro
    public: // Métodos (accesibles desde fuera de la clase)
        Perro(int,string,string); // Declaramos el constructor de la clase Perro
        void comer(); // Declaramos el método comer()
};

// Constructor de la clase Animal (Clase Padre), inicializa los atributos edad y nombre
Animal::Animal(int _edad,string _nombre){
    edad = _edad; // Asignamos el valor recibido al atributo edad
    nombre = _nombre; // Asignamos el valor recibido al atributo nombre
}

string Animal::getNombre(){ // Definición del método getNombre()
    return nombre; // Retornamos el valor del atributo nombre
}

void Animal::comer(){ // Definición del método comer() de la clase Animal
    cout<<getNombre()<<" come "; // Mostramos el nombre y la parte inicial del mensaje
}

// Constructor de la clase Humano (Clase Hija de Animal), inicializa primero los atributos heredados llamando al constructor de Animal
Humano::Humano(int _edad, string _nombre) : Animal(_edad,_nombre){
}

void Humano::comer(){ // Definición del método comer() de la clase Humano
    Animal::comer(); // Llamamos al método comer() de la clase padre
    cout<<"en una mesa, sentado en su silla"<<endl; // Mostramos la forma en que come un humano
}

// Constructor de la clase Perro (Clase Hija de Animal), inicializa primero los atributos heredados llamando al constructor de Animal
Perro::Perro(int _edad,string _nombre,string _raza) : Animal(_edad,_nombre){
    raza = _raza; // Asignamos el valor recibido al atributo raza
}

void Perro::comer(){ // Definición del método comer() de la clase Perro
    Animal::comer(); // Llamamos al método comer() de la clase padre
    cout<<"en el suelo, con su plato"<<endl; // Mostramos la forma en que come un perro
}

int main(){
    Animal *animales[2]; // Declaramos un arreglo de punteros de tipo Animal

    animales[0] = new Perro(13,"Whisky","Pastor Australiano"); // Almacenamos en la primera posición un objeto de tipo Perro
    animales[1] = new Humano(29,"Eduardo"); // Almacenamos en la segunda posición un objeto de tipo Humano

    animales[0]->comer(); // Llamamos al método comer() del objeto almacenado en la primera posición
    animales[1]->comer(); // Llamamos al método comer() del objeto almacenado en la segunda posición

    system("pause");
    return 0;
}