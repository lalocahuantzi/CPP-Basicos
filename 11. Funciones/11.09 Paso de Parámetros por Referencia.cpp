/*Paso de Parámetros por referencia*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
void valNuevo(int&,int&); // Indicamos la existencia de la función valNuevo()

int main(){
    int num1, num2; // Declaración de variables de tipo int

    cout<<"Digite 2 números:"<<endl; // Solicitamos 2 valores al usuario
    cin>>num1; // Capturamos el valor ingresado por el usuario
    cin>>num2; // Capturamos el valor ingresado por el usuario

    valNuevo(num1,num2); // Se llama a la función valNuevo() y se le dan los valores ingresados

    cout<<"El nuevo valor del primer número es: "<<num1<<endl; // Imprimimos en pantalla el nuevo valor
    cout<<"El nuevo valor del segundo número es: "<<num2<<endl; // Imprimimos en pantalla el nuevo valor

    getch();
    return 0;
}

void valNuevo(int& xnum, int& ynum){ // Función que modifica los valores recibidos
    cout<<"El valor del primero número es: "<<xnum<<endl; // Imprimimos en pantalla el valor original
    cout<<"El valor del segundo número es: "<<ynum<<endl; // Imprimimos en pantalla el valor original

    xnum = 89; // Se modifican directamente los valores originales
    ynum = 45; // Se modifican directamente los valores originales
}