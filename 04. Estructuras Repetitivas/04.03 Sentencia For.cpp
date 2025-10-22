/*La sentencia for

    for(expr1; expresión lógica; expr2){
        conjunto de instrucciones;
    }
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int i; // Declaramos la variable entera que en este caso vamos a utilizar como contador del 'for'

    for(i=1; i<=10; i++){ // Establecemos en el 'for' desde dónde ejecuta, hasta dónde ejecuta y el salto entre cada ejecucuión
        cout<<i<<endl; // La instrucción es imprimir el contador en cada iteración del 'for'
    }

    getch();
    return 0;
}