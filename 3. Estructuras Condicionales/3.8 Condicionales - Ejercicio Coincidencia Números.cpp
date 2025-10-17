/*Escribe un programa que lea de la entrada estándar tres números enteros.
Después debe de leer un cuarto número entero e indicar si el número coincide con alguno
de los introducidos con anterioridad.*/

#include <iostream>
using namespace std;

int main(){

    int num1,num2,num3,num4;

    cout<<"Digite el primer número entero: "<<endl; cin>>num1;
    cout<<"Digite un segundo número entero: "<<endl; cin>>num2;
    cout<<"Digite un tercer número entero: "<<endl; cin>>num3;

    cout<<"Digite un cuarto número entero para poder comparar: "<<endl;
    cin>>num4;

    if (num4 == num1){ // Evaluamos si el 4° número coincide con el 1°
        cout<<"El cuarto número coincide con el primero -> "<<num1<<endl;}
    else if (num4 == num2){ // Evaluamos si el 4° número coincide con el 2°
        cout<<"El cuarto número coincide con el segundo -> "<<num2<<endl;}
    else if (num4 == num3){ // Evaluamos si el 4° número coincide con el 3°
        cout<<"El cuarto número coincide con el tercero -> "<<num3<<endl;}
    else{ // En caso de que ninguno de los 3 primeros números coicinda con el 4°
        cout<<"El cuarto número ("<<num4<<") no coincide con ninguno de los anteriores."<<endl;}

    return 0;
}