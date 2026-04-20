/*Construya una clase Tiempo que contenga los siguientes atributos enteros: horas, minutos y segundos.
Haga que la clase contenga 2 constructores, el primero debe tener 3 parámetros Tiempo (int,int,int) y el segundo sólo
tendrá un campo que serán los segundos y descomponga el número entero en horas, minutos y segundos*/

#include <iostream>
#include <stdlib.h>
using namespace std;

class Tiempo{ // Definimos la clase Tiempo
    private: // Atributos (sólo accesibles dentro de la clase)
        int horas,minutos,segundos; // Declaramos las variables de tipo entero para almacenar las horas, minutos y segundos del tiempo
    public: // Métodos (accesibles desde fuera de la clase)
        Tiempo(int,int,int); // Declaramos un constructor que recibe el tiempo en horas, minutos y segundos por separado
        Tiempo(int); // Declaramos un constructor que recibe los segundos en formato entero (e.g. 1000)
        void mostrarTiempo(); // Declaramos el método mostrarTiempo()
};

// Constructor 1, se encarga de inicializar los atributos recibiendo horas, minutos y segundos por separado
Tiempo::Tiempo(int _horas, int _minutos, int _segundos){
    horas = _horas; // Asignamos el valor recibido al atributo horas
    minutos = _minutos; // Asignamos el valor recibido al atributo minutos
    segundos = _segundos; // Asignamos el valor recibido al atributo segundos
}

// Constructor 2, se encarga de inicializar los atributos recibiendo los segundos totales
Tiempo::Tiempo(int tiempoSeg){
    horas = tiempoSeg / 3600; // Extraemos las horas del tiempo recibido
    tiempoSeg %= 3600;
    minutos = tiempoSeg/60; // Extraemos los minutos del tiempo recibido
    segundos = tiempoSeg % 60; // Extraemos los segundos del tiempo recibido
}

void Tiempo::mostrarTiempo(){ // Definición del método mostrarTiempo()
    cout<<"El tiempo es: "<<horas<<":"<<minutos<<":"<<segundos<<endl; // Mostramos el tiempo en formato horas:minutos:segundos
}

int main(){
    Tiempo horaActual(16,23,30); // Creamos el objeto horaActual usando el constructor que recibe horas, minutos y segundos
    Tiempo haceUnaHora(55410); // Creamos el objeto haceUnaHora usando el constructor que recibe los segundos totales

    horaActual.mostrarTiempo(); // Llamamos al método mostrarTiempo() del objeto horaActual
    haceUnaHora.mostrarTiempo(); // Llamamos al método mostrarTiempo() del objeto haceUnaHora
    
    system("pause");
    return 0;
}