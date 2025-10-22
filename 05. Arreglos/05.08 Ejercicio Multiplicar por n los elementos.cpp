/*Hacer un programa que lea números en un arreglo, los copie a otro arreglo multiplicados por 2 y muestre el segundo arreglo*/

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main(){
    int n; // Declaramos e inicializamos las variables que ocuparemos

    cout<<"Dígite el número de elementos del arreglo: ";
    cin>>n;

    vector<int> numeros1(n), numeros2(n); // Creamos dos vectores con 'n' posiciones dinámicas
    for(int i=0;i<n;i++){ // Vamos a agregar 'n' elementos al arreglo
        cout<<"Dígite un número para agregar al arreglo: ";
        cin>>numeros1[i]; // Guardando todos los elementos del vector
    }
    cout<<"El nuevo arreglo multiplicado por 2 es: "<<endl;
    for(int j=0; j<n; j++){ // Usamos un bucle 'for' que opera hasta el número de elementos n-1
        numeros2[j] = numeros1[j]*2; // Llenamos el nuevo vector con los elementos del primero multiplicados por 2
        cout<<numeros2[j]<<endl; // Imprimimos el nuevo vector con los elementos del primero multiplicados por 2
    }

    return 0;
}