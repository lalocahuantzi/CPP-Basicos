/*Escriba un programa que lea de la entrada estándar un carácter e indique en la salida estándar
si el carácter es una vocal minúscula o no*/

#include<iostream>

using namespace std;

int main(){

    char letra; // Declaramos la variable que vamos a ocupar
    cout<<"Dígite un carácter alfabético: "; cin>>letra;

    switch(letra){ // No escribimos break en cada uno de los casos y así evaluará todos 
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u': cout<<"Es una vocal minúscula"<<endl;break;
        default : cout<<"NO es una vocal minúscula"<<endl;break;
    }

    return 0;
}