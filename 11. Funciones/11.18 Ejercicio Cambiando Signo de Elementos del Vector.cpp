/*Realiza una función que tome como parámetros un vector de números y su tamaño y cambie
el signo de los elementos del vector*/

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void cambiarSigno(vector<int>&); // Indicamos la existencia de la función cambiarSigno()
void mostrarVector(vector<int>&); // Indicamos la existencia de la función mostrarVector()

vector<int> vec; // Declaramos el vector a utilizar
int tam; // Declaramos la variable global del tamaño del vector

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    cambiarSigno(vec); // Se llama a la función para cambiar los signos de los elementos del vector
    mostrarVector(vec); // Se llama a la función para mostrar los elementos del vector ya con los signos invertidos

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

void cambiarSigno(vector<int>& vec){ // Función que cambia el signo de los elementos del vector
    // 1 2 3 4 5
    for(int i=0;i<tam;i++){ // se mutliplica cada elemento del vector por -1
        vec[i] *= -1; // vec[i] = vec[i] * -1
    }
}

void mostrarVector(vector<int>& vec){ // Función que muestra los elementos del vector
    cout<<"\nMostrando los elementos del vector con signo cambiado: \n";
    for(int i=0;i<vec.size();i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n";
}