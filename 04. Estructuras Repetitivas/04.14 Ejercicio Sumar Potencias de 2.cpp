/*Escriba un programa que calcule el valor de: 2^1+2^2+2^3+...2^n*/

#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

int main(){
    int suma=0, potencia=0, n; // Declaramos e inicializamos las variables que vamos a ocupar
    cout<<"Digite el número de elementos a sumar: "; cin>>n;

    for(int i=1;i<=n;i++){
        potencia = pow(2,i); // Elevamos la base 2 al número iterando 2^i
        suma += potencia; // Vamos acumulando la potencia de 2^i en la suma
    }

    cout<<"\nLa suma total de potencias de 2^n hasta n igual a "<<n<<" es: "<<suma<<endl;

    getch();
    return 0;
}