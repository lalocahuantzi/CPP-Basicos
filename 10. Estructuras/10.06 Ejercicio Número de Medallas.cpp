/*Hacer un arreglo de estructura llamada atleta para N atletas que contenga los siguientes campos:
Nombre, país, número de medallas y devuelva los datos (Nombre,país) del atleta que ha ganado el mayor número de medallas.*/

#include <iostream>
#include <conio.h>
#include <string>
#include <limits>

using namespace std;

struct Atleta{ // Iniciamos la estructura Atleta
    string nombre; // Declaramos el campo de tipo cadena 'nombre'
    string pais; // Declaramos el campo de tipo cadena 'pais'
    int numero_medallas; // Declaramos el campo de tipo entero 'numero_medallas'
}atletas[100];

int main(){
    int nAtletas,mayor=0,pos=0;

    cout<<"Digite el número de atletas: "; cin>>nAtletas; // Capturamos el número de atletas

    if(nAtletas <= 0 || nAtletas > 100){
        cout << "Cantidad invalida. Debe estar entre 1 y 100.\n";
        getch();
        return 0;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for(int i=0;i<nAtletas;i++){
        // Capturamos la cadena de texto para el campo nombre de la estructura Atleta
        cout<<i+1<<". Digite su nombre: "; getline(cin, atletas[i].nombre);
        // Capturamos la cadena de texto para el campo pais de la estructura Atleta
        cout<<i+1<<". Digite su país: "; getline(cin, atletas[i].pais);
        // Capturamos el valor para el campo numero_medallas de la estructura Atleta
        cout<<i+1<<". Digite el número de medallas: "; cin>>atletas[i].numero_medallas;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout<<"\n";

        // Evaluamos cuál es el mejor atleta con base en el número de medallas obtenidas
        if(atletas[i].numero_medallas>mayor){
            mayor=atletas[i].numero_medallas;
            pos=i;
        }
    }

    // Imprimiendo los datos del mejor atleta
    cout<<"Nombre: "<<atletas[pos].nombre<<endl;
    cout<<"Pais: "<<atletas[pos].pais<<endl;

    getch();
    return 0;
}