/*Ordenamiento Shell:

Debe su nombre a su inventor, Donald L. Shell. Se suele denominar también ordenación por inserción con incrementos decrecientes.
Se considera que es una mejora del método de inserción directa.
Es un algoritmo de ordenamiento que mejora la idea de inserción usando "saltos" (gap). En lugar de comparar elementos vecinos,
compara elementos que están separados por cierta distancia. Al inicio se usan saltos grandes para mover rápidamente elementos
muy fuera de lugar y después se van reduciendo los saltos hasta llegar a 1, donde el arreglo ya queda casi ordenado
y se termina de acomodar con inserciones.
*/
#include <iostream>
#include <conio.h>

using namespace std;

// Función para intercambiar dos valores usando referencias 
void intercambio(float &x, float &y){
    float aux = x; // Guardamos temporalmente el valor de x
    x = y; // x toma el valor de y
    y = aux; // y toma el valor que anteriormente tenía x
}

void ordenacionShell(float a[], int n){
    int salto,i,j,k;
    salto = n/2; // El salto inicial suele ser de n/2

    while(salto>0){ // Mientras el salto sea mayor que 0 seguimos ordenando con ese "gap"
        for(i=salto;i<n;i++){ // Recorremos el arreglo a partir del índice "salto"
            j = i - salto; // j se mueve hacía la izquierda en pasos de tamaño "salto"
            while(j>=0){
                k = j + salto; // k es el índice del elemento con el que comparamos (a la derecha) 
                if(a[j] <= a[k]){ // Si ya están en el orden correcto, dejamos de movernos hacía la izquierda
                    j = -1; // Con esta línea salimos del bucle while
                }
                else{
                    intercambio(a[j],a[k]);
                    j -= salto;
                }
            }
        }
        salto = salto/2; // Reducimos el tamaño del "salto", es decir, comparamos cada vez con elementos más cercanos
    }

}
int main(){
    float arreglo[] = {4,6,1,9,5,10,2,11,1}; // Declaramos el arreglo de números que vamos a ordenar con el Método de Ordenamiento Shell
    int n = sizeof(arreglo) / sizeof(arreglo[0]); // Obtenemos el tamaño real del arreglo

    ordenacionShell(arreglo,n); // Ordenamos el arreglo en forma ascendente

    // Imprimimos en pantalla el arreglo ya ordenado (Ascendente)
    cout<<"Arreglo Ordenado - Forma Ascendente"<<endl;
    for(int i=0;i<n;i++){
        cout<<arreglo[i]<<"|";
    }

    // Imprimimos en pantalla el arreglo ya ordenado (Descendente)
    cout<<"\n\nArreglo Ordenado - Forma Descendente"<<endl;
    for(int i=n-1;i>=0;i--){
        cout<<arreglo[i]<<"|";
    }

    cout<<endl;

    getch();
    return 0;
}


