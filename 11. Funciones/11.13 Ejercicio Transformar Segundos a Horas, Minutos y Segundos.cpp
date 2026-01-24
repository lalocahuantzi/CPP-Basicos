/*Escriba una función nombrada tiempo() que tenga un parámetro en número entero llamado totalSeg y tres parámetros de referencia
enteros nombrados horas, min y seg. la función es convertir el número de segundos transmitido en un número equivalente
de horas, minutos y segundos.*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
void tiempo(int,int&,int&,int&); // Indicamos la existencia de la función tiempo()

 int main(){
    int totalSeg, horas, min, seg; // Declaración de variables de tipo int 

    cout<<"Digite el número total de segundos: "; // Se solicitan los datos al usuario
    cin>>totalSeg; // Capturamos el valor ingresado por el usuario

    tiempo(totalSeg,horas,min,seg); // Se llama a la función tiempo()

    cout<<"\nTiempo equivalente a la cantidad de segundos digitados ->"<<endl; // Imprimimos en pantalla la conversión del tiempo
    cout<<"Horas: "<<horas<<endl;
    cout<<"Minutos: "<<min<<endl;
    cout<<"Segundos: "<<seg<<endl;

    getch();
    return 0;
 }

 void tiempo(int totalSeg, int& horas, int& min, int& seg){ // Función que convierte el número de segundos totales a horas. minutos y segundos
    horas = totalSeg / 3600; // Obtenemos las horas
    totalSeg %= 3600;
    min = totalSeg / 60; // Obtenemos los minutos
    seg = totalSeg % 60; // Obtenemos los segundos
 }