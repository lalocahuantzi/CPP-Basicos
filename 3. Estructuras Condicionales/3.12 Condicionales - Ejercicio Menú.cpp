/*Hacer un menú que considere las siguientes opciones: 

Caso 1: Cubo de un número
Caso 2: Número par o impar
Caso 3: Salir
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int opcion, numero;

    cout<<"Digite un número entero: "<<endl; cin>>numero;
    
    cout<<"\tElija una opción para realiza con ese número"<<endl;
    cout<<"1. Elevar al cubo ese número"<<endl;
    cout<<"2. Evaluar si el número es par o impar"<<endl;
    cout<<"3. Salir"<<endl;
    cin>>opcion;

    switch (opcion)
    {
    case 1: // Realizamos las intrucciones de la opción 1
        cout<<"El número "<<numero<<" elevado al cubo es igual a -> "<<pow(numero,3)<<endl;
        break;
    case 2: // Realizamos las intrucciones de la opción 2
        if((numero)%2 != 0){ // Si el residuo al dividir entre 2 es distinto de cero significa que es un número impar 
        cout<<"El número digitado es impar"<<endl;
        }
        else{ // Caso contrario, si el residuo al dividir entre 2 es igual a cero significa que es un número par
        cout<<"El número digitado es par"<<endl;
        }
        break;

    case 3: // Realizamos las intrucciones de la opción 3
        cout<<"Saliendo del programa ¡Hasta luego!"<<endl; break;

    default: cout<<"Esa opción es inválida"<<endl; break; // Opción incorrecta
    }
    return 0;
}