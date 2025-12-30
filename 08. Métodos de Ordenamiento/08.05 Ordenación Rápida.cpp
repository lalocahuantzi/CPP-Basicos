/*Ordenamiento Rápido (QuickSort):

Es un algoritmo de ordenamiento basado en dividir el arreglo en partes usando un elemento pivote.
Se elige un valor como pivote y se reacomodan los elementos de forma que:
- Los menores o iguales al pivote queden a la izquierda
- Los mayores al pivote queden a la derecha
Después se aplica el mismo proceso de manera recursiva a cada parte hasta que todo el arreglo quede ordenado.
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

void quickSort(float a[], int primero, int ultimo){
    int i,j,central;
    float pivote;

    // Elegimos el pivote como el elemento central del segmento
    central = (primero+ultimo)/2;
    pivote = a[central];

    // i y j recorren el segmento desde los extremos hacia el centro
    i = primero;
    j = ultimo;

    do{ // Partición: Acomodamos valores menores a la izquierda y valores mayores a la derecha del pivote
        while(a[i]<pivote) i++; // Buscamos un elemento que esté mal del lado izquierdo
        while(a[j]>pivote) j--; // Buscamos un elemento que esté mal del lado derecho

        if(i<=j){ // Si todavía no se cruzan, intercambiamos los elementos encontrados
            intercambio(a[i],a[j]);
            i++;
            j--;
        }
    }while(i<=j);

    if(primero<j){ // Ordenamos recursivamente la parte izquierda (si hay más de un elemento)
    quickSort(a,primero,j); // Ordenamos la sublista izquierda
    }
    if(i<ultimo){ // Ordenamos recursivamente la parte derecha (si hay más de un elemento)
    quickSort(a,i,ultimo); // Ordenamos la sublista derecha
    }
}

int main(){
    float arreglo[] = {4,7,1,8,2,10,5,9,3}; // Declaramos el arreglo de números que vamos a ordenar con el Método de Ordenamiento Rápido
    int n = sizeof(arreglo) / sizeof(arreglo[0]); // Obtenemos el tamaño real del arreglo

    quickSort(arreglo,0,n-1); // Ordenamos el arreglo en forma ascendente

    // Imprimimos en pantalla el arreglo ya ordenado (Ascendente)
    cout<<"Arreglo Ordenado - Forma Ascendente"<<endl;
    for(int i=0;i<9;i++){
        cout<<arreglo[i]<<"|";
    }

    // Imprimimos en pantalla el arreglo ya ordenado (Descendente)
    cout<<"\n\nArreglo Ordenado - Forma Descendente"<<endl;
    for(int i=8;i>=0;i--){
        cout<<arreglo[i]<<"|";
    }

    cout<<endl;

    getch();
    return 0;
}