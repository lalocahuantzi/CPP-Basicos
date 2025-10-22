/*Hacer un programa que calcule el resultado de la siguiente expresión:
1-2+3-4+5-6...n*/

#include <iostream>
#include <conio.h>

using namespace std;
    
int main(){
    int n, suma=0; // Declaramos la variable del número de elmeentos y donde vamos a almacenar el valor de la suma

    cout<<"Digite el número de elementos a sumar: "; cin>>n;

    for(int i=1; i<=n; i++){ // Se repite el proceso desde 1 hasta 'n'

        if(i%2 != 0){ // Si el número es impar se ejecuta este 'if' sumando el valor del iterador 'i'
            // Vamos sumando el valor del iterador 'i'únicamente cuando 'i' es impar
            suma += i; // (suma = suma + i); Se agrega a lo que ya se había almacenado en 'suma'
        }
        else if(i%2 == 0){ // Si el número es par se ejecuta este 'if' restando el valor del iterador 'i'
            // Vamos restando el valor del iterador 'i'únicamente cuando 'i' es par
            suma -= i; // (suma = suma - i); Se resta a lo que ya se había almacenado en 'suma'
        }
    }

    cout<<"\nLa suma alternante hasta "<<n<< "es igual a: "<<suma<<endl; // Imprimimos en pantalla el valor de la suma hasta 'n'

    getch();
    return 0;
}