/*Escriba un programa que calcule el valor de 1*2*3*...*n (factorial)*/
// 5! = 5*4*3*2*1

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n, factorial = 1; // Declaramos e inicializamos las variables que vamos a utilizar
    
    cout<<"Digite el número para calcular el factorial: "; cin>>n; 
    for(int i = n; i>1; i--){ // Utilizamos un bucle 'for' para calcular el factorial del número 'n'
        factorial *= i; // Usamos la multiplicación en asignación para ir calculando el factorial
    }

    cout<<"El factorial del número "<<n<<" es igual a: "<<factorial<<endl; // Imprimimos el resultado del factorial de n!

    getch();
    return 0;
}