/*Realice un programa que calcule el valor que toma la siguiente función para unos
valores dados de x e y -> f(x,y) = raiz(x)/y**2-1 */

#include <iostream>
#include <iomanip>
#include <math.h> // Necesitamos math.h para utilizar funciones como 'sqrt(x)' y 'pow(x,n)'

using namespace std;

int main(){
    float x,y,resultado = 0; // Declaramos las variables que vamos a ocupar

    cout<<"Dígite el valor de x: "; cin>>x;
    cout<<"Dígite el valor de y: "; cin>>y;

    resultado = (sqrt(x))/(pow(y,2)-1); // Calculamos el valor de la función con x,y

    cout<<fixed<<setprecision(3); // Redondeamos el resultado mostrado a 3 decimales fijos
    cout<<"El resultado de la expresión es: "<<resultado<<endl;

    return 0;
}