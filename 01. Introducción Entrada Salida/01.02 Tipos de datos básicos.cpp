// Tipos de datos básicos en C++

#include <iostream>
#include <string>

using namespace std;

int main(){
    int entero = 15; // En este caso estamos almacenando el valor 15 en la variable 'entero'
    float flotante = 7.2; // En este caso estamos almacenando el valor 7.2 en la variable 'flotante'
    double doble = 16.3456; // En este caso estamos almacenando el valor de 16.3456 en la variable 'doble'
    char inicial = 'E'; // En este caso char almacena un carácter individual (1 byte)
    const char* nombre = "Eduardo"; // En este caso const char* es un puntero a una secuencia de caracteres
    char nombre2[10] = "Eduardo"; // En este caso es un arreglo de tamaño fijo y debe terminar en '\0'

    // Para trabajar con texto en C++ moderno lo mejor es usar std::string después de importar #include<string>
    // Debido a que maneja memoria automáticamente, crece dinámicamente, tiene métodos y operadores para manipular texto
    string apellidos = "Cahuantzi Jiménez"; // Almacenamos los apellidos en la clase std::string

    cout<<entero<<endl; // Imprimimos en pantalla el tipo de dato int
    cout<<flotante<<endl; // Imprimimos en pantalla el tipo de dato float
    cout<<doble<<endl; // Imprimimos en pantalla el tipo de dato double
    cout<<inicial<<endl; // Imprimimos en pantalla el tipo de dato char
    cout<<nombre<<endl; // Imprimimos en pantalla el tipo de dato const char* x
    cout<<nombre2<<endl; // Imprimimos en pantalla el tipo de dato char x[n] (Con n siendo el número de espacios asignados)
    cout<<apellidos<<endl; // Imprimimos en pantalla el tipo de dato string
    
    return 0;
}


