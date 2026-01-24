/*Realice una función que tome como parámetros un vector de números enteros y devuelva la suma de sus elementos.*/

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
int calcularSuma(vector<int>&); // Indicamos la existencia de la función calcularSuma()

vector<int> vec; // Declaramos el vector a utilizar
int tam; // Declaramos la variable global del tamaño del vector

int main(){
    pedirDatos(); // Se solicitan los datos al usuario

    // Se llama a la función calcularSuma() que suma todos los elementos del vector
    cout<<"La suma de los elementos del vector es: "<<calcularSuma(vec)<<endl;

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite el número de elementos del vector: ";
    cin>>tam; // Capturamos el valor ingresado por el usuario

    vec.resize(tam); // Se ajusta el tamaño del vector según la cantidad ingresada

    for(int i=0;i<tam;i++){ // Se llenan los elementos del vector
        cout<<i+1<<". Digite un número: ";
        cin>>vec[i]; // Capturamos el valor ingresado por el usuario
    }
}

int calcularSuma(vector<int>& vec){ // Función para calcular la suma de los elementos del vector
    int suma = 0;

    for(int i=0;i<vec.size();i++){
        suma += vec[i];
    }
    return suma; // La función devuelve la suma de los elementos del vector 
}