/*Construir un programa que dada una serie de vehículos caracterizados por su marca, modelo y precio, imprima las propiedades del vehículo más barato.
Para ello, se deberán leer por teclado las características de cada vehículo y crear una clase que represente a cada una de ellas.*/

#include <iostream>
#include <limits>
#include "Vehiculo.h" // Incluimos la definición de la clase Vehiculo
using namespace std;

int main(int argc, char** argv){
    Vehiculo* coches; // Declaramos un puntero a un arreglo dinámico de objetos Vehiculo
    int numeroVehiculos,indiceBarato; // Declaramos las variables de tipo entero para almacenar la cantidad de vehículos y el índice del más barato
    string marca,modelo; // Declaramos las variables de tipo cadena para almacenar la marca y modelo
    float precio; // Declaramos la variable de tipo flotante para almacenar el precio


    cout<<"Digite el número de vehículos: ";
    cin>>numeroVehiculos; // Capturamos la cantidad de vehículos
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiamos el buffer

    coches = new Vehiculo[numeroVehiculos]; // Creamos dinámicamente un arreglo de objetos Vehiculo

    for(int i=0;i<numeroVehiculos;i++){ // Recorremos el arreglo para capturar los datos de cada vehículo
        cout<<"\nDigite los datos del vehículo "<<(i+1)<<": "<<endl;
        cout<<"Digite la marca: ";
        getline(cin,marca); // Capturamos la marca
        cout<<"Digite el modelo: ";
        getline(cin,modelo); // Capturamos el modelo
        cout<<"Digite el precio: ";
        cin>>precio; // Capturamos el precio

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiamos el buffer nuevamente

        coches[i] = Vehiculo(marca,modelo,precio); // Asignamos el objeto creado a la posición i del arreglo
    }

    indiceBarato = Vehiculo::indiceMBarato(coches,numeroVehiculos); // Llamamos al método static para obtener el índice del vehículo más barato

    cout<<"\nEl Vehículo más barato es: "<<endl;
    (coches+indiceBarato)->mostrarDatos(); // Mostramos los datos del vehículo más barato
    // coches[indiceBarato].mostrarDatos(); // Forma equivalente de acceso

    delete[] coches; // Liberamos la memoria del arreglo dinámico
    return 0;
}
