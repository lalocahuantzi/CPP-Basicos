/*Realice una función recursiva para la Sucesión de Fibonacci.
Nota: La Sucesión de Fibonacci está formada por la secuencia de números:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89,...

    fibonacci(n) = n                                , si n<2
                   fibonacci(n-1)+fibonacci(n-2)    , si n>=2
*/

#include <iostream>
#include <conio.h>
using namespace std;

// Prototipo de Función
int fibonacci(int);  // Indicamos la existencia de la función fibonacci()

int main(){
    int nElementos; // Declaramos la variable entera del número de elementos que se desean de la sucesión de Fibonacci

    do{
        cout<<"Digite el número de elementos: "; // Se solicitan los datos al usuario
        cin>>nElementos; // Capturamos el número de elementos ingresado por el usuario
    }while(nElementos <= 0); // Debe ser un valor mayor o igual a 0

    cout<<"\nSucesión Fibonacci: ";
    for(int i=0;i<nElementos;i++){ // Llamamos a la función fibonacci con el iterador i como parámetro
        cout<<fibonacci(i)<<" , "; // Imprimimos cada uno de los elementos de la sucesión de Fibonacci
    }

    cout<<"\n";
    
    getch();
    return 0;
}

int fibonacci(int n){ // Función recursiva para obtener los elementos de la sucesión de Fibonacci -> Se llama a sí misma para resolver el problema
    if(n<2){ // Caso Base: Los dos primeros valores de la sucesión son 0 y 1
        return n;
    }
    else{ // Cada término nuevo se obtiene sumando los dos anteriores
        return fibonacci(n-1)+fibonacci(n-2);
    }
}
