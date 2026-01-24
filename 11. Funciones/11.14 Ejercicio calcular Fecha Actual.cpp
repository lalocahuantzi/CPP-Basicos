/*Escriba una función nombrada calc_años() que tenga un parámetro entero que represente el número total de días desde la
fecha 01/01/2000 y parámetros de referencia nobrados años, mes y día. la función es calcular el año, mes y día actual
para el número dado de días que se le transmitan. Usando las referencias, la función deberá alterar el forma directa los
argumentos respectivos en la función que llama. Para este problema suponga que cada año tiene 365 días y cada mes tiene 30 días.*/

#include <iostream>
#include <conio.h>

using namespace std;

// Prototipo de Función
void calc_anios(int,int&,int&,int&); // Indicamos la existencia de la función calc_anios()

int main(){
    int totalDias, anio, mes, dia; // Declaración de variables de tipo int 

    cout<<"Digite el número todal de días: "; // Se solicitan los datos al usuario
    cin>>totalDias; // Capturamos el valor ingresado por el usuario

    calc_anios(totalDias,anio,mes,dia); // Se llama a la función calc_anios()

    cout<<"Fecha Actual: "<<dia+1<<"/"<<mes+1<<"/"<<anio+2000<<endl; // Imprimimos en pantalla la fecha obtenida después de los días ingresados por el usuario

    getch();
    return 0;

}

void calc_anios(int totalDias, int& anio, int& mes, int& dia){ // Función que calcula nueva fecha después de los totalDias transcurridos
    anio = totalDias/365; // Obtenemos el año
    totalDias %= 365;
    mes = totalDias/30; // Obtenemos el mes
    dia = totalDias%30; // Obtenemos el día
}