/*Escribe un programa que lea de la entrada estándar un vector de números
y muestre en la salida estándar los números del vector con sus índices asociados*/

#include <iostream>
#include <conio.h>
#include <vector> // Necesario para usar std::vector

using namespace std;

int main(){
    int n; // Declaramos la variable para almacenar el número de elementos que decida el usuario

    cout<<"Dígite el número de elementos que desea tener en el arreglo: ";
    cin>>n;

    vector<int> numeros(n); // Creamos un vector con 'n' posiciones dinámicas
    for(int i=0; i<n; i++){ // Vamos a agregar 'n' elementos al arreglo 
        cout<<"Dígite un número para agregar al arreglo: ";
        cin>>numeros[i]; // Guardando todos los elementos del vector por índice
    }

    // Ahora vamos a mostrar los elementos con sus índices asociados
    cout<<"\n";
    for(int j=0;j<n;j++){ // Recordemos que los índices comienzan desde 0
        cout<<"En el índice "<<j<<" -> "<<numeros[j]<<endl; // Imprimimos en pantalla
    }

    getch();
    return 0;
}