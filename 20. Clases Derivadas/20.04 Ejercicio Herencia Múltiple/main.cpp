/*Considere la siguiente relación de herencia, la cual involucra tres clases: Alumno, Deportista y
BecadoDeporte. Esta última representa a aquellos alumnos que son deportistas y que por esa razón han
recibido una beca especial del gobierno para premiar sus esfuerzos. Decida qué atributos y métodos incluir
de tal manera que su programa pueda:

a) Declarar objetos llamados alumnoJuan y alumnoPedro de tipo Alumno.
b) Declarar un objeto llamado deporLuis de tipo Deportista.
c) Declarar dos objetos llamados bdAna y bdCarment de tipo BecadoDeporte.
d) Imprimir los datos de todos los objetos declarados.
e) Actualizar el nombre de la carrera que están estudiando alumnoJuan y bdAna. El dato dado por el usuario
será el nombre de la nueva carrera.
f) Actualizar el nombre del entrenador deporluis y bdCarment. El dato dado por el usuario será el nombre
del nuevo entrenador.
g) Actualizar el monto de la beca de bdAna y bdCarmen. El dato dado por el usuario será el porcentaje
de incremento de la beca actual.
*/

#include <iostream>
#include "Alumno.h" // Incluimos la definición de la clase Alumno
#include "Deportista.h" // Incluimos la definición de la clase Deportista
#include "BecadoDeporte.h" // Incluimos la definición de la clase BecadoDeporte
using namespace std;

int main(int argc, char** argv){
    Alumno* alumnoJuan = new Alumno("Informatica"); // Creamos dinámicamente un objeto Alumno con sus atributos iniciales
    Alumno* alumnoPedro = new Alumno("Sistemas"); // Creamos dinámicamente un objeto Alumno con sus atributos iniciales
    Deportista* deporLuis = new Deportista("Popeye"); // Creamos dinámicamente un objeto Deportista con sus atributos iniciales
    BecadoDeporte* bdAna = new BecadoDeporte("Administración", "Luis", 1200); // Creamos dinámicamente un objeto BecadoDeporte con sus atributos iniciales
    BecadoDeporte* bdCarmen = new BecadoDeporte("Contabilidad", "La Roca", 1350); // Creamos dinámicamente un objeto BecadoDeporte con sus atributos iniciales

    cout<<"Mostrando Datos de los Individuos"<<endl;
    cout<<"\nMostrando Datos de alumnoJuan ->"<<endl;
    alumnoJuan->mostrarDatos(); // Mostramos los datos del alumno
    cout<<"Mostrando Datos de alumnoPedro ->"<<endl;
    alumnoPedro->mostrarDatos(); // Mostramos los datos del alumno
    cout<<"Mostrando Datos de deporLuis ->"<<endl;
    deporLuis->mostrarDatos(); // Mostramos los datos del deportista
    cout<<"Mostrando Datos de bdAna ->"<<endl;
    bdAna->mostrarDatos(); // Mostramos los datos del becado
    cout<<"Mostrando Datos de bdCarmen ->"<<endl;
    bdCarmen->mostrarDatos(); // Mostramos los datos del becado

    string nuevaCarrera; // Declaramos la variable de tipo cadena para almacenar el nombre de la nueva carrera
    cout<<"\nDigite la nueva carrera de alumnoJuan: ";
    getline(cin, nuevaCarrera); // Capturamos el nombre de la nueva carrera
    alumnoJuan->setNombreCarrera(nuevaCarrera); // Modificamos el nombre de la carrera del alumno
    cout<<"Digite la nueva carrera de bdAna: ";
    getline(cin, nuevaCarrera); // Capturamos el nombre de la nueva carrera
    bdAna->setNombreCarrera(nuevaCarrera); // Modificamos el nombre de la carrera del becado

    cout<<"La nueva carrera de alumnoJuan es: "<<alumnoJuan->getNombreCarrera()<<endl; // Mostramos el nombre de la nueva carrera
    cout<<"La nueva carrera de bdAna es: "<<bdAna->getNombreCarrera()<<endl; // Mostramos el nombre de la nueva carrera

    string nuevoEntrenador; // Declaramos la variable de tipo cadena para almacenar el nombre del nuevo entrenador
    cout<<"\nDigite el nuevo Entrenador de deporLuis: ";
    getline(cin, nuevoEntrenador); // Capturamos el nombre del nuevo entrenador
    deporLuis->setNombreEntrenador(nuevoEntrenador); // Modificamos el nombre del entrenador del deportista
    cout<<"Digite el nuevo Entrenador de bdCarmen: ";
    getline(cin, nuevoEntrenador); // Capturamos el nombre del nuevo entrenador
    bdCarmen->setNombreEntrenador(nuevoEntrenador); // Modificamos el nombre del entrenador del becado
    cout<<"\nEl nuevo entrenador de deporLuis es: "<<deporLuis->getNombreEntrenador()<<endl; // Mostramos el nombre del nuevo entrenador
    cout<<"El nuevo entrenador de bdCarmen es: "<<bdCarmen->getNombreEntrenador()<<endl; // Mostramos el nombre del nuevo entrenador

    float incremento; // Declaramos la variable de tipo flotante para almacenar el porcentaje de incremento
    cout<<"\nDigite el incremento de bdAna en %: ";
    cin>>incremento; // Capturamos el porcentaje de incremento de la beca
    bdAna->setMontoBeca(incremento); // Incrementamos el monto de la beca del alumno
    cout<<"Digite el incremento de bdCarmen en %: ";
    cin>>incremento; // Capturamos el porcentaje de incremento de la beca
    bdCarmen->setMontoBeca(incremento); // Incrementamos el monto de la beca del alumno
    cout<<"\nEl nuevo monto Beca de bdAna: "<<bdAna->getMontoBeca()<<endl; // Mostramos el nuevo monto de la beca
    cout<<"El nuevo monto Beca de bdCarmen: "<<bdCarmen->getMontoBeca()<<endl; // Mostramos el nuevo monto de la beca
    
    delete alumnoJuan; // Liberamos la memoria del objeto Alumno
    delete alumnoPedro; // Liberamos la memoria del objeto Alumno
    delete deporLuis; // Liberamos la memoria del objeto Deportista
    delete bdAna; // Liberamos la memoria del objeto BecadoDeporte
    delete bdCarmen; // Liberamos la memoria del objeto BecadoDeporte

    return 0;
}