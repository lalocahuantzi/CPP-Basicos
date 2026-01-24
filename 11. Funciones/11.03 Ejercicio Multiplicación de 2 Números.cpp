/*Escriba una función llamada mult() que acepte dons núermos en punto flotante como
parámetros, multiplique estos dos números y despliegue el resultado.*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipos de Funciones
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void mult(float x, float y); // Indicamos la existencia de la función mult()

float num1, num2; // Se declaran variables globales fuera del main para que puedan ser usadas por distintas funciones

int main(){

    pedirDatos(); // Se solicitan los datos al usuario
    mult(num1, num2); // Se llama a la función mult() y se le dan los valores ingresados

    getch();
    return 0; 
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite 2 números: "<<endl;
    cin>>num1; cin>>num2; // Capturamos los 2 valores ingresados por el usuario
}

void mult(float x, float y){ // Función que multiplica 2 números
    float multiplicacion = x*y; // Multiplicamos los 2 valores recibidos como parámetros

    cout<<"\nLa multiplicación es: "<<multiplicacion<<endl; // Imprimimos el resultado en pantalla
}