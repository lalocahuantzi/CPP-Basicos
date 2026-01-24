/*Escriba una función en C++ llamada mayor() que devuelva la fecha más reciente de cualquier par de fechas que se le transmitan.
Por ejemplo, si se transmiten las fechas 10/09/2005 y 11/03/2015 a mayor(), será devuelta la segunda fecha.*/

#include <iostream>
#include <conio.h>

using namespace std;

struct Fecha{ // Iniciamos la estructura Fecha
    int dia,mes,anio; // Declaramos los campos de tipo entero 'dia'|'mes'|'anio'
}f1,f2;

// Prototipo de Función
void pedirDatos(); // Indicamos la existencia de la función pedirDatos()
Fecha mayor(Fecha,Fecha); // Indicamos la existencia de la función mayor() -> Recibe 2 estructuras Fecha y devuelve 1 estructura Fecha
void muestra(Fecha);// Indicamos la existencia de la función muestra()

int main(){
    pedirDatos(); // Se solicitan los datos al usuario

    Fecha x = mayor(f1,f2); // Llamamos a la función mayor() que recibe 2 estrucutras Fecha y devuelve otra estructura fecha

    muestra(x); // Llamamos a la función que imprime el resultado de la comparación de las fechas

    getch();
    return 0;
}

void pedirDatos(){ // Función que solicita los datos al usuario
    cout<<"Digite la primera fecha: "<<endl;
    cout<<"Día: "; cin>>f1.dia; // Capturamos el día ingresada por el usuario para fecha1
    cout<<"Mes: "; cin>>f1.mes; // Capturamos el mes ingresada por el usuario para fecha1
    cout<<"Año: "; cin>>f1.anio; // Capturamos el anio ingresada por el usuario para fecha1

    cout<<"Digite la segunda fecha: "<<endl;
    cout<<"Día: "; cin>>f2.dia; // Capturamos el día ingresada por el usuario para fecha2
    cout<<"Mes: "; cin>>f2.mes; // Capturamos el mes ingresada por el usuario para fecha2
    cout<<"Año: "; cin>>f2.anio; // Capturamos el anio ingresada por el usuario para fecha2
}

Fecha mayor(Fecha f1, Fecha f2){ // Función para comparar 2 fechas y obtener la mayor
    Fecha mayorFecha;

    if(f1.anio > f2.anio){ // Comparamos los años
        mayorFecha = f1;
    }
    else if(f1.anio < f2.anio){ // Comparamos los años
        mayorFecha = f2;
    }
    else{ // Los años son iguales
        if(f1.mes > f2.mes){ // Comparamos los meses
            mayorFecha = f1;
        }
        else if(f1.mes < f2.mes){ // Comparamos los meses
            mayorFecha = f2;
        }
        else{ // Meses iguales
            if(f1.dia >= f2.dia){ // Comparamos los días
                mayorFecha = f1;
            }
            else{ // Comparamos los días
                mayorFecha = f2;
            }
        }
    }
    return mayorFecha;
}

void muestra(Fecha x){ // Función que imprime en pantalla la fecha más reciente de las 2 ingresadas por el usuario
    cout<<"\nLa fecha más reciente es: "<<x.dia<<"/"<<x.mes<<"/"<<x.anio<<endl;
}