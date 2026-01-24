/*Escriba un programa en C++ que devuelva la parte fraccionaria de cualquier
número introducido por el usuario. por ejemplo, si se introduce el número
256.879, deberia desplegarse el número 0.879*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Funciones
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
float parteFraccionaria(float n); // Indicamos la existencia de la función parteFraccionaria()

float numero;  // Se declara la variable global fuera del main para que pueda ser usada por distintas funciones

int main(){
    pedirDatos(); // Se solicitan los datos al usuario

    // Imprimimos el resultado en pantalla después de obtener la parte fraccionaria del número
    cout<<"La parte fraccionaria del número es: "<<parteFraccionaria(numero); 

    cout<<"\n";

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite un número: ";
    cin>>numero; // Capturamos el valor ingresado por el usuario
}

float parteFraccionaria(float n){ // Función que nos devuelve la parte fraccionaria de un número real
    int entero=n; // Convertimos a entero el valor recibido
    //24.567 - 24 = 0.567
    float resultado = n - entero; // Restamos la parte entera del valor original recibido
    return resultado; // La función devuelve la parte fraccionaria del número
}