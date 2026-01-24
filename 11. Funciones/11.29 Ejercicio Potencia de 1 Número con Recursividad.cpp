/*Escriba una función recursiva que calcule un número eleveado a una potencia entera mayor o igual que cero: x^y

    potencia(x,y) = x                   , si y=1
                  = x*potencia(x,y-1)   , si y>1
*/

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de Función
int potencia(int,int); // Indicamos la existencia de la función potencia()

int main(){
    int base,exponente; // declaramos las variables enteras para almacenar la base y exponente

    // Pedir Datos al Usuario
    cout<<"Digite la base: "; cin>>base; // Capturamos la base ingresada por el usuario
    cout<<"Digite el exponente: "; cin>>exponente; // Capturamos el exponente ingresado por el usuario

    cout<<base<<"^"<<exponente<<" = "<<potencia(base,exponente)<<endl; // Llamamos a la función potencia() con la base y exponente ingresados por el usuario

    getch();
    return 0;
}

int potencia(int x, int y){ // Función recursiva para elevar un número base^exponente  -> Se llama a sí misma para resolver el problema
    int pot;

    if(y==1){ // Caso Base : Cualquier número elevado a 1 es él mismo
        pot = x;
    }
    else{ // Caso General
        pot = x * potencia(x,y-1); // Se multiplica la base por el resultado de elevarla a y-1
    }
    return pot; // Devolvemos el resultado de elevar -> base^exponente
}