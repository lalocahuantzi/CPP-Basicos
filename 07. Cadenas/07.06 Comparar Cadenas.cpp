#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    
    char palabra1[] = "barco";
    char palabra2[] = "coche";

    if(strcmp(palabra1,palabra2) == 0){ // Si ambas cadenas SON IGUALES se ejecuta este bloque
        cout<<"Ambas cadenas son iguales: "<<palabra1<<endl;
    }
    else{ // Si las cadenas SON DIFERENTES se ejecuta este bloque        
        if(strcmp(palabra1,palabra2) > 0){ // strcmp(palabra1,palabra2) > 0 -> palabra1 va después que palabra2 alfabéticamente
            cout<<"Las cadenas son diferentes y "<<palabra1<<" está después alfabéticamente"<<endl;
        }
        else{ // strcmp(palabra1,palabra2) < 0 -> palabra2 va después que palabra1 alfabéticamente
            cout<<"Las cadenas son diferentes y "<<palabra2<<" está después alfabéticamente"<<endl;
        }
    }

    getch();
    return 0;
}
