#include <iostream>
#include "Atleta.h" // Incluimos la definición de la clase Atleta
using namespace std;

float Atleta::getTiempoCarrera(){ // Definición del método getTiempoCarrera() para obtener el tiempo del atleta
    return tiempoCarrera; // Retornamos el valor del atributo tiempoCarrera
}

void Atleta::mostrarDatos(){ // Definición del método mostrarDatos() para mostrar la información del atleta
    cout<<"Número de Atleta: "<<numeroAtleta<<endl; // Mostramos el número del atleta
    cout<<"Nombre: "<<nombre<<endl; // Mostramos el nombre del atleta
    cout<<"Tiempo de Carrera: "<<tiempoCarrera<<endl; // Mostramos el tiempo de carrera
}

int Atleta::indiceGanador(Atleta atletas[],int n){ // Definición del método static para encontrar el atleta con menor tiempo
    float tiempoCarrera; // Declaramos una variable auxiliar para almacenar el menor tiempo encontrado
    int indice = 0; // Inicializamos el índice del atleta ganador en la primera posición

    tiempoCarrera = atletas[0].getTiempoCarrera(); // Tomamos el tiempo del primer atleta como referencia inicial
    for(int i=1;i<n;i++){ // Recorremos el arreglo desde el segundo elemento
        if(atletas[i].getTiempoCarrera() < tiempoCarrera){ // Comparamos el tiempo actual con el menor encontrado
            tiempoCarrera = atletas[i].getTiempoCarrera(); // Actualizamos el menor tiempo
            indice = i; // Guardamos la posición del nuevo atleta ganador
        }
    }
    return indice; // Retornamos el índice del atleta con menor tiempo
}