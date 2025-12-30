/* Estructuras Anidadas en C++

Las estructuras anidadas permiten que una estructura contenga otra estructura como uno de sus campos.
Esto es útil cuando un objeto tiene información compuesta, ya que esto permite modelar información más compleja y organizada,
agrupando datos relacionados dentro de un mismo objeto.
*/
#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

struct InfoDireccion{ // Iniciamos la estructura InfoDireccion
    string direccion; // Declaramos el campo de tipo cadena 'direccion'
    string ciudad; // Declaramos el campo de tipo cadena 'ciudad'
    string provincia; // Declaramos el campo de tipo cadena 'provincia'
};

struct Empleado{ // Iniciamos la estructura Empleado
    string nombre; // Declaramos el campo de tipo cadena 'nombre'
    InfoDireccion dir_empleado; // Estructura anidada (dirección del empleado)
    double salario; // Declaramos el campo de tipo double 'salario'
}empleados[2];

int main(){

    for(int i=0;i<2;i++){
        cout<<"Digite su nombre: ";
        getline(cin, empleados[i].nombre); // Capturamos la cadena de texto para el campo nombre de la estructura empleado
        cout<<"Digite su direccion: ";
        getline(cin, empleados[i].dir_empleado.direccion); // Capturamos la cadena de texto para el campo dirección de la estructura anidada info_direccion
        cout<<"Ciudad: ";
        getline(cin, empleados[i].dir_empleado.ciudad);  // Capturamos la cadena de texto para el campo ciudad de la estructura anidada info_direccion
        cout<<"Provincia: ";
        getline(cin, empleados[i].dir_empleado.provincia);  // Capturamos la cadena de texto para el campo provincia de la estructura anidada info_direccion
        cout<<"Salario: ";
        cin>>empleados[i].salario;  // Capturamos el valor para el campo salario de la estructura empleado

        cin.ignore(); // Limpia el buffer antes del siguiente getline
        cout<<"\n";
    }

    // Imprimiendo los datos

    for(int i=0;i<2;i++){
        cout<<"Nombre: "<<empleados[i].nombre<<endl;
        cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
        cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
        cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
        cout<<"Salario: "<<empleados[i].salario<<endl;
        cout<<"\n";
    }

    getch();
    return 0;
}