#ifndef ALUMNO_H // Verificamos si ALUMNO_H no ha sido definido previamente
#define ALUMNO_H // Definimos ALUMNO_H para evitar incluir el archivo varias veces

#include <iostream>
using namespace std;

class Alumno{ // Definimos la clase Alumno
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombreCarrera; // Declaramos la variable de tipo cadena para almacenar el nombre de la carrera
    
    public: // Métodos (accesibles desde fuera de la clase)
        Alumno(string nombreCarrera){ // Declaramos un constructor que recibe el nombre de la carrera
            this->nombreCarrera = nombreCarrera; // Asignamos el valor recibido al atributo nombreCarrera
        }

        void mostrarDatos(){ // Definimos el método mostrarDatos() para mostrar los datos del alumno
            cout<<"Nombre Carrera: "<<nombreCarrera<<endl; // Mostramos el nombre de la carrera
        }

        void setNombreCarrera(string nuevoNombre){ // Definimos el método setNombreCarrera() para modificar el nombre de la carrera
            this->nombreCarrera = nuevoNombre; // Asignamos el valor recibido al atributo nombreCarrera
        }

        string getNombreCarrera(){ // Definimos el método getNombreCarrera() para obtener el nombre de la carrera
            return nombreCarrera; // Retornamos el valor del atributo nombreCarrera
        }
};

#endif // Finalizamos la protección contra inclusiones múltiples