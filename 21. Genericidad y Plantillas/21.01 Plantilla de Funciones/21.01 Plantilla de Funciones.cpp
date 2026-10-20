/*Plantillas de funciones*/

#include <iostream>
#include <type_traits> // Incluimos la librería para utilizar common_type_t
using namespace std;

template <typename T1, typename T2> // Declaramos una plantilla de función que recibe dos tipos de datos genéricos
common_type_t<T1,T2> mayor(T1 dato1, T2 dato2){ // Definimos la función mayor() para retornar el mayor de dos valores utilizando un tipo de dato común
    if(dato1>=dato2){ // Verificamos si el primer valor es mayor o igual al segundo
        return dato1; // Retornamos el primer valor
    }
    else{ // Si el segundo valor es mayor
        return dato2; // Retornamos el segundo valor
    }
}

int main(int argc, char** argv){
    cout<<"El mayor de 2 números enteros es: "<<mayor(5,9)<<endl; // Mostramos el mayor de dos números enteros
    cout<<"El mayor de 2 números reales es: "<<mayor(9.87,11.23)<<endl; // Mostramos el mayor de dos números reales
    cout<<"El mayor de 2 caracteres es: "<<mayor("a","x")<<endl; // Mostramos el mayor de dos cadenas de caracteres

    cout<<"El mayor de 2 caracteres es: "<<mayor(5,7.8)<<endl; // Mostramos el mayor de dos números de diferentes tipos

    return 0;
}