/*Hacer un programa que simule un cajero automático con un saldo inicial de 1,000 dólares*/

#include <iostream>

using namespace std;

int main(){
    int opcion;
    float saldo_inicial = 1000, saldo = 0, deposito, retiro;

    cout<<"\tBienvenido a su Cajero Virtual"<<endl;
    cout<<"1. Ingresar dinero en la cuenta"<<endl;
    cout<<"2. Retirar dinero en la cuenta"<<endl;
    cout<<"3. Salir"<<endl;
    cout<<"\nDigite una de las opciones anteriores:";
    cout<<"\n";
    cin>>opcion;

    switch (opcion)
    {
    case 1:
        cout<<"Digite la cantidad de dinero a ingresar: ";
        cin>>deposito;
        saldo = saldo_inicial + deposito;
        cout<<"Dinero en cuenta: "<<saldo<<endl; break;

    case 2:
        cout<<"Digite la cantidad de dinero que va a retirar: ";
        cin>>retiro;
        if(retiro>saldo_inicial){
            cout<<"NO tiene esa cantidad de dinero";
        }
        else{
            saldo = saldo_inicial - retiro;
            cout<<"Dinero en cuenta: "<<saldo<<endl;
        }
        break;

    case 3:
        cout<<"Gracias por utilizar este cajero, ¡Hasta luego!"<<endl; break;   
        
    default: cout<<"Esa opción es inválida"<<endl; break;    
    }

    return 0;
}