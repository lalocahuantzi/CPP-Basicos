/*Crear un programa para simular un equipo de fútbol (futbolista, entrenador y doctor), para lo cuál
tendremos lo siguiente:
- Una clase base Persona, que tendrá los siguientes datos: nombre, apellido, edad.
- La clase derivada Futbolista tendrá los siguientes datos: dorsal y posición.
- La clase derivada Entrenador tendrá de dato la estrategia que utiliza.
- La clase derivada Médico, la titulación y los años de experiencia.
Hacer un menú donde se tengan las siguientes opciones:

1. Viaje en equipo
2. Entrenamiento
3. Partido de fútbol
4. Planificar entrenamiento
5. Entrevista
6. Curar lesión
*/

#include <iostream>
#include <stdlib.h>
#include "Persona.h" // Incluimos la definición de la clase Persona
#include "Futbolista.h" // Incluimos la definición de la clase Futbolista
#include "Entrenador.h" // Incluimos la definición de la clase Entrenador
#include "Medico.h" // Incluimos la definición de la clase Medico
using namespace std;

Persona* equipo[4]; // Declaramos un arreglo de punteros a objetos de la clase Persona

void viajarE(){ // Definimos la función viajarE() para mostrar el viaje de los integrantes del equipo
    for(int i=0;i<4;i++){ // Recorremos el arreglo para mostrar la acción de cada integrante del equipo
        cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> "; // Mostramos el nombre y apellido del integrante
        equipo[i]->viajar(); // Llamamos al método viajar() del integrante
    }
}

void entrenamientoE(){ // Definimos la función entrenamientoE() para mostrar el entrenamiento del equipo
    for(int i=0;i<4;i++){ // Recorremos el arreglo para mostrar la acción de cada integrante del equipo
        cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> "; // Mostramos el nombre y apellido del integrante
        equipo[i]->entrenamiento(); // Llamamos al método entrenamiento() del integrante
    }
}

void partidoFutbolE(){ // Definimos la función partidoFutbolE() para mostrar la participación del equipo en el partido
    for(int i=0;i<4;i++){ // Recorremos el arreglo para mostrar la acción de cada integrante del equipo
        cout<<equipo[i]->getNombre()<<" "<<equipo[i]->getApellido()<<" -> "; // Mostramos el nombre y apellido del integrante
        equipo[i]->partidoFutbol(); // Llamamos al método partidoFutbol() del integrante
    }
}

void planificarEntrenamientoE(){ // Definimos la función planificarEntrenamientoE() para mostrar la planificación del entrenador
    cout<<equipo[2]->getNombre()<<" "<<equipo[2]->getApellido()<<" -> "; // Mostramos el nombre y apellido del entrenador
    ((Entrenador *)equipo[2])->planificarEntrenamiento(); // Convertimos el puntero a Entrenador y llamamos al método planificarEntrenamiento()
}

void entrevistaE(){ // Definimos la función entrevistaE() para mostrar las entrevistas de los futbolistas
    cout<<equipo[0]->getNombre()<<" "<<equipo[0]->getApellido()<<" -> "; // Mostramos el nombre y apellido del futbolista
    ((Futbolista *)equipo[0])->entrevista(); // Convertimos el puntero a Futbolista y llamamos al método entrevista()

    cout<<equipo[1]->getNombre()<<" "<<equipo[1]->getApellido()<<" -> "; // Mostramos el nombre y apellido del futbolista
    ((Futbolista *)equipo[1])->entrevista(); // Convertimos el puntero a Futbolista y llamamos al método entrevista()
}

void curarLesionE(){ // Definimos la función curarLesionE() para mostrar la atención médica
    cout<<equipo[3]->getNombre()<<" "<<equipo[3]->getApellido()<<" -> "; // Mostramos el nombre y apellido del médico
    ((Medico *)equipo[3])->curarLesion(); // Convertimos el puntero a Medico y llamamos al método curarLesion()
}

void menu(){ // Definimos la función menu() para mostrar las opciones del programa
    int opcion; // Declaramos la variable de tipo entero para almacenar la opción ingresada por el usuario

    do{ // Ejecutamos un ciclo que se repetirá hasta que el usuario decida salir
        cout<<"\t.:MENU:."<<endl;
        cout<<"1. Viaje en equipo"<<endl;
        cout<<"2. Entrenamiento"<<endl;
        cout<<"3. Partido de fútbol"<<endl;
        cout<<"4. Planificar entrenamiento"<<endl;
        cout<<"5. Entrevista"<<endl;
        cout<<"6. Curar lesión"<<endl;
        cout<<"7. Salir"<<endl;
        cout<<"Digite una opción: ";
        cin>>opcion; // Capturamos la opción ingresada por el usuario
        cout<<endl;

        switch(opcion){ // Evaluamos la opción ingresada para ejecutar la acción correspondiente
            case 1: // Viaje en equipo
                viajarE(); // Llamamos a la función que muestra el viaje de los integrantes del equipo
                break;
            case 2: // Entrenamiento
                entrenamientoE(); // Llamamos a la función que muestra el entrenamiento del equipo
                break;
            case 3: // Partido de fútbol
                partidoFutbolE(); // Llamamos a la función que muestra la participación del equipo en el partido
                break;
            case 4: // Planificar entrenamiento
                planificarEntrenamientoE(); // Llamamos a la función que muestra la planificación del entrenador
                break;
            case 5: // Entrevista
                entrevistaE(); // Llamamos a la función que muestra las entrevistas de los futbolistas
                break;
            case 6: // Curar lesión
                curarLesionE(); // Llamamos a la función que muestra la atención médica
                break;
            case 7: break; // Salimos del programa
            default: cout<<"\nSe equivocó de opción menú"<<endl;
        }
        cout<<endl;
        system("pause"); // Pausamos la ejecución del programa
        system("cls"); // Limpiamos la pantalla para volver a mostrar el menú
    }while(opcion != 7); // El ciclo se repite mientras la opción seleccionada sea diferente de 7
}

int main(int argc, char** argv){
    equipo[0] = new Futbolista("Lionel", "Messi", 35, 10, "Delantero"); // Creamos dinámicamente un objeto Futbolista y lo asignamos a la primera posición del arreglo
    equipo[1] = new Futbolista("Cristiano", "Ronaldo", 38, 7, "Delantero"); // Creamos dinámicamente un objeto Futbolista y lo asignamos a la segunda posición del arreglo
    equipo[2] = new Entrenador("Zinedine", "Zidane", 55, "Ofensiva"); // Creamos dinámicamente un objeto Entrenador y lo asignamos a la tercera posición del arreglo
    equipo[3] = new Medico("Gregory","House",57,"Diagnostata",30); // Creamos dinámicamente un objeto Medico y lo asignamos a la cuarta posición del arreglo

    menu(); // Ejecutamos la función menu()

    for(int i=0;i<4;i++){ // Recorremos el arreglo para liberar la memoria de los integrantes del equipo
        delete equipo[i]; // Liberamos la memoria del objeto almacenado en la posición actual
    }

    return 0;
}
