/*Construir un programa que calcule el área y el perímetro de un cuadrilátero dada la longitud de sus dos lados.
Los valores de la longitud deberán introducirse por línea de órdenes. Si es un cuadrado, sólo se proporcionará
la longitud de uno de los lados al constructor.*/

#include <iostream>
#include "Cuadrilatero.h" // Incluimos la definición de la clase Cuadrilatero
using namespace std;

int main(int argc, char** argv){
    Cuadrilatero* c1; // Declaramos un puntero a objeto de tipo Cuadrilatero
    float lado1,lado2; // Declaramos las variables de tipo flotante para almacenar los lados del cuadrilátero

    cout<<"Digite el lado1: "; cin>>lado1; // Capturamos el valor del primer lado
    cout<<"Digite el lado2: "; cin>>lado2; // Capturamos el valor del segundo lado

    if(lado1==lado2){ // En caso de ser un cuadrado (ambos lados iguales)
        c1 = new Cuadrilatero(lado1); // Creamos el objeto utilizando el constructor que recibe un solo lado
    }
    else{ // En caso de que los lados sean diferentes (rectángulo)
        c1 = new Cuadrilatero(lado1,lado2); // Creamos el objeto utilizando el constructor que recibe dos lados
    }

    cout<<"El perímetro es: "<<c1->obtenerPerimetro()<<endl; // Mostramos el perímetro del cuadrilátero
    cout<<"El área es: "<<c1->obtenerArea()<<endl; // Mostramos el área del cuadrilátero

    return 0;
}