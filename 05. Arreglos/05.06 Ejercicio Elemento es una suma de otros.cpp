/*Escribe un programa que defina un vector de números y calcule si existe algún número en el vector
cuyo valor equivale a la suma del resto de los números del vector*/

#include <iostream>
#include <conio.h>
#include <vector>

using namespace std;

int main(){
    int n, suma = 0, suma_aux =0; // Declaramos e inicializamos las variables que ocuparemos

    cout<<"Dígite el número de elementos del arreglo: ";
    cin>>n;

    vector<int> numeros(n); // Creamos un vector con 'n' posiciones dinámicas
    for(int i=0;i<n;i++){ // Vamos a agregar 'n' elementos al arreglo
        cout<<"Dígite un número para agregar al arreglo: ";
        cin>>numeros[i]; // Guardando todos los elementos del vector
        suma += numeros[i]; // Calculamos la suma de todos los elementos del vector
    }
    
    bool eval = false; // Variable booleana que usaremos para evaluar si alguno de los elementos cumple la condición
    for(int j=0; j<n; j++){ // Usamos un bucle 'for' que opera hasta el número de elementos n-1
        
        suma_aux = suma-numeros[j]; // Removemos el elemento 'j' de la suma total de elementos del vector
        if(numeros[j] == suma_aux){ // Evaluamos si el elemento 'j' es igual a la suma del resto de elementos del vector
            cout<<"El valor del elemento "<<numeros[j]<<" es igual a la suma del resto de los elementos del vector"<<endl;
            eval = true; // En caso de que alguno de los elementos cumpla la condición la evaluación se convierte en 'true'
        }
    }
    if(!eval){ // Si ninguno de los elementos cumplió la condición entonces la evaluación se queda como 'false'
        cout<<"Ninguno de los elementos es igual a la suma del resto de elementos del vector"<<endl;
    }

    return 0;
}