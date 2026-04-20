/*Realice un programa en C++, de tal manera que se construya una solución
para la jerarquía (herencia) de clases mostrada de la siguiente manera:

    ___Persona___
    |           |
Empleado    Estudiante
                |
            Universitario
*/

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

class Empleado : public Persona{ // Definimos la clase Empleado que hereda de Persona
    private: // Atributos (sólo accesibles dentro de la clase)
        float sueldo; // Declaramos la variable de tipo flotante para almacenar el sueldo del empleado
    public: // Métodos (accesibles desde fuera de la clase)
        Empleado(string,int,float); // Declaramos el constructor de la clase Empleado
        void mostrarEmpleado(); // Declaramos el método mostrarEmpleado()
};

class Estudiante : public Persona{ // Definimos la clase Estudiante que hereda de Persona
    private: // Atributos (sólo accesibles dentro de la clase)
        float notaFinal; // Declaramos la variable de tipo flotante para almacenar la nota final del estudiante
    public: // Métodos (accesibles desde fuera de la clase)
        Estudiante(string,int,float); // Declaramos el constructor de la clase Estudiante
        void mostrarEstudiante(); // Declaramos el método mostrarEstudiante()
};

class Universitario : public Estudiante{ // Definimos la clase Universitario que hereda de Estudiante
    private: // Atributos (sólo accesibles dentro de la clase)
        string carrera; // Declaramos la variable de tipo cadena para almacenar la carrera del universitario
    public: // Métodos (accesibles desde fuera de la clase)
        Universitario(string,int,float,string); // Declaramos el constructor de la clase Universitario
        void mostrarUniversitario(); // Declaramos el método mostrarUniversitario()
};

// Constructor de la clase Persona (Clase Padre), inicializa los atributos nombre y edad
Persona::Persona(string _nombre,int _edad){
    nombre = _nombre; // Asignamos el valor recibido al atributo nombre
    edad = _edad; // Asignamos el valor recibido al atributo edad
}

void Persona::mostrarPersona(){ // Definición del método mostrarPersona()
    cout<<"Nombre: "<<nombre<<endl; // Mostramos el nombre de la persona
    cout<<"Edad: "<<edad<<endl; // Mostramos la edad de la persona
}

// Constructor de la clase Empleado (Clase Hija de Persona), inicializa primero los atributos heredados llamando al constructor de Persona
Empleado::Empleado(string _nombre,int _edad,float _sueldo) : Persona(_nombre,_edad){
    sueldo = _sueldo; // Asignamos el valor recibido al atributo sueldo
}

void Empleado::mostrarEmpleado(){ // Definición del método mostrarEmpleado()
    mostrarPersona(); // Llamamos al método de la clase padre para mostrar nombre y edad
    cout<<"Sueldo: "<<sueldo<<endl; // Mostramos el sueldo del empleado
}

// Constructor de la clase Estudiante (Clase Hija de Persona), inicializa primero los atributos heredados llamando al constructor de Persona
Estudiante::Estudiante(string _nombre, int _edad,float _notaFinal) : Persona(_nombre,_edad){
    notaFinal = _notaFinal; // Asignamos el valor recibido al atributo notaFinal
}

void Estudiante::mostrarEstudiante(){ // Definición del método mostrarEstudiante()
    mostrarPersona(); // Llamamos al método de la clase padre para mostrar nombre y edad
    cout<<"Nota Final: "<<notaFinal<<endl; // Mostramos la nota final del estudiante
}

// Constructor de la clase Universitario (Clase Hija de Estudiante), inicializa primero los atributos heredados llamando al constructor de Estudiante
Universitario::Universitario(string _nombre, int _edad, float _notaFinal,string _carrera) : Estudiante(_nombre,_edad,_notaFinal){
    carrera = _carrera; // Asignamos el valor recibido al atributo carrera
}

void Universitario::mostrarUniversitario(){ // Definición del método mostrarUniversitario()
    mostrarEstudiante(); // Llamamos al método de la clase padre para mostrar nombre, edad y nota final
    cout<<"Carrera: "<<carrera<<endl; // Mostramos la carrera del universitario
}

int main(){
    Empleado empleado1("Eduardo",29,4000); // Creamos el objeto empleado1 usando el constructor (inicialización directa)
    cout<<"-Empleado-"<<endl;
    empleado1.mostrarEmpleado(); // Llamamos al método mostrarEmpleado() del objeto empleado1
    cout<<"\n";

    Estudiante estudiante1("Eduardo",29,8.26); // Creamos el objeto estudiante1 usando el constructor (inicialización directa)
    cout<<"-Estudiante-"<<endl;
    estudiante1.mostrarEstudiante(); // Llamamos al método mostrarEstudiante() del objeto estudiante1
    cout<<"\n";

    Universitario universitario1("Paola",30,9.20,"Derecho Fiscal"); // Creamos el objeto universitario1 usando el constructor (inicialización directa)
    cout<<"-Universitaria-"<<endl;
    universitario1.mostrarUniversitario(); // Llamamos al método mostrarUniversitario() del objeto universitario1
    cout<<"\n";

    system("pause");
    return 0;
}