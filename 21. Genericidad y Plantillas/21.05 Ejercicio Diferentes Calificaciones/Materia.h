#ifndef MATERIA_H // Verificamos si MATERIA_H no ha sido definido previamente
#define MATERIA_H // Definimos MATERIA_H para evitar incluir el archivo varias veces

#include <iostream>
using namespace std;

template <class T>
class Materia{
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombreMateria; // Declaramos la variable de tipo cadena para almacenar el nombre de la materia
        int clave; // Declaramos la variable de tipo entero para almacenar la clave de la materia
        T calificacion; // Declaramos la variable de tipo genérico T para almacenar la calificación

    public: // Métodos (accesibles desde fuera de la clase)
        Materia(string nombreMateria, int clave, T calificacion){ // Declaramos un constructor que recibe los datos de la materia
            this->nombreMateria = nombreMateria; // Asignamos el valor recibido al atributo nombreMateria
            this->clave = clave; // Asignamos el valor recibido al atributo clave
            this->calificacion = calificacion; // Asignamos el valor recibido al atributo calificación
        }

        void mostrarDatos(){ // Definimos el método mostrarDatos() para mostrar los datos de la materia
            cout<<"Nombre Materia: "<<nombreMateria<<endl; // Mostramos el nombre de la materia
            cout<<"Clave: "<<clave<<endl; // Mostramos la clave de la materia
            cout<<"Calificacion: "<<calificacion<<endl; // Mostramos la calificación de la materia
        }

        void setCalificacion(T calificacion){ // Definimos el método setCalificacion() para modificar la calificación
            this->calificacion = calificacion; // Asignamos el valor recibido al atributo calificacion
        }

        T getCalificacion(){ // Definimos el método getCalificacion() para obtener la calificación
            return calificacion; // Retornamos el valor del atributo calificación
        }
};

#endif // Finalizamos la protección contra inclusiones múltiples