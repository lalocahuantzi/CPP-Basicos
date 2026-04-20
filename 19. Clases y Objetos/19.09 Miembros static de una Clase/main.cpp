/*Miembros static de una clase*/

#include <iostream>
#include "Estatico.h" // Incluimos la definición de la clase Estatico

using namespace std;

int main(int argc, char** argv){
    Estatico* ob1 = new Estatico(); // Creamos dinámicamente un objeto de tipo Estatico (incrementa el contador)
    Estatico* ob2 = new Estatico(); // Creamos otro objeto (incrementa nuevamente el contador)
    Estatico* ob3 = new Estatico(); // Creamos otro objeto (incrementa nuevamente el contador)

    cout<<ob1->getContador()<<endl; // Mostramos el valor del contador compartido por todos los objetos

    cout<<"La suma es: "<<Estatico::sumar(4,5)<<endl; // Llamamos al método static sumar() sin necesidad de crear un objeto

    return 0;
}