/*Implementación de la clase Estatico*/

#include <iostream>
using namespace std;

class Estatico{ // Definimos la clase Estatico
    private: // Atributos (sólo accesibles dentro de la clase)
        static int contador; // Declaramos una variable static que será compartida por todos los objetos de la clase
    public: // Métodos (accesibles desde fuera de la clase)
        Estatico(){ // Declaramos el constructor de la clase
            contador++; // Incrementamos el contador cada vez que se crea un nuevo objeto
        }

        int getContador(){ // Declaramos el método getContador() para obtener el valor del contador
            return contador; // Retornamos el valor del contador compartido
        }

        static int sumar(int n1,int n2){ // Declaramos un método static para sumar dos números
            int suma = n1+n2; // Calculamos la suma de los dos valores recibidos
            return suma; // Retornamos el resultado de la suma
        }
};