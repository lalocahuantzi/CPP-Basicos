/*Definir una clase DiaAnio con los atributos mes y día, los métodos igual() y visualizar().
El mes se registra como un valor entero (1, Enero, 2, Febrero, ...).
El día del mes se registra en otra variable entera día.
Escribir un programa que compruebe sin una fecha es su cumpleaños.*/

#include <iostream>
#include <stdlib.h>
#include "DiaAnio.h" // Incluimos la definición de la clase DiaAnio

using namespace std;

int main(int argc, char** argv){
    DiaAnio* hoy; // Declaramos un puntero a objeto de tipo DiaAnio para almacenar la fecha de hoy
    DiaAnio* cumple; // Declaramos un puntero a objeto de tipo DiaAnio para almacenar la fecha del cumpleaños
    int d,m;  // Declaramos las variables de tipo entero para almacenar el día y el mes ingresados por el usuario

    cout<<"Introduzca la fecha de hoy, día: "; cin>>d; // Capturamos el día ingresado por el usuario para crear el objeto 'hoy'
    cout<<"Introduzca el número de mes: "; cin>>m; // Capturamos el mes ingresado por el usuario para crear el objeto 'hoy'
    hoy = new DiaAnio(d,m);  // Creamos dinámicamente el objeto hoy con los datos ingresados
    
    cout<<"Introduzca la fecha de su cumpleaños, día: "; cin>>d; // Capturamos el día ingresado por el usuario para crear el objeto 'cumple'
    cout<<"Introduzca el número de mes: "; cin>>m; // Capturamos el mes ingresado por el usuario para crear el objeto 'cumple'
    cumple = new DiaAnio(d,m); // Creamos dinámicamente el objeto cumple con los datos ingresados

    // Mostramos las fechas
    cout<<"\n";
    hoy->visualizar(); // Mostramos la fecha correspondiente a hoy
    cout<<endl;
    cumple->visualizar(); // Mostramos la fecha correspondiente al cumpleaños 

    if(hoy->igual(*cumple)){ // Comparamos si la fecha de hoy es igual a la fecha de cumpleaños
        cout<<"\n¡Feliz Cumpleaños! :)\n"<<endl; // Si ambas fechas coinciden, mostramos el mensaje de cumpleaños
    }
    else{
        cout<<"\nQue tenga un bonito día :)\n"<<endl; // Si las fechas no coinciden, mostramos un mensaje alternativo
    }

    system("pause");
    return 0;
}