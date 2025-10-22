/*En una clase de 5 alumnos se han realizado tres exámenes y se requiere determinar el número de:

a) Alumnos que aprobaron todos los exámenes
b) Alumnos que aprobaron al menos un examen
c) Alumnos que aprobaron únicamente el último examen.

Realice un programa que permita la lectura de los datos y el cálculo de las estadísticas
*/

#include <iostream>
#include <conio.h>

using namespace std;

int main(){
    int aprob_tot=0, aprob_1=0, aprob_ult=0; // Declaramos las variables para los contadores de alumnos
    float exa_1, exa_2, exa_3; // Declaramos las variables para capturar los resultados de los exámenes

    for(int i=1;i<=5;i++){ // Vamos a capturar y evaluar los resultados de los 3 exámenes por cada uno de los 5 alumnos
        cout<<"Alumno "<<i<<endl;
        cout<<"Digite el resultado del primer examen: "<<i<<" : ";
        cin>>exa_1;
        cout<<"Digite el resultado del segundo examen: "<<i<<" : ";
        cin>>exa_2;
        cout<<"Digite el resultado del tercer examen: "<<i<<" : ";
        cin>>exa_3;

        if((exa_1>=6)&&(exa_2>=6)&&(exa_3>=6)){ // Si exactamente los 3 exámenes son mayores o iguales a 6
            aprob_tot++; // Se incrementa el contador del total de aprobados
        }
        if((exa_1>=6)||(exa_2>=6)||(exa_3>=6)){ // Si alguno de los 3 exámenes son mayores o iguales a 6
            aprob_1++; // Se incrementa el contador de al menos 1 examen aprobado
        }
        if((exa_1<6)&&(exa_2<6)&&(exa_3>=6)){ // Si los 2 primeros exámenes son menores a 6 y el tercero es mayor o igual que 6
            aprob_ult++; // Se incrementa el contador de únicamente el último examen aprobado
    }

    // Imprimimos en pantalla los resultados de los contadores
    cout<<"\nEl número de alumnos que aprobaron los 3 exámenes es: "<<aprob_tot<<endl;
    cout<<"El número de alumnos que aprobaron al menos uno de los 3 exámenes es: "<<aprob_1<<endl;
    cout<<"El número de alumnos que aprobaron sólo el último examen es: "<<aprob_ult<<endl;

    getch();
    return 0;
}