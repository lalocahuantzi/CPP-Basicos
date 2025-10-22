/*Realice un programa que calcule y muestre en la salida estándar la suma de los cuadrados
de los 10 primeros enteros mayores que cero*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int suma = 0, cuadrado;

    for(int i=1;i<=10;i++){ // Se repite el proceso desde 1 hasta el 10
        cuadrado = i * i; // Vamos calculando el cuadrado del número iterando
        suma += cuadrado; // (suma = suma + cuadrado); Vamos sumando el valor del cuadrado de 'i' con lo que ya se había almacenado en 'suma'
    }

    cout<<"El resultado de la suma es: "<<suma<<endl; // Imprimimos en pantalla el valor de la suma de los cuadrados hasta 10

    system("pause");
    return 0;

}