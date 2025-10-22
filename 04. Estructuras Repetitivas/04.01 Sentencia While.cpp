/*La sentencia while:

    while(expresión lógica){
        conjunto de instrucciones;
    }
*/

#include <iostream>
#include <conio.h> // Importamos el header 'conio.h' para poder utilizar 'getch()'

using namespace std;

int main(){
    int i; // Declaramos la variable entera, en este caso la vamos a ocupar como contador
    i = 1; // Inicializamos el contador de la sentencia while

    // El while 'piensa' y luego 'actua',
    while(i<=10){ // En este caso actua hasta que el contador llegue a 10
        cout<<i<<endl; // Imprimimos el contador 'i'
        i++; // Aumentamos el contador en una unidad utilizando el '++'
    }
    getch(); // Hace que los programas ejecutables (.exe) NO se cierren automáticamente
    return 0;
}
