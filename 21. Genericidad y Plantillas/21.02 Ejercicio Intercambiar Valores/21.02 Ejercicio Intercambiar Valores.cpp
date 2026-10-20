#include <iostream>
#include "Intercambio.h" // Incluimos la definición de la función intercambiar()
using namespace std;

int main(int argc, char** argv){
    float dato1, dato2; // Declaramos las variables de tipo flotante para almacenar los dos valores

    cout<<"Digite el valor de dato1: ";
    cin>>dato1; // Capturamos el primer valor
    cout<<"Digite el valor de dato2: ";
    cin>>dato2; // Capturamos el segundo valor

    // Intercambiar el valor de 2 variables
    intercambiar(dato1, dato2); // Llamamos a la función intercambiar() para intercambiar los valores de ambas variables

    cout<<"\nLos nuevos valores son: "<<endl;
    cout<<"Dato1 = "<<dato1<<endl; // Mostramos el nuevo valor de dato1
    cout<<"Dato2 = "<<dato2<<endl; // Mostramos el nuevo valor de dato2

    return 0;
}