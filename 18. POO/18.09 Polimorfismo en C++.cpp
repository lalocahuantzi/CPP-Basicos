/*Polimorfismo*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Persona{ // Definimos la clase Persona (Clase Padre o Clase Base)
    private: // Atributos (sólo accesibles dentro de la clase)
        string nombre; // Declaramos la variable de tipo cadena para almacenar el nombre de la persona
        int edad; // Declaramos la variable de tipo entero para almacenar la edad de la persona
    public: // Métodos (accesibles desde fuera de la clase)
        Persona(string,int); // Declaramos el constructor de la clase Persona
        virtual void mostrar(); // Declaramos el método virtual mostrar()
};

class Alumno : public Persona{ // Definimos la clase Alumno que hereda de Persona
    private: // Atributos (sólo accesibles dentro de la clase)
        float notaFinal; // Declaramos la variable de tipo flotante para almacenar la nota final del alumno
    public: // Métodos (accesibles desde fuera de la clase)
        Alumno(string,int,float); // Declaramos el constructor de la clase Alumno
        void mostrar(); // Declaramos el método mostrar()
};

class Profesor : public Persona{ // Definimos la clase Profesor que hereda de Persona
    private: // Atributos (sólo accesibles dentro de la clase)
        string materia; // Declaramos la variable de tipo cadena para almacenar la materia que imparte el profesor
    public: // Métodos (accesibles desde fuera de la clase)
        Profesor(string,int,string); // Declaramos el constructor de la clase Profesor
        void mostrar(); // Declaramos el método mostrar()
};

// Constructor de la clase Persona (Clase Padre), inicializa los atributos nombre y edad
Persona::Persona(string _nombre,int _edad){
    nombre = _nombre; // Asignamos el valor recibido al atributo nombre
    edad = _edad; // Asignamos el valor recibido al atributo edad
}

void Persona::mostrar(){ // Definición del método mostrar() de la clase Persona
    cout<<"Nombre: "<<nombre<<endl; // Mostramos el nombre de la persona
    cout<<"Edad: "<<edad<<endl; // Mostramos la edad de la persona
}

// Constructor de la clase Alumno (Clase Hija de Persona), inicializa primero los atributos heredados llamando al constructor de Persona
Alumno::Alumno(string _nombre,int _edad,float _notaFinal) : Persona(_nombre,_edad){
    notaFinal = _notaFinal; // Asignamos el valor recibido al atributo notaFinal
}

void Alumno::mostrar(){ // Definición del método mostrar() de la clase Alumno
    Persona::mostrar(); // Llamamos al método mostrar() de la clase padre para mostrar nombre y edad
    cout<<"Nota Final: "<<notaFinal<<endl; // Mostramos la nota final del alumno
}

// Constructor de la clase Profesor (Clase Hija de Persona), inicializa primero los atributos heredados llamando al constructor de Persona
Profesor::Profesor(string _nombre,int _edad,string _materia) : Persona(_nombre,_edad){
    materia = _materia; // Asignamos el valor recibido al atributo materia
}

void Profesor::mostrar(){ // Definición del método mostrar() de la clase Profesor
    Persona::mostrar(); // Llamamos al método mostrar() de la clase padre para mostrar nombre y edad
    cout<<"Materia: "<<materia<<endl; // Mostramos la materia que imparte el profesor
}

int main(){
    Persona *vector[3]; // Declaramos un arreglo de punteros de tipo Persona

    vector[0] = new Alumno("Eduardo",29,8.26); // Almacenamos en la primera posición un objeto de tipo Alumno
    vector[1] = new Alumno("Paola",30,9.20); // Almacenamos en la segunda posición un objeto de tipo Alumno
    vector[2] = new Profesor("John",26,"Math"); // Almacenamos en la tercera posición un objeto de tipo Profesor

    vector[0]->mostrar(); // Llamamos al método mostrar() del primer objeto
    cout<<"\n";
    vector[1]->mostrar(); // Llamamos al método mostrar() del segundo objeto
    cout<<"\n";
    vector[2]->mostrar(); // Llamamos al método mostrar() del tercer objeto
    cout<<"\n";

    system("pause");
    return 0;
}