/*Defina una estructura que indique el tiempo empleado por un ciclista en una etapa. La estructura debe tener tres campos:
horas, minutos y segundos. Escriba un programa que dado n etapas calcule el tiempo total empleado en correr todas las etapas.*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Etapa{ // Iniciamos la estructura Etapas
    int horas; // Declaramos el campo de tipo entero 'horas'
    int minutos; // Declaramos el campo de tipo entero 'minutos'
    int segundos; // Declaramos el campo de tipo entero 'segundos'
}et[100];

int main(){
    int n_etapas, horasT=0, minutosT=0, segundosT=0;

    cout<<"Digite el número de etapas: "; cin>>n_etapas; // Capturamos el número de etapas

    if(n_etapas <= 0 || n_etapas > 100){
        cout << "Cantidad invalida. Debe estar entre 1 y 100.\n";
        getch();
        return 0;
    }
    cout<<'\n';

    for(int i=0;i<n_etapas;i++){
        cout<<"Digite los tiempos de la etapa: "<<i+1<<endl;
        cout<<"Horas: "; cin>>et[i].horas; // Capturamos el valor para el campo horas de la estructura Etapas
        cout<<"Minutos: "; cin>>et[i].minutos; // Capturamos el valor para el campo minutos de la estructura Etapas
        cout<<"Segundos: "; cin>>et[i].segundos; // Capturamos el valor para el campo segundos de la estructura Etapas

        // Acumulamos los tiempos de cada etapa
        horasT += et[i].horas;
        minutosT += et[i].minutos;
        segundosT += et[i].segundos;
        cout<<"\n";
    }

    // Normalizamos el tiempo total
    minutosT += segundosT / 60;
    segundosT %= 60;

    horasT += minutosT / 60;
    minutosT %= 60;
    
    // Imprimimos en pantalla el tiempo total empleado por el ciclista para finalizar todas las etapas
    cout<<"\nTiempo total empleado\n";
    cout<<"Horas: "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl;
    
   getch();
   return 0; 
}