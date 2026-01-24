/*Realice una función que tome como parámetros un vector y su tamaño y diga si el vector está ordenado crecientemente. Sugerencia:
compruebe que para todas las posiciones del vector, salvo para la 0, el elemento del vector es mayor o igual al elemento que le precede
en el vector.*/

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void comprobarOrdenamiento(vector<int>&); // Indicamos la existencia de la función comprobarOrdenamiento()

vector<int> vec; // Declaramos el vector a utilizar
int tam; // Declaramos la variable global del tamaño del vector

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    comprobarOrdenamiento(vec); // Se llama a la función para comprobar si el vector está ordenado o no

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

void comprobarOrdenamiento(vector<int>& vec){
    char band = 'F'; // Bandera booleana para indicar si el vector está ordenado o no
    // 6 1 3 4 5
    int i =0;
    while((band == 'F')&&(i<vec.size() - 1)){ // se recorre el vector comparando cada elemento con el siguiente
        if(vec[i]>vec[i+1]){
            band = 'V'; // Se marca que el vector NO está ordenado
        }
        i++;
    }
    if(band == 'F'){ // Se muestra el resultado según el valor de la bandera booleana
        cout<<"El arreglo está ordenado crecientemente"<<endl;
    }
    else{
        cout<<"El arreglo NO está ordenado crecientemente"<<endl;
    }
}