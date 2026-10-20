/*Defina una plantilla para la clase Arreglo, la cuál podrá definir valores de distinto tipo,
el cuál se definirá el momento de la instancia, el programa deberá tener un menú con las
siguientes opciones:

1. Agregar un nuevo elemento al arreglo
2. Comprobar el espacio en el arreglo
3. Ver arreglo
4. Vaciar arreglo
5. Salir
*/

#include <iostream>
#include "Arreglo.h" // Incluimos la definición de la clase Arreglo
using namespace std;

void opciones(){ // Definimos la función opciones() para mostrar las opciones del menú
    cout<<"\t.:MENU:."<<endl;
    cout<<"1. Agregar un nuevo elemento al arreglo"<<endl;
    cout<<"2. Comprobar el espacio en el arreglo"<<endl;
    cout<<"3. Ver el arreglo"<<endl;
    cout<<"4. Vaciar el arreglo"<<endl;
    cout<<"5. Salir"<<endl;
    cout<<"Digite una opción del menu: ";
}

int main(int argc, char** argv){
    Arreglo <int> arreglo1(5); // Creamos un objeto Arreglo de tipo entero con capacidad para cinco elementos
    int opcion; // Declaramos la variable de tipo entero para almacenar la opción ingresada por el usuario
    int elemento; // Declaramos la variable de tipo entero para almacenar el elemento ingresado por el usuario
    
    do{ // Ejecutamos un ciclo que se repetirá hasta que el usuario decida salir
        opciones(); // Llamamos a la función opciones() para mostrar las opciones del menú
        cin>>opcion; // Capturamos la opción ingresada por el usuario

        switch(opcion){ // Evaluamos la opción ingresada para ejecutar la acción correspondiente
            case 1:
                if(arreglo1.arregloLleno()){ // Verificamos si el arreglo está lleno
                    cout<<"El arreglo está lleno, no puedes agregar más elementos"<<endl;
                }
                else{ // Si el arreglo todavía tiene espacio disponible
                    cout<<"Digite un elemento a agregar: ";
                    cin>>elemento; // Capturamos el elemento a agregar al arreglo
                    arreglo1.agregar(elemento); // Llamamos al método agregar() para añadir el elemento al arreglo
                }
                break;
            case 2:
                if(arreglo1.arregloLleno()){ // Verificamos si el arreglo está lleno
                    cout<<"\nEl arreglo está lleno"<<endl;
                }
                else{ // Si el arreglo todavía tiene espacio disponible
                    cout<<"El arreglo aún no está lleno"<<endl;
                }
                break;
            case 3:
                    cout<<"\nLos elementos del arreglo son: "<<endl;
                    arreglo1.mostrarArreglo(); // Llamamos al método mostrarArreglo() para mostrar los elementos del arreglo
                    break;
            case 4:
                    cout<<"Vaciando el arreglo"<<endl;
                    arreglo1.vaciarArreglo(); // Llamamos al método vaciarArreglo() para vaciar el arreglo
                    break;
            case 5: break; // Salimos del programa
            default: cout<<"Se equivocó de opción de menú"<<endl;
        }
        system("pause"); // Pausamos la ejecución del programa
        system("cls"); // Limpiamos la pantalla para volver a mostrar el menú
    }while(opcion!=5); // El ciclo se repite mientras la opción seleccionada sea diferente de 5

    return 0;
}