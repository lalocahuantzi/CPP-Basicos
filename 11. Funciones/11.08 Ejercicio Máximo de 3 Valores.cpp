/*Escriba una plantilla de función llamada maximo() que devuelva el valor
máximo de tres argumentos que se transmitan a la función cuando sea llamada.
Suponga que los tres argumentos serán del mismo tipo de datos.*/

#include <iostream>
#include <conio.h>

using namespace std;

template <class T> // La letra T representa un tipo de dato genérico
T maximo(T dato1, T dato2, T dato3); // Este tipo de dato se definirá cuando la función sea llamada

int main(){
    int dato1 = 4, dato2 = 6, dato3 = 8; // Declaramos las variables del mismo tipo de dato (int)

    // Se llama a la función maximo() y el compilador sustituye T por int automáticamente 
    cout<<"El máximo valor es: "<<maximo(dato1,dato2,dato3)<<endl;

    getch();
    return 0;
}

// Definición de la plantilla de función
template <class T>
T maximo(T dato1, T dato2, T dato3){
    T max; // Declaramos la variable que almacenará el valor máximo

    // Se comparan los tres valores para encontrar el mayor
    if((dato1>=dato2) && (dato1>=dato3)){
        max = dato1;
    }
    else{
        if((dato2>=dato1) && (dato2>=dato3)){
            max = dato2;
        }
        else{
            max = dato3;
        }
    }
    return max; // La función devuelve el máximo de los 3 valores
}