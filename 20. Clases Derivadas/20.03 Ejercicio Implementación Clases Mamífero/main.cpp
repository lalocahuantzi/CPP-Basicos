/*Considere la siguiente relación de herecia. defina las clases Mamífero, Felino y GatoDomestico.
Decida qué atributos y métodos incluir de tal manera que su programa pueda:

a) Declrar un objeto llamado minino de tipo GatoDomestico y otro llamado estrellaCirco de tipo Felino. 
b) Imprimir la dieta de minino y de estrellaCirco.
c) Imprimir el año y lugar de nacimiento de minino y de estrellaCirco.
d) Cambiar el nombre del dueño de minino.
e) Imprimir la raza de minino y de estrellaCirco.
f) Cambiar el nombre del circo en el que actúa estrellaCirco. */

#include <iostream>
#include "GatoDomestico.h" // Incluimos la definición de la clase GatoDomestico
#include "Felino.h" // Incluimos la definición de la clase Felino
using namespace std;

int main(int argc, char** argv){
    GatoDomestico* minino = new GatoDomestico(2015, "Pittsburgh", "Gato calicó", "Fer"); // Creamos dinámicamente un objeto GatoDomestico con sus atributos iniciales
    Felino* estrellaCirco = new Felino(2014, "Nueva Delhi", "Tigre de Bengala", "Atayde"); // Creamos dinámicamente un objeto Felino con sus atributos iniciales

    cout<<"Dietas ->"<<endl;
    cout<<"Gato: "<<minino->imprimirDieta()<<endl; // Mostramos la dieta del gato
    cout<<"Felino: "<<estrellaCirco->imprimirDieta()<<endl; // Mostramos la dieta del felino

 cout<<"\nAnio Nacimiento - Lugar Nacimiento ->"<<endl;
    cout<<"Gato: "<<minino->getAnioNacimiento()<<" - "<<minino->getLugarNacimiento()<<endl; // Mostramos el año y lugar de nacimiento del gato
    cout<<"Felino: "<<estrellaCirco->getAnioNacimiento()<<" - "<<estrellaCirco->getLugarNacimiento()<<endl; // Mostramos el año y lugar de nacimiento del felino

    cout<<"\nCambiar el nombre del dueño de Gato:"<<endl;
    string nuevoDuenio; // Declaramos la variable de tipo cadena para almacenar el nombre del nuevo dueño
    cout<<"Digite el nombre del nuevo duenio: ";
    getline(cin, nuevoDuenio); // Capturamos el nombre del nuevo dueño
    minino->setNombreDuenio(nuevoDuenio); // Modificamos el nombre del dueño del gato
    cout<<"El nuevo duenio es: "<<minino->getNombreDuenio()<<endl; // Mostramos el nombre del nuevo dueño

    cout<<"\nRaza ->"<<endl;
    cout<<"Gato: "<<minino->getRaza()<<endl; // Mostramos la raza del gato
    cout<<"Felino: "<<estrellaCirco->getRaza()<<endl; // Mostramos la raza del felino

    cout<<"\nCambiar el nombre del circo: "<<endl;
    string nuevoCirco; // Declaramos la variable de tipo cadena para almacenar el nombre del nuevo circo
    cout<<"Digite el nombre del nuevo circo: ";
    getline(cin, nuevoCirco); // Capturamos el nombre del nuevo circo
    estrellaCirco->setNombreCirco(nuevoCirco); // Modificamos el nombre del circo del felino
    cout<<"El nuevo circo es: "<<estrellaCirco->getNombreCirco()<<endl; // Mostramos el nombre del nuevo circo

    delete minino; // Liberamos la memoria del objeto GatoDomestico
    delete estrellaCirco; // Liberamos la memoria del objeto Felino
    
    return 0;
}