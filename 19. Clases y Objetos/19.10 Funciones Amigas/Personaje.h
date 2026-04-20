/*Implementación de la clase Personaje*/

#include <iostream>
using namespace std;

class Personaje{ // Definimos la clase Personaje
    friend void modificar(Personaje &,int,int); // Declaramos la función modificar() como amiga para que pueda acceder a los atributos privados
    private: // Atributos (sólo accesibles dentro de la clase)
        int ataque; // Declaramos la variable de tipo entero para almacenar el ataque del personaje
        int defensa; // Declaramos la variable de tipo entero para almacenar la defensa del personaje
    public: // Métodos (accesibles desde fuera de la clase)
        Personaje(int ataque,int defensa){ // Declaramos un constructor que recibe los valores de ataque y defensa
            this->ataque = ataque; // Asignamos el valor recibido al atributo ataque
            this->defensa = defensa; // Asignamos el valor recibido al atributo defensa
        }
    
    void mostrarDatos(){ // Definición del método mostrarDatos() para mostrar los atributos del personaje
        cout<<"Ataque = "<<ataque<<endl; // Mostramos el valor del ataque
        cout<<"Defensa = "<<defensa<<endl; // Mostramos el valor de la defensa
    }
};