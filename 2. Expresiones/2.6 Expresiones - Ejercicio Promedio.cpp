/*Escriba un programa que lea la nota final de cuatro alumnos
y calcule la nota final media de los cuatro alumnos*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    float stu1,stu2,stu3,stu4,promedio = 0;

    cout<<"Dígite la nota del primer alumno: ";
    cin>>stu1; // El usuario ingresa la nota final del primer alumno
    cout<<"Dígite la nota del segundo alumno: ";
    cin>>stu2; // El usuario ingresa la nota final del segundo alumno
    cout<<"Dígite la nota del tercer alumno: ";
    cin>>stu3; // El usuario ingresa la nota final del tercer alumno
    cout<<"Dígite la nota del cuarto alumno: ";
    cin>>stu4; // El usuario ingresa la nota final del cuaarto alumno

    promedio = (stu1+stu2+stu3+stu4)/4;

    cout<<fixed<<setprecision(2); // Redondeamos el resultado mostrado a 2 decimales fijos
    cout<<"\nEl promedio de las notas finales de los cuatro alumnos es: "<<promedio<<endl;

    return 0;
}