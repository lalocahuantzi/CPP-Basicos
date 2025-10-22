/*Desarrolle un programa que lea de la entrada estándar un vector de enteros
y determine el mayor elemento del vector*/

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main(){
    int n, mayor = 0;

    cout<<"Dígite el número de elementos del arreglo: ";
    cin>>n;

    vector<int> numeros(n); // Creamos un vector con 'n' posiciones dinámicas
    for(int i=0;i<n;i++){ // Vamos a agregar 'n' elementos al arreglo
        cout<<"Dígite un número para agregar al arreglo: ";
        cin>>numeros[i]; // Guardando todos los elementos del vector
    
        if(numeros[i] > mayor){ // En caso de que el número introducido sea mayor al último valor en la variable 'mayor'
            mayor = numeros[i]; // Reemplazamos el último valor en la variable 'mayor' por el nuevo número introducido
        }
    }

    cout<<"\nEl mayor elemento del vector es: "<<mayor<<endl; // Imprimimos en pantalla cuál es el mayor elemento del vector

    return 0;
}