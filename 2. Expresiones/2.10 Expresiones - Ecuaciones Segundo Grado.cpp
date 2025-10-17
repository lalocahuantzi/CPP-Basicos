/*Escriba un programa que calcule las soluciones de una ecuación de segundo grado de la forma
 ax^2+bx+c=0, utilizando la fórmula general*/

 #include <iostream>
 #include <iomanip>
 #include <math.h>

 using namespace std;

 int main(){
    float a,b,c,x1 = 0,x2 = 0; // Declaramos las variables que vamos a utilizar

    cout<<"Dígite el coeficiente 'a' de la ecuación: "; cin>>a;
    cout<<"Dígite el coeficiente 'b' de la ecuación: "; cin>>b;
    cout<<"Dígite el coeficiente 'c' de la ecuación: "; cin>>c;

    cout<<fixed<<setprecision(3); // Redondeamos el resultado mostrado a 5 decimales fijos

    if((pow(b,2)-(4*a*c)) < 0){ // Evaluamos si el determinante es mayor o menor a 0
        cout<<"El determinante es menor a 0 -> NO hay solución en los números reales"<<endl;
    }
    else{
        x1 = (-b+sqrt((pow(b,2)-(4*a*c))))/(2*a);
        x2 = (-b-sqrt((pow(b,2)-(4*a*c))))/(2*a);
            if(x1==x2){ // Si sólo hay una raíz en los reales no tiene sentido imprimirla 2 veces
                cout<<"Sólo hay una raíz en los reales y es: x="<<x1<<endl;
            }
            else{ // Si hay 2 raíces en los números reales imprimimos ambos valores
                cout<<"El valor de las raíces en los reales son: x1="<<x1<<" , x2="<<x2<<endl;
            }   
    }
    return 0;
 }