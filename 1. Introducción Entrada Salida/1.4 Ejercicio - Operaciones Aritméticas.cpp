/*
Escriba un programa que lea de la entrada estándar de dos números y muestre en la salida estándar
su suma, resta, multiplicación y división. 
*/

#include <iostream>
#include <math.h>

using namespace std;

int main(){
    int n1,n2, suma=0, resta=0, multiplicacion=0, division=0; // Declaramos todas las variables que vamos a ocupar
    
    cout<<"Dígite un número: "; cin>>n1; // Le pedimos al usuario que dígite el primer número
    cout<<"Dígite otro número: "; cin>>n2; // Le pedimos al usuario que dígite el segundo número

    suma = n1 + n2; // Calculamos la suma
    resta = n1 - n2; // Calculamos la resta
    multiplicacion = n1 * n2; // Calculamos la multiplicación
    division = n1 / n2; // Calculamos la división (entera)

    cout<<"\nLa suma es: "<<suma<<endl; // Imprimimos el resultado de la suma
    cout<<"\nLa resta es: "<<resta<<endl; // Imprimimos el resultado de la resta
    cout<<"\nLa multiplicacion es: "<<multiplicacion<<endl; // Imprimimos el resultado de la multiplicación
    cout<<"\nLa division es: "<<division<<endl; // Imprimimos el resultado de la división (entera)

    return 0;
}
