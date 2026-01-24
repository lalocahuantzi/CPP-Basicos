/*Realiza una fuanción que tome como parámetros un vector de enteros y su tamaño e imprima un vector
con los elementos impares del vector recibido.*/

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void impares(vector<int>&); // Indicamos la existencia de la función impares()

vector<int> vec; // Declaramos el vector a utilizar
int tam; // Declaramos la variable global del tamaño del vector

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    impares(vec); // Se llama a la función impares() para filtrar e imprimir únicamente los números impares del vector

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

void impares(vector<int>& vec){ // Función para filtrar e imprimir únicamente los números impares del vector
    vector<int> vecImpares; // Vector auxiliar para almacenar los elementos impares

    // 1 2 3 4 5
    // 1  3  5
    for(int i=0;i<vec.size();i++){
        if(vec[i]%2!=0){ // Filtramos los elementos pares del vector
            vecImpares.push_back(vec[i]); // Se agregan únicamente los números impares al vector auxiliar
        }
    }

    cout<<"\nImprimiendo los elementos impares del vector: \n";
    for(int i=0;i<vecImpares.size();i++){ // Se recorren los elementos impares almacenados
        cout<<vecImpares[i]<<" ";
    }
    cout<<"\n";
}