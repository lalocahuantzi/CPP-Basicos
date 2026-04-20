/*Destructor de Objetos*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Perro{ // Definimos la clase Perro
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombre,raza; // Declaramos las variables de tipo cadena para almacenar el nombre y la raza del perro
    public: // Métodos (accesibles desde fuera de la clase)
        Perro(string,string); // Declaramos un constructor que recibe el nombre y la raza del perro
        ~Perro(); // Declaramos el destructor de la clase
        void mostrarDatos(); // Declaramos el método mostrarDatos()
        void jugar(); // Declaramos el método jugar()
};

// Constructor, se encarga de inicializar los atributos de la clase recibiendo el nombre y la raza
Perro::Perro(string _nombre,string _raza){
    nombre = _nombre; // Asignamos el valor recibido al atributo nombre
    raza = _raza; // Asignamos el valor recibido al atributo raza
}

// Destructor, se encarga de destruir el objeto al finalizar su uso en el programa
Perro::~Perro(){
}

void Perro::mostrarDatos(){ // Definición del método mostrarDatos()
    cout<<"Nombre: "<<nombre<<endl; // Mostramos el nombre del perro
    cout<<"Raza: "<<raza<<endl; // Mostramos la raza del perro
}

void Perro::jugar(){ // Definición del método jugar()
    cout<<"El perro "<<nombre<<" está jugando"<<endl;
}

int main(){
    Perro perro1("Whisky","Pastor Australiano"); // Creamos el objeto perro1 usando el constructor (inicialización directa)

    perro1.mostrarDatos(); // Llamamos al método mostrarDatos() del objeto perro1
    perro1.jugar(); // Llamamos al método jugar() del objeto perro1

    system("pause");
    return 0;
}