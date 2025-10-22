/*Hacer un programa que escriba la sucesión de Fibonacci hasta n -> 1,1,2,3,5,8,13,21,...,n*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n, x=0, y=1, z=1; // Declaramos e inicializamos las variables necesarias
    cout<<"Digite el número de elementos de la sucesión: "; cin>>n;

    cout<<"1 "; // Imprimimos el primer término de la sucesión y en caso de que n=1, el bucle 'for' ni siquiera es considerado
    for(int i = 1; i<n; i++){
        z = x+y; // Al iniciar la sucesión z=x+y -> z=0+1 -> z=1+1 -> z=1+2 -> z=2+3 -> z=3+5 ->...
        cout<<z<<", "; // Imprimimos el término de la sucesión resultado de la suma de los 2 anteriores
        x = y; //Al iniciar la sucesión x=0 -> x=1 -> x=1 -> x=2 -> x=3 ->...
        y = z; // Al iniciar la sucesión y=1 -> y=z=1 -> y=z=2 -> y=z=3 -> y=z=5 ->...
    }

    cout<<"\n";

    getch();
    return 0;
}