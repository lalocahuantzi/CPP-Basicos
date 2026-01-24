/*Escriba una función nombrada funpot() que eleve un número entero que se le
transmita a una potencia en número entero positivo y despliegue el resultado.
El número entero positivo deberá ser el segundo valor transmitido a la función.*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipos de Funciones
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void funpot(int x, int y); // Indicamos la existencia de la función funpot()

int numero, exponente; // Se declaran variables globales fuera del main para que puedan ser usadas por distintas funciones

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    funpot(numero,exponente); // Se llama a la función funpot() y se le dan los valores ingresados

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite un número: ";
    cin>>numero; // Capturamos el valor ingresado por el usuario
    cout<<"Digite el exponente de elevación: ";
    cin>>exponente; // Capturamos el valor ingresado por el usuario
}

void funpot(int x, int y){ // Función que eleva el número base 'x' a la potencia 'y'
    long resultado=1; // Se incializa la variable en 1 porque es el neutro multiplicativo 
    for(int i=1;i<=y;i++){ // Ciclo que multiplica el número base 'x' por sí mismo 'y' veces
        resultado *= x; // Multiplicación en asignación del número base 'x'
    }

    cout<<"El resultado es: "<<resultado<<endl; // Imprimimos el resultado en pantalla
}
