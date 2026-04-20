/*Sobrecarga de Constructores*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Fecha{ // Definimos la clase Fecha
    private: // Atributos (sólo accesibles dentro de la clase)
        int dia,mes,anio; // Declaramos las variables de tipo entero para almacenar el día, mes y año de la fecha
    public: // Métodos (accesibles desde fuera de la clase)
        Fecha(int,int,int); // Declaramos un constructor que recibe día, mes y año por separado
        Fecha(long); // Declaramos un constructor que recibe la fecha en formato largo (e.g. 20170109)
        void mostrarFecha(); // Declaramos el método mostrarFecha()
};

// 9/1/2017 | 20170109 -> Ejemplos de formatos de entrada de los constructores 

// Constructor 1, se encarga de inicializar los atributos recibiendo día, mes y año por separado
Fecha::Fecha(int _dia, int _mes, int _anio){
    anio = _anio; // Asignamos el valor recibido al atributo anio
    mes = _mes; // Asignamos el valor recibido al atributo mes
    dia = _dia; // Asignamos el valor recibido al atributo dia
}

// Constructor 2, se encarga de inicializar los atributos recibiendo la fecha en formato aaaammdd
Fecha::Fecha(long fecha){
    anio = int(fecha/10000); // Extraemos el año de la fecha recibida
    mes = int((fecha-anio*10000)/100); // Extraemos el mes de la fecha recibida
    dia = int(fecha-anio*10000-mes*100); // Extraemos el día de la fecha recibida
}

void Fecha::mostrarFecha(){ // Definición del método mostrarFecha()
    cout<<"La fecha es: "<<dia<<"/"<<mes<<"/"<<anio<<endl; // Mostramos la fecha en formato día/mes/año
}

int main(){
    Fecha hoy(9,1,2017); // Creamos el objeto hoy usando el constructor que recibe día, mes y año
    Fecha ayer(20170108); // Creamos el objeto ayer usando el constructor que recibe la fecha en formato largo

    hoy.mostrarFecha(); // Llamamos al método mostrarFecha() del objeto hoy
    ayer.mostrarFecha(); // Llamamos al método mostrarFecha() del objeto ayer

    system("pause");
    return 0;
}