/*Implementación de la clase Vehiculo*/

#include <iostream>
using namespace std;

class Vehiculo{ // Definimos la clase Vehiculo
    private: // Atributos (sólo accesibles dentro de la clase)
        string marca,modelo; // Declaramos las variables de tipo cadena para almacenar la marca y el modelo del vehículo
        float precio; // Declaramos la variable de tipo flotante para almacenar el precio del vehículo
    public: // Métodos (accesibles desde fuera de la clase)
        Vehiculo(string marca,string modelo,float precio){ // Declaramos un constructor que recibe los datos del vehículo
            this->marca = marca; // Asignamos el valor recibido al atributo marca
            this->modelo = modelo; // Asignamos el valor recibido al atributo modelo
            this->precio = precio; // Asignamos el valor recibido al atributo precio
        }

        Vehiculo(){ // Declaramos el constructor por defecto

        }

        float getPrecio(); // Declaramos el método getPrecio() para obtener el precio del vehículo
        void mostrarDatos(); // Declaramos el método mostrarDatos() para mostrar los datos del vehículo
        static int indiceMBarato(Vehiculo coches[],int n); // Declaramos un método static para encontrar el índice del vehículo más barato
};