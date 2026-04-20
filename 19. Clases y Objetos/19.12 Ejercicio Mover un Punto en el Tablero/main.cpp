/*Construir un programa que permita dirigir el movimiento de un objeto dentro de un tablero y actualice su posición dentro del mismo.
Los movimientos posibles son ARRIBA, ABAJO, IZQUIERDA Y DERECHA. Tras cada movimiento el programa mostrará la nueva dirección elegida
y las coordenadas de situación del objeto dentro del tablero.*/

#include <iostream>
#include "Tablero.h" // Incluimos la definición de la clase Tablero
using namespace std;

int main(int argc, char** argv){
    Tablero* ob1;
    int x,y,opcion,n;

    cout<<"Digite la posición inicial del objeto: "<<endl;
    cout<<"Posición X: "; cin>>x; // Capturamos la coordenada X inicial
    cout<<"Posición Y: "; cin>>y; // Capturamos la coordenada Y inicial

    ob1 = new Tablero(x,y); // Creamos dinámicamente el objeto Tablero con la posición inicial

    do{ // Ejecutamos un ciclo que se repetirá hasta que el usuario decida salir
        cout<<"\n\t.:MENU:."<<endl;
        cout<<"1. Mover Arriba"<<endl;
        cout<<"2. Mover Abajo"<<endl;
        cout<<"3. Mover Derecha"<<endl;
        cout<<"4. Mover Izquierda"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Digite una opción: ";
        cin>>opcion; // Capturamos la opción seleccionada por el usuario

        if(opcion>=1 && opcion<=4){ // Verificamos si la opción corresponde a un movimiento válido
            cout<<"\nDigite cuántas posiciones desea mover: ";
            cin>>n; // Capturamos el número de posiciones que se moverá el objeto
        }

        switch(opcion){ // Evaluamos la opción ingresada para ejecutar el movimiento correspondiente
            case 1: ob1->moverArriba(n); break; // Movemos el objeto hacia arriba
            case 2: ob1->moverAbajo(n); break; // Movemos el objeto hacia abajo
            case 3: ob1->moverDerecha(n); break; // Movemos el objeto hacia la derecha
            case 4: ob1->moverIzquierda(n); break; // Movemos el objeto hacia la izquierda
            case 5: break; // Salimos del programa
            default: cout<<"\nSe equivocó de opción de menú"<<endl;
        }

        cout<<"\nPosición Actual (X,Y): ("<<ob1->getX()<<","<<ob1->getY()<<")"<<endl; // Mostramos la posición actual del objeto

    }while(opcion!=5); // El ciclo se repite hasta que el usuario elija salir

    return 0;
}