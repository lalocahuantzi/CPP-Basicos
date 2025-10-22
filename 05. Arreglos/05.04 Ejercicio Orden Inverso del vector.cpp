/*Escribe un programa que defina un vector de números y muestre en la salida estándar
el vector en orden inverso - del último al primer elemento*/

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main(){
    int n; // Declaramos la variable para almacenar el número de elementos que decida el usuario

    cout<<"Dígite el número de elementos que desea tener en el arreglo: ";
    cin>>n;

    vector<int> numeros(n); // Creamos un vector con 'n' posiciones dinámicas
    for(int i=0; i<n; i++){ // Vamos a agregar 'n' elementos al arreglo
        cout<<"Dígite un número para agregar al arreglo: ";
        cin>>numeros[i]; // Guardando todos los elementos del vector
    }

    // Ahora vamos a mostrar los elementos con sus índices invertidos
    cout<<"\n";
    for(int j=n-1;j>=0;j--){ // Ahora comenzamos desde el índice n-1 y vamos retrocediendo
        cout<<"En el índice "<<j<<" -> "<<numeros[j]<<endl; // Imprimimos en pantalla
    }

    getch();
    return 0;
}