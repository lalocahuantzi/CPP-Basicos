/*La sentencia if
    
    if(condicion){
        Instrucciones 1;
    }
    else{
        Instrucciones 2;    
    }
*/
#include <iostream>

using namespace std;

int main(){
    float numero, dato = 5;

    cout<<"Dígite un número: "; cin>>numero;
    // Evaluamos si el número ingresado por el usuario es menor o igual al dato esperado
    if (numero <= dato) 
    {   // Aquí se declaran las instrucciones si se cumple el if
        cout<<"El número ingresado es menor o igual a 5"<<endl;
    }
    else{ // Aquí declaramos las instrucciones para el caso contrario
        cout<<"El número ingresado es mayor a 5"<<endl;
    }

    return 0;
}
