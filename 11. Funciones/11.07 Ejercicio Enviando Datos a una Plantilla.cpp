/*Escriba una plantilla de función llmada despliegue() que despliegue el valor
del argumento único que se le transmite cuando es invocada la función.*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
template <class TIPOD> // TIPOD es un tipo de dato genérico que se definirá cuando se llame a la función
void despliegue(TIPOD dato); // Indicamos la existencia de la función despliegue()

int main(){

    // Declaración de variables de distintos tipos
    int dato1 = 4;
    float dato2 = 15.67;
    double dato3 = 567.7890;
    char dato4 = 'a';

    // Llamadas a la misma función con diferentes tipos de datos
    // El compilador determina automáticamente el tipo de TIPOD
    despliegue(dato1);
    despliegue(dato2);
    despliegue(dato3);
    despliegue(dato4);

    getch();
    return 0;
}

template <class TIPOD> // Definición de la plantilla de función
void despliegue(TIPOD dato){ // Función que despliega los datos ingresados
    cout<<"El dato es: "<<dato<<endl; // Se imprime en pantalla el valor recibido como argumento
}