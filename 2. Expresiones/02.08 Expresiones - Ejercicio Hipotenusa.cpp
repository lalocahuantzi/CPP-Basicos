/*Escriba un programa que lea de la entrada estándar los dos catetos de un triángulo rectángulo
y escriba en la salida estándar su hipotenusa*/

#include <iostream>
#include <iomanip>
#include <math.h> // Necesitamos math.h para utilizar funciones como 'sqrt(x)' y 'pow(x,n)'

using namespace std;

int main(){
    float a,b,c = 0; // Declaramos las variables que vamos a ocupar

    cout<<"Dígite el valor del primer cateto: "; cin>>a;
    cout<<"Dígite el valor del segundo cateto: "; cin>>b;

    // Calculamos el valor de la hipotenusa usando el teorema de Pitágoras
    c = sqrt(pow(a,2)+pow(b,2)); 
    
    cout<<fixed<<setprecision(3); // Redondeamos el resultado mostrado a 3 decimales fijos
    cout<<"\nEl valor de la hipotenusa es de: "<<c<<endl; // Imprimimos el valor de la hipotenusa

    return 0;
}