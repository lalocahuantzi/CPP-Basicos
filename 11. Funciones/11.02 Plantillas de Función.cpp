/*Plantillas de Función

Ejemplo: Obtener el valor absoluto de un número */

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
template <class TIPOD> // TIPOD es un tipo de dato genérico que se definirá cuando se llame a la función
void mostrarAbs(TIPOD numero); // Indicamos la existencia de la función mostrarAbs()

int main(){
    // Declaración e inicialización de variables de distintos tipos
    int num1 = -4;
    float num2 = -56.67;
    double num3 = -123.5678;

    // Llamadas a la misma función utilizando distintos tipos de datos
    // El compilador determina automáticamente el tipo de TIPOD
    mostrarAbs(num1);
    mostrarAbs(num2);
    mostrarAbs(num3);

    getch();
    return 0;
}

// Aquí se desarrolla el código de la función declarada anteriormente
template <class TIPOD>
void mostrarAbs(TIPOD numero){ // Función que nos devuelve el valor absoluto del número ingresado

    if(numero<0){ // En caso de que el número sea negativo, se convierte a positivo
        numero = numero*-1;
    }
    // Imprimimos en pantalla el valor absoluto del número
    cout<<"El valor absoluto del número es: "<<numero<<endl;
}