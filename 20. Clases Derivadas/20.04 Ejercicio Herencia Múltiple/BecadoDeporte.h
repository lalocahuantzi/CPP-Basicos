#ifndef BECADODEPORTE_H // Verificamos si DEPORTISTA_H no ha sido definido previamente
#define BECADODEPORTE_H // Definimos DEPORTISTA_H para evitar incluir el archivo varias veces

#include <iostream>
#include "Alumno.h" // Incluimos la definición de la clase Alumno
#include "Deportista.h" // Incluimos la definición de la clase Deportista
using namespace std;

class BecadoDeporte : public Alumno, public Deportista{ // Definimos la clase BecadoDeporte que hereda de Alumno y Deportista
    private: // Atributos (sólo accesibles dentro de la clase)
        float montoBeca; // Declaramos la variable de tipo flotante para almacenar el monto de la beca

    public: // Métodos (accesibles desde fuera de la clase)
        BecadoDeporte(string nombreCarrera, string nombreEntrenador, float montoBeca) : Alumno(nombreCarrera) , Deportista(nombreEntrenador){
            this->montoBeca = montoBeca; // Asignamos el valor recibido al atributo montoBeca
        }

        void mostrarDatos(){ // Definimos el método mostrarDatos() para mostrar los datos del becado
            Alumno::mostrarDatos(); // Llamamos al método mostrarDatos() de la clase Alumno
            Deportista::mostrarDatos(); // Llamamos al método mostrarDatos() de la clase Deportista
            cout<<"Monto Beca: "<<montoBeca<<endl; // Mostramos el monto de la beca
        }

        void setMontoBeca(float n){ // Definimos el método setMontoBeca() para incrementar el monto de la beca
            float incremento = (montoBeca*n)/100; // Calculamos el incremento porcentual de la beca
            this->montoBeca += incremento; // Incrementamos el monto de la beca
        }

        float getMontoBeca(){ // Definimos el método getMontoBeca() para obtener el monto de la beca
            return montoBeca; // Retornamos el valor del atributo montoBeca
        }
};

#endif