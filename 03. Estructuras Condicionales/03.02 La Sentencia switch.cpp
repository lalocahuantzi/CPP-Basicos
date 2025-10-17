/*La sentencia switch
    
    switch(expresion){
        case literal1:
            conjunto de instrucciones1;
            break;
        case literal2:
            conjunto de instrucciones2;
            break;
        case literaln;
            conjunto de instruccionesn;
            break;
        default:
            conjunto de instrucciones por defecto;
            break;
    }
*/

#include <iostream>

using namespace std;

int main(){
    int numero; // Declaramos la variable que vamos a ocupar

    cout<<"Dígite un número entre 1-5: "; cin>>numero;

    switch (numero) // Evaluamos la expresión con respecto al número ingresado
    { 
    case 1: cout<<"Es el número 1"<<endl; break; // Evaluamos el caso '1'
    case 2: cout<<"Es el número 2"<<endl; break; // Evaluamos el caso '2'
    case 3: cout<<"Es el número 3"<<endl; break; // Evaluamos el caso '3'
    case 4: cout<<"Es el número 4"<<endl; break; // Evaluamos el caso '4'
    case 5: cout<<"Es el número 5"<<endl; break; // Evaluamos el caso '5'
    // En caso de que NO se cumpla ninguno de los casos entra el caso 'default'
    default: cout<<"No está en el rango de 1-5"<<endl; break; 
    }
    return 0;
}