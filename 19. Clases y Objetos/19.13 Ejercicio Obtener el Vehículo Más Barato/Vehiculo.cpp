#include <iostream>
#include "Vehiculo.h" // Incluimos la definición de la clase Vehiculo
using namespace std;

float Vehiculo::getPrecio(){ // Definición del método getPrecio() para obtener el precio del vehículo
    return precio; // Retornamos el valor del atributo precio
}

void Vehiculo::mostrarDatos(){ // Definición del método mostrarDatos() para mostrar los datos del vehículo
    cout<<"Marca: "<<marca<<endl; // Mostramos la marca
    cout<<"Modelo: "<<modelo<<endl; // Mostramos el modelo
    cout<<"Precio: "<<precio<<endl; // Mostramos el precio
}

int Vehiculo::indiceMBarato(Vehiculo coches[],int n){
    int indice = 0; // Inicializamos el índice del vehículo más barato en la primera posición
    float precio; // Declaramos una variable auxiliar para almacenar el precio más bajo encontrado

    precio = coches[0].getPrecio(); // Tomamos el precio del primer vehículo como referencia inicial
    for(int i=1;i<n;i++){ // Recorremos el arreglo desde la segunda posición
        if(coches[i].getPrecio() < precio){ // Comparamos el precio actual con el menor encontrado
            precio = coches[i].getPrecio(); // Actualizamos el precio más bajo
            indice = i; // Guardamos el índice del nuevo vehículo más barato
        }
    }

    return indice; // Retornamos el índice del vehículo más barato
}