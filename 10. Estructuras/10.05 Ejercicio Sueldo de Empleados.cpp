/*Realizar un programa que lea un arreglo de estructuras los datos de N empleados de la empresa
y que imprima los datos del empleado con mayor y menor salario de la empresa.*/

#include <iostream>
#include <conio.h>
#include <string>
#include <limits>

using namespace std;

struct Empleado{ // Iniciamos la estructura Empleado
    string nombre; // Declaramos el campo de tipo cadena 'nombre'
    float salario; // Declaramos el campo de tipo flotante 'salario'
}emp[100];

int main(){
    int n_empleados, posM=0, posm=0;
    float mayor=0, menor=999999;

    cout<<"Digite el número de empleados: "; cin>>n_empleados; // Capturamos el número de empleados

    if(n_empleados <= 0 || n_empleados > 100){
        cout << "Cantidad invalida. Debe estar entre 1 y 100.\n";
        getch();
        return 0;
    }

    // Regla mental: si se usa cin >> y después getline, es obligatorio limpiar el buffer.
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i=0;i<n_empleados;i++){    
        cout<<i+1<<". Digite su nombre: ";
        getline(cin, emp[i].nombre); // Capturamos la cadena de texto para el campo nombre de la estructura Empleado
        cout<<i+1<<". Digite su salario: ";
        cin>>emp[i].salario; // Capturamos el valor para el campo salario de la estructura Empleado
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        // Evaluamos cuáles son los empleados con el mayor y menor salario de la empresa
        if(emp[i].salario > mayor){
            mayor = emp[i].salario;
            posM = i;
        }
        if(emp[i].salario < menor){
            menor = emp[i].salario;
            posm = i;
        }
        cout<<"\n";
    }

    // Imprimiendo datos de los empleados con el mayor y menor salario
    cout<<"\n.:Datos del empleado con mayor salario:.\n";
    cout<<"Nombre: "<<emp[posM].nombre<<endl;
    cout<<"Salario: "<<emp[posM].salario<<endl;

    cout<<"\n.:Datos del empleado con menor salario\n";
    cout<<"Nombre: "<<emp[posm].nombre<<endl;
    cout<<"Salario: "<<emp[posm].salario<<endl;

    cout<<"\n";

    getch();
    return 0;
}
