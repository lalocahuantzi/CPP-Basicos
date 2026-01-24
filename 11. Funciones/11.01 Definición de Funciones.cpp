/*La sintaxis básica para la definición de una función en C++ es la siguiente:

tipo nombre(tipo var1,tipo var2,...,tipo varn){
    conjunto de instrucciones;
}

Ejemplos de funciones:
    - int numMax(int x, int y) // Devuelve un valor de tipo entero
    - double intercambio(double x, double y) // Devuelve un valor de tipo double
    - void(int x, int y) // Las funciones void() NO devuelven ningún valor

Ordenamiento de instrucciones (Forma básica)

* directivas del preprocesador (headers, macros)

* prototipos de función (la forma en la que le decimos al programa que la función existe)

* int main(){
    conjunto de instrucciones;
    return valor;
}

* definiciones de función

*/

// Ejemplo encontrar el mayor de 2 números

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de función -> Aquí indicamos al programa que la función existe pero aún no especifica cómo está implementada
int encontrarMax(int x, int y); 

int main(){
    int n1,n2; // Declaramos las 2 variables de los 2 números a comparara
    int mayor;

    cout<<"Dígite 2 números: "<<endl;
    cin>>n1;
    cin>>n2;

    mayor = encontrarMax(n1,n2); // Se llama a la función encontrarMax() y se almacena el valor devuelto en la variable 'mayor'

    cout<<"El mayor de los 2 números es: "<<mayor<<endl; // Imprimimos en pantalla el resultado de la comparación

    getch();
    return 0;
}

// Aquí se desarrolla el código de la función declarada anteriormente
int encontrarMax(int x, int y){ // Al ser una función de tipo int nos devuelve un valor de tipo entero
    int numMax;

    if(x>y){ // Comparamos cuál de los 2 valores es mayor que el otro
        numMax = x;
    }
    else{
        numMax = y;
    }
    return numMax; // Se devuelve el mayor entero encontrado después de la comparación
}


