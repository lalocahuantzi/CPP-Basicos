/*Escriba un función nombrada cambio() que tenga un parámetro en número entero y seis parámetros de referencia
en número entero nombrados cien, cincuenta, veinte, diez, cinco y uno, respectivamente. La función tiene que
considerar el valor entero trasmitido como una cantidad en dólares y cinvertir el valor en el número menor
de billetes equivalentes.*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
void cambio(int,int&,int&,int&,int&,int&,int&); // Indicamos la existencia de la función cambio()

int main(){
    int valor,cien,cincuenta,veinte,diez,cinco,uno; // Declaración de variables de tipo int

    cout<<"Digite la cantidad en dólares: "; // Se solicitan los datos al usuario
    cin>>valor; // Capturamos el valor ingresado por el usuario

    cambio(valor,cien,cincuenta,veinte,diez,cinco,uno); // Se llama a la función cambio()

    // Imprimimos en pantalla la cantidad de dólares en billetes de cada denominación
    cout<<"Cantidad de billetes a entregar como cambio ->"<<endl;
    cout<<"Cien: "<<cien<<endl;
    cout<<"Cincuenta: "<<cincuenta<<endl;
    cout<<"veinte: "<<veinte<<endl;
    cout<<"Diez: "<<diez<<endl;
    cout<<"Cinco: "<<cinco<<endl;
    cout<<"Uno: "<<uno<<endl;

    getch();
    return 0;
}

// Función que nos ayuda a calcular cuántos billetes se entregan por cada denominación dependiendo del monto ingresado por el usuario
void cambio(int valor, int& cien, int& cincuenta, int& veinte, int& diez, int& cinco, int& uno){ 
    cien = valor/100; // Cuántos billetes de 100
    valor %= 100;
    cincuenta = valor/50; // Cuántos billetes de 50
    valor %= 50;
    veinte = valor/20; // Cuántos billetes de 20
    valor %= 20;
    diez = valor/10; // Cuántos billetes de 10
    valor %= 10;
    cinco = valor/5; // Cuántos billetes de 5
    uno = valor%5; // Cuántos billetes de 1
}