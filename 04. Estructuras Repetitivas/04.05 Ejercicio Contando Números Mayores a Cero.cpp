/*Realice un programa que lea de la entrada estándar números hasta que se introduzca un cero.
En ese momento el programa debe terminar y mostrar en la salida estándar el número de valores mayores que cero leídos*/

#include <iostream>
#include <conio.h> 

using namespace std;

int main(){
    int n, cont = 0; // 

    do{
        cout<<"Digite el siguiente número de la lista: "; cin>>n;
        if(n>0){
            cont += 1; // Incrementamos el valor del contador por cada número ingresado que sea mayor a 0
        }
    } while (n>0); // Mientras el usuario siga ingresando números mayores a cero el 'do' se sigue ejecutando
    
    cout<<"El total de números mayores a cero en la lista es igual a: "<<cont<<endl; // Imprimimos el valor del contador

    getch();
    return 0;
}