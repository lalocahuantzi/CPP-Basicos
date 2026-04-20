#include <iostream>
#include "DiaAnio.h" // Incluimos la definición de la clase DiaAnio

using namespace std;

bool DiaAnio::igual(DiaAnio& d){ // Definición del método igual() para comprobar si dos fechas son iguales
    if(dia==d.dia && mes==d.mes){ // Comparamos tanto el día como el mes del objeto actual con los del objeto recibido
        return true; // Si ambos coinciden, las fechas son iguales
    }
    else{
        return false; // Si alguno es diferente, las fechas no son iguales
    }
}

void DiaAnio::visualizar(){ // Definición del método visualizar() para mostrar los datos de la fecha
    cout<<"Mostrando los datos: "<<endl;
    cout<<"Mes: "<<mes<<"\nDia: "<<dia<<endl; // Mostramos en pantalla el mes y el día almacenados en el objeto
}