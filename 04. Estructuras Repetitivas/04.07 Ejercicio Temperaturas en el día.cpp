/*Escriba un programa que tome cada 4 horas la tempratura exterior, leyéndola durante un período
de 24 horas. Es decir, debe leer 6 temperaturas. Calcule la temperatura media del día, la tempratura más alta y la más baja*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    float temp, media=0, maxim=0, minim=100, suma = 0; // Declaramos e inicializamos las variables necesarias para el programa

    for(int i=0;i<=20;i+=4){ // Se repite el proceso desde 0 (medianoche) hasta el 20, incrementamos el contador en saltos de 4
        cout<<"Digite la temperatura exterior en °C (Celsius) a las "<<i<<" horas: "; cin>>temp;
        suma += temp; // Añadimos la nueva temperatura medida a la suma que vamos a utilizar para calcular la temperatura media
        if(temp>maxim){ // Si la nueva temperatura es mayor al valor de 'maxim' anterior lo reemplaza 
            maxim = temp;
        }
        if(temp<minim){ // Si la nueva temperatura es menor al valor de 'minim' anterior lo reemplaza
            minim = temp;
        }
        media = suma/6; // Se obtiene la temperatura media dividiendo la suma total de tempraturas entre el número de mediciones
    }

    // Imprimimos en pantalla los 3 valores obtenidos (máxima, mínima y media)
    cout<<"\nLa temperatura máxima registrada es: "<<maxim<<endl;
    cout<<"La temperatura mínima registrada es: "<<minim<<endl;
    cout<<"La temperatura media registrada es: "<<media<<endl; 

    getch();
    return 0;

}