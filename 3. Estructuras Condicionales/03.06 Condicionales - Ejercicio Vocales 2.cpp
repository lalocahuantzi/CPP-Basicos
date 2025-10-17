/*Escriba un prorama que lea de la entrada estándar un carácter e indique en la
salida estándar si el carácter es una vocal minúscula, e suna vocal mayúscula o no es una vocal*/

#include <iostream>

using namespace std;

int main(){

    char letra; // Declaramos la variable que vamos a ocupar
    cout<<"Dígite un carácter alfabético: "; cin>>letra;

    switch(letra){ // No escribimos 'break' en cada uno de los casos y así evaluará todos hasta que encuentre un 'break'
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minúscula"<<endl;break; // Terminamos de evaluar las vocales minúsculas
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U': cout<<"Es una vocal mayúscula"<<endl;break; // Terminamos de evaluar las vocales mayúsculas
        default : cout<<"NO es una vocal ni mayúscula ni minúscula"<<endl;break; // En caso de que el carácter NO sea una vocal
    }

    return 0;
}

