/*Realice un programa que solicite al usuario que piense un número entero entre el 1 y el 100.
El programa debe generar un número aleatorio en ese mismo rango [1-100], e indicarle al usuario
si el número que digito es menor o mayor al número aleatorio, así hasta que lo adivine.
Por último mostrarle el número de intentos que le llevo.*/

// variable = limite_inferior + rand() % (limite_superior + 1 - limite inferior);

#include <iostream>
#include <conio.h>
#include <time.h>

using namespace std;

int main(){
    int numero, dato, intentos = 0;
    /* time(NULL) llama a 'time' y devuelve los segundos transcurridos desde el 01/01/1970 (epoch)
     srand toma el valor de time(NULL) convertido a unsigned int y lo usa como semilla (seed) del
    generador de número pseudoaleatorios clásico de C*/
    srand(time(NULL));
    
    /*- rand() devuelve un número pseudoaleatorio en [0,RAND_MAX]
      - %100 toma ese valor y se queda con el residuo al dividir entre 100, queda en [0,99]
      - 1+... desplaza ese rango a [1,100]
      - Por esta razón 'dato' queda uniformemente (aprox.) entre 1 y 100 */
    dato = 1 + rand() % (100); 

    do{
        cout<<"Digite un número: "; cin>>numero;

        if(numero>dato){ // Evaluamos si el número ingresado es mayor al valor aleatorio 
            cout<<"\nDigite un número menor a "<<numero<<endl;
        }
        else if(numero<dato){ // Evaluamos si el número ingresado es menor al valor aleatorio
            cout<<"\nDigite un número mayor a "<<numero<<endl;
        }
        intentos++; // Aumentamos el contador de intentos en una unidad
    }while(numero != dato); // Este proceso se repetirá mientras el usuario NO adivine el valor aleatorio


    cout<<"\nFELICIDADES ADIVINASTE EL NÚMERO "<<dato<<endl;
    cout<<"El número de intentos: "<<intentos<<endl;

    getch();
    return 0;
}

/*
Recomendación Moderna (C++ 11 en adelante)

Si quieres un rango exactamente uniforme y mejores propiedades estadísticas:

#include <random>

std::random_device rd;   // fuente de entropía (puede ser pseudo en algunas plataformas)
std::mt19937 gen(rd());  // Mersenne Twister, buen generador
std::uniform_int_distribution<int> dist(1, 100);

int dato = dist(gen);    // número en [1, 100] sin sesgo por módulo
*/