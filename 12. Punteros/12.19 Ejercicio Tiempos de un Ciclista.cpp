/*Defina una estructura que indique el tiempo empleado por un ciclista en recorrer una etapa.
La estructura debe tener tres campos: horas, minutos y segundos.
Escriba un programa que dado 3 estapas calcule el tiempo total empleado en correr todas las etapas.
NOTA: Usar punteros.
*/

#include <iostream>
#include <conio.h>
using namespace std;

struct Etapa{ // Iniciamos la estructura Etapa
    int horas,min,seg; // Declaramos los campos de tipo entero 'horas'|'min'|'seg'
}etapas[3], *puntero_etapa = etapas; // puntero_etapa apunta al primer elemento del arreglo etapas

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
void calcularTiempo(Etapa *); // Indicamos la existencia de la función calcularTiempo()

int main(){
    pedirDatos(); // Se solicitan los datos al usuario
    calcularTiempo(puntero_etapa); // Llamamos a la función que obtiene y muestra el tiempo total utilizado sumando las 3 etapas

    cout<<"\n";

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite los tiempos empleados en las etapas: \n";
    for(int i=0;i<3;i++){ // Se recorren las 3 etapas usando aritmética de punteros
        cout<<"Horas: "; cin>>(puntero_etapa+i)->horas; // Capturamos las horas ingresadas por el usuario
        cout<<"Minutos: "; cin>>(puntero_etapa+i)->min; // Capturamos los minutos ingresados por el usuario
        cout<<"Segundos: "; cin>>(puntero_etapa+i)->seg; // Capturamos los segundos ingresados por el usuario
        cout<<"\n";
    }
}

void calcularTiempo(Etapa *puntero_etapa){ // Función para calcular y mostrar el tiempo total utilizado sumando las 3 etapas
    int horasT=0,minutosT=0,segundosT=0; // Variables acumuladoras para sumar el tiempo total de todas las etapas

    for(int i=0;i<3;i++){
        horasT += (puntero_etapa+i)->horas;
        minutosT += (puntero_etapa+i)->min;
        if(minutosT >=60){ // Cada que los minutos superan 60 se suma +1 hora
            minutosT = minutosT -= 60;
            horasT++;
        }
        segundosT += (puntero_etapa+i)->seg;
        if(segundosT >=60){ // Cada que los segundos superan 60 se suma +1 minuto
            segundosT = segundosT -= 60;
            minutosT++;
        } 
    }
    cout<<"\nMostrando el tiempo total: \n"; // Imprimimos en pantalla el tiempo total en horas/minutos/segundos
    cout<<"Horas: "<<horasT<<endl;
    cout<<"Minutos: "<<minutosT<<endl;
    cout<<"Segundos: "<<segundosT<<endl;
}