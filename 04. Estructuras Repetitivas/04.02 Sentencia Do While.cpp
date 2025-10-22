/*La sentencia do while
    do{
        conjunto de instrucciones;
    } while(expresión lógica);
*/

#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int i;

    i = 1;

    do{ // El do while 'actua' y luego 'piensa'
        cout<<i<<endl; // Imprimimos en pantalla el contador
        i++; // Aumenta el contador de 1 en 1
    } while(i<=10); // Mientras se siga cumpliendo la condición del 'while' el 'do' seguirá ejecutando las instrucciones

    system("pause"); // Hacer que los programas ejecutables (.exe) no se cierren automáticamente
    return 0;
}
