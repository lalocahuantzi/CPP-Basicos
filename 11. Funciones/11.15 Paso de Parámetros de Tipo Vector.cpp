/*Paso de parámetros de Tipo Vector

parámetros de la función:
    void nombreDeFuncion(tipo nombreArreglo[], int tamañoArreglo)

llamada a la función
    nombreDeFuncion(nombreArreglo, tamañoArreglo)
*/

// Cuadrados de los elementos del vector

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

// Prototipo de Función
void cuadrado(vector<int>&); // Indicamos la existencia de la función cuadrado()
void muestra(vector<int>&);  // Indicamos la existencia de la función muestra()
// El vector se pasa por referencia para poder modificar sus elementos

int main(){
    vector<int> vec = {1,2,3,4,5}; //

    cuadrado(vec); // Se llama a la función cuadrado() que eleva al cuadrado cada uno de los elementos del vector
    muestra(vec); // Se llamada a la función muestra() que imprime cada uno de los elementos del vector elevados al cuadrado

    getch();
    return 0;
}

void cuadrado(vector<int>& vec){ // Función que eleva al cuadrado los elementos del vector
    for(int i = 0; i < vec.size(); i++){ // Se recorre el vector utilizando su tamaño
        vec[i] *= vec[i]; // Elevamos al cuadrado el elemento i del vector
    }
}

void muestra(vector<int>& vec){ // Función que muestra los elementos del vector elevados al cuadrado
    cout<<"El cuadrado de todos los elementos del vector: "<<endl;
    for(int i = 0; i < vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<"\n";
}