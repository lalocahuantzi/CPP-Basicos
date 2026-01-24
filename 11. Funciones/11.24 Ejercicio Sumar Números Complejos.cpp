/* Suma de Números Complejos

z1 = 5-3i  ,  z2 = -4+2i

z1  +  z2  =  (5-3i)+(-4+2i)
           =  5-3i-4+2i
           =  1-i 
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Complejo{ // Iniciamos la estructura Complejo
    float real,imaginaria; // Declaramos los campos de tipo flotante 'real'|'imaginaria'
}z1,z2;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
Complejo suma(Complejo,Complejo); // Indicamos la existencia de la función suma() -> Recibe 2 estructuras Complejo y devuelve 1 estructura Complejo
void muestra(Complejo); // Indicamos la existencia de la función muestra()

int main(){
    pedirDatos(); // Se solicitan los datos al usuario

    Complejo x = suma(z1,z2); // Llamamos a la función suma() que recibe 2 estrucutras Complejo y devuelve otra estructura Complejo

    muestra(x); // Llamamos a la función que imprime el resultado de la suma de números complejos

    getch();
    return 0;
}


void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite los datos para el primer número complejo: "<<endl;
    cout<<"Parte Real: "; cin>>z1.real; // Capturamos la parte real ingresada por el usuario
    cout<<"Parte Imaginaria: "; cin>>z1.imaginaria; // Capturamos la parte imaginaria ingresada por el usuario

    cout<<"\nDigite los datos para el segundo número complejo: "<<endl;
    cout<<"Parte Real: "; cin>>z2.real; // Capturamos la parte real ingresada por el usuario
    cout<<"Parte Imaginaria: "; cin>>z2.imaginaria; // Capturamos la parte imaginaria ingresada por el usuario
}

Complejo suma(Complejo z1, Complejo z2){ // Función para sumar números complejos
    z1.real += z2.real; // Sumamos las partes reales de los números complejos
    z1.imaginaria += z2.imaginaria; // Sumamos las partes imaginarias de los números complejos

    return z1; // Devolvemos el resultado de la suma d elos números complejos
}

void muestra(Complejo x){ // Función que imprime en pantalla el resultado de la suma de números complejos
    cout<<"\nResultado de la suma: "<<x.real<<"+"<<x.imaginaria<<"i"<<endl;
}




