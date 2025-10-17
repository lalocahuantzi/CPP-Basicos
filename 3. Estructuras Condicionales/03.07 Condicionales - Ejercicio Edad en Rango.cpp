/*Escriba un prorama qie solicite una edad (un entero) e indique en la salida estándar
si la edad introducida está en el rango [18-25]*/

#include <iostream>

using namespace std;

int main(){
    int edad; // Declaramos la variable entera que vamos a ocupar

    cout<<"Dígite su edad: "; cin>>edad;
    //18-19-20-21-22-23-24-25
    if((edad>=18)&&(edad<=25)){ // Si la edad ingresada se encuentra en el rango esperado
        cout<<"Su edad está en el rango de [18-25] años"<<endl;
    }
    else{ // Caso contrario, la edad NO se encuentra en el rango esperado
        cout<<"Su edad no está en el rango de [18-25] años"<<endl;
    }
    return 0;   
}