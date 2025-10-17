/*Escribe un programa que lea de la entrada estándar el precio de un producto y muestre en
la salida estándar el precio del producto al aplicarle el IVA (Impuesto al Valor Agregado)*/

#include <iostream>
#include <iomanip> // Incluimos este header para utilizar 'fixed' y 'setprecision'

using namespace std;

int main(){

    float precio_sin_iva, iva, precio_final = 0; // Declaramos las variables a ocupar
    
    cout<<"Dígite el precio del producto: "; cin>>precio_sin_iva; // Pedimos el precio sin IVA
    cout<<"Introduzca el IVA aplicable en su país como %: "; cin>>iva; // Pedimos el IVA aplicable en ese país

    precio_final = precio_sin_iva * (1+(iva/100)); // Calculamos el precio con el IVA aplicado

    cout<<fixed<<setprecision(2); // Redondeamos el resultado mostrado a 2 decimales fijos 
    cout<<"El precio final con IVA es de: "<<precio_final<<endl; // Mostramos en pantalla el precio final

    return 0;
}