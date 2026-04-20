/*Funciones Amigas*/

#include <iostream>
#include "Personaje.h" // Incluimos la definición de la clase Personaje

using namespace std;

// Función para modificar los valores de ataque y defensa de un Objeto Personaje
void modificar(Personaje &p,int at,int def){ // Recibimos el objeto por referencia para poder modificar sus atributos
    p.ataque = at; // Modificamos directamente el atributo ataque del objeto
    p.defensa = def; // Modificamos directamente el atributo defensa del objeto
}

int main(int argc, char**argv){
    Personaje* principal = new Personaje(100,90);

    principal->mostrarDatos(); // Mostramos los valores iniciales del personaje

    modificar(*principal,50,60); // Llamamos a la función amiga para modificar los atributos del objeto

    principal->mostrarDatos(); // Mostramos los nuevos valores después de la modificación
    
    return 0;
}
