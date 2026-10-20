#ifndef EJEMPLOPLANTILLA_H // Verificamos si EJEMPLOPLANTILLA_H no ha sido definido previamente
#define EJEMPLOPLANTILLA_H // Definimos EJEMPLOPLANTILLA_H para evitar incluir el archivo varias veces

#include <iostream>
using namespace std;

template <class T1, class T2> // Declaramos una plantilla de clase que utiliza dos tipos de datos genéricos
class EjemploPlantilla{ // Definimos la clase genérica EjemploPlantilla

    private: // Atributos (sólo accesibles dentro de la clase)
        T1 dato1; // Declaramos la variable de tipo genérico T1 para almacenar el primer dato
        T2 dato2; // Declaramos la variable de tipo genérico T2 para almacenar el segundo dato

    public: // Métodos (accesibles desde fuera de la clase)
        EjemploPlantilla(T1 dato1, T2 dato2){ // Declaramos un constructor que recibe los dos datos de tipos genéricos
            this->dato1 = dato1; // Asignamos el valor recibido al atributo dato1
            this->dato2 = dato2; // Asignamos el valor recibido al atributo dato2
        }

        void setDato1(T1 dato){ // Definimos el método setDato1() para modificar el primer dato
            this->dato1 = dato; // Asignamos el valor recibido al atributo dato1
        }

        T1 getDato1(){ // Definimos el método getDato1() para obtener el primer dato
            return dato1; // Retornamos el valor del atributo dato1
        }

        void setDato2(T2 dato){ // Definimos el método setDato2() para modificar el segundo dato
            this->dato2 = dato; // Asignamos el valor recibido al atributo dato2
        }

        T2 getDato2(){ // Definimos el método getDato2() para obtener el segundo dato
            return dato2; // Retornamos el valor del atributo dato2
        }

        void mostrarDatos(){ // Definimos el método mostrarDatos() para mostrar los datos del objeto
            cout<<"Dato1 = "<<dato1<<endl; // Mostramos el primer dato
            cout<<"Dato2 = "<<dato2<<endl; // Mostramos el segundo dato
        }
};

#endif // Finalizamos la protección contra inclusiones múltiples