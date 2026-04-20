/*Construir un programa para una competencia de atletismo, el programa debe gestionar una serie de atletas caracterizados por su número de atleta,
nombre y tiempo de carrera, al final el programa debe mostrar los datos del atleta ganador de la carrera.*/

#include <iostream>
#include <limits>
#include "Atleta.h" // Incluimos la definición de la clase Atleta

using namespace std;

int main(int argc, char** argv){
    Atleta* atletas; // Declaramos un puntero a un arreglo dinámico de objetos Atleta
    int numeroAtletas,indiceAtleta; // Declaramos variables para almacenar la cantidad de atletas y el índice del ganador
    int numeroAtleta; // Declaramos la variable de tipo entero para almacenar el número del atleta
    string nombre; // Declaramos la variable de tipo cadena para almacenar el nombre
    float tiempoCarrera; // Declaramos la variable de tipo flotante para almacenar el tiempo de carrera

    cout<<"Digite el número de atletas a competir: "; cin>>numeroAtletas; // Capturamos la cantidad de atletas

    atletas = new Atleta[numeroAtletas]; // Creamos dinámicamente un arreglo de objetos Atleta

    for(int i=0;i<numeroAtletas;i++){ // Recorremos el arreglo para capturar los datos de cada atleta
        cout<<"Digite los atributos del Atleta "<<(i+1)<<": "<<endl;

        cout<<"Digite el número de atleta: "; cin>>numeroAtleta; // Capturamos el número del atleta
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiamos el buffer
        cout<<"Digite el nombre del atleta: "; getline(cin,nombre); // Capturamos el nombre del atleta
        cout<<"Digite el tiempo de carrera: "; cin>>tiempoCarrera; // Capturamos el tiempo de carrera
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpiamos el buffer nuevamente

        atletas[i] = Atleta(numeroAtleta,nombre,tiempoCarrera); // Asignamos el objeto creado al arreglo
    }

    indiceAtleta = Atleta::indiceGanador(atletas,numeroAtletas); // Llamamos al método static para obtener el índice del atleta ganador

    cout<<"\nEl atleta ganador de la carrera es: "<<endl;
    (atletas+indiceAtleta)->mostrarDatos(); // Mostramos los datos del atleta ganador
    // atletas[indiceAtleta].mostrarDatos(); // Forma equivalente

    return 0;
}