/*La calificación final de un estudiante es la media ponderada de tres notas:

- La nota de prácticas que cuenta 30% del total
- La nota teórica que cuenta un 60% del total
- La nota de participación que cuenta el 10% restante

Escriba un programa que lea de la entrada estándar las tres notas de un alumno
y escriba en la salida estándar su nota final.
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    float practica,teorica,participacion,nota_final;

    cout<<"Dígite la nota de prácticas: "; cin>>practica;
    cout<<"Dígite la nota teórica: "; cin>>teorica;
    cout<<"Dígite la nota de participación: "; cin>>participacion;

    // Calculamos la nota final con las ponderaciones proporcionadas
    nota_final = (practica*0.3)+(teorica*0.6)+(participacion*0.1); 

    cout<<fixed<<setprecision(2);
    cout<<"\nLa nota final del alumno es de: "<<nota_final<<endl;

    return 0;
}