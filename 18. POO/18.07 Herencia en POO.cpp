/*Herencia en POO*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{ // Definimos la clase Persona (Clase Padre o Clase Base)
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombre; // Declaramos la variable de tipo cadena para almacenar el nombre de la persona
        int edad; // Declaramos la variable de tipo entero para almacenar la edad de la persona
    public: // Métodos (accesibles desde fuera de la clase)
        Persona(string,int); // Declaramos el constructor de la clase Persona
        void mostrarPersona(); // Declaramos el método mostrarPersona()
};

class Alumno : public Persona{ // Definimos la clase Alumno que hereda de Persona
    private: // Atributos (sólo accesibles dentro de la clase)
        string codigoAlumno; // Declaramos la variable de tipo cadena para almacenar el código del alumno
        float notaFinal; // Declaramos la variable de tipo flotante para almacenar la nota final del alumno
    public: // Métodos (accesibles desde fuera de la clase)
        Alumno(string,int,string,float); // Declaramos el constructor de la clase Alumno
        void mostrarAlumno(); // Declaramos el método mostrarAlumno()
};

// Constructor de la clase Persona (Clase Padre), inicializa los atributos nombre y edad
Persona::Persona(string _nombre,int _edad){
    nombre = _nombre; // Asignamos el valor recibido al atributo nombre
    edad = _edad; // Asignamos el valor recibido al atributo edad
}

// Constructor de la clase Alumno (Clase Hija de Persona), inicializa primero los atributos heredados llamando al constructor de Persona
Alumno::Alumno(string _nombre,int _edad,string _codigoAlumno,float _notaFinal) : Persona(_nombre,_edad){
    codigoAlumno = _codigoAlumno; // Asignamos el valor recibido al atributo codigoAlumno
    notaFinal = _notaFinal; // Asignamos el valor recibido al atributo notaFinal
}

void Persona::mostrarPersona(){ // Definición del método mostrarPersona()
    cout<<"Nombre: "<<nombre<<endl; // Mostramos el nombre de la persona
    cout<<"Edad: "<<edad<<endl; // Mostramos la edad de la persona
}

void Alumno::mostrarAlumno(){ // Definición del método mostrarAlumno()
    mostrarPersona(); // Llamamos al método de la clase padre para mostrar nombre y edad
    cout<<"Código Alumno: "<<codigoAlumno<<endl; // Mostramos el código del alumno
    cout<<"Nota Final: "<<notaFinal<<endl; // Mostramos la nota final del alumno
}

int main(){
    Alumno alumno1("Eduardo",29,"123",8.26); // Creamos el objeto alumno1 usando el constructor (inicialización directa)

    alumno1.mostrarAlumno(); // Llamamos al método mostrarAlumno() del objeto alumno1

    system("pause");
    return 0;
}