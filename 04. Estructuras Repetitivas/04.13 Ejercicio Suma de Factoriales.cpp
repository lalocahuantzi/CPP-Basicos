/*Escriba un programa que calcule el valor de: 1!+2!+3!+...+n! (suma de factoriales)*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int n, factorial = 1, suma = 0; // Declaramos e inicializamos las variables que vamos a utilizar
    
    cout<<"Digite hasta qué número se calculará la suma de factoriales: "; cin>>n; 
    
    // Usamos dos bucles 'for', el primero acumula la suma de factoriales que el segundo va calculando
    for(int i=n;i>1;i--){ // Primer bucle 'for' para acumular la suma
        for(int j = i; j>1; j--){ // Segundo bucle 'for' para calcular el factorial del número 'i'
            factorial *= i; // Usamos la multiplicación en asignación para ir calculando el factorial
        }
        cout<<"El factorial de "<<i<<" es igual a: "<<factorial<<endl;
        suma += factorial; // Vamos acumulando la suma de factoriales
        factorial = 1; // Reiniciamos la variable auxuliar de 'factorial' a 1 para iterar de nuevo
    }
    cout<<"La suma de factoriales hasta el número "<<n<<" es igual a: "<<suma<<endl; // Imprimimos el resultado de la suma

    getch();
    return 0;
}