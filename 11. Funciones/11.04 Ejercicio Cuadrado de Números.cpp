/*Escriba una función llamada al_cuadrado() que calcule el cuadrado del valor
que se le transmite y despliegue el resultado. La función deberá ser capaz
de elevar al cuadrado números flotantes*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipos de Funciones
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void al_cuadrado(float n); // Indicamos la existencia de la función al_cuadrado()

float numero; // Se declara la variable global fuera del main para que pueda ser usada por distintas funciones

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    al_cuadrado(numero); // Se llama a la función al_cuadrado y se le da el valor ingresado

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite un número: ";
    cin>>numero; // Capturamos el valor ingresado por el usuario
}

void al_cuadrado(float n){ // Función que eleva al cuadrado el entero ingresado por el usuario
    float elevacion = n*n; // Elevamos al cuadrado el valor recibido como parámetro

    cout <<"El número al cuadrado es: "<<elevacion<<endl; // Imprimimos el resultado en pantalla
}
