/*Punteros - Declaración de Punteros

&n = Obtiene la dirección de memoria de n
*n = Accede a la variable almacenada en la dirección de memoria de n

*/

#include <iostream>
#include <conio.h>
using namespace std;

int main(){
    int num,*dir_num; // Declaramos la variable entera num y un puntero a una variable de tipo int
    
    num = 20; // Asignamos un valor a la variable num
    dir_num = &num; // Guardamos la dirección de memoria de num en el puntero

    // Imprimimos el valor almacenado en la dirección de memoria a la que apunta el puntero (el valor de num)
    cout<<"Número: "<<*dir_num<<endl;
    // Imprimimos la dirección de memoria dónde está almacenada la variable num 
    cout<<"Dirección de memoria: "<<dir_num<<endl;

    getch();
    return 0;
}