/*Cadenas de caracteres*/

#include <iostream>
#include <conio.h>
#include <string.h>
// <string.h> permite trabajar con cadenas de caracteres tipo C (char[])
// <string.h> contiene funciones como strlen(),strcpy(),strcat(),strcmp() que trabajan con cadenas terminadas en '\0'

using namespace std;

int main(){
    char palabra[] = "Eduardo";
    char palabra2[20] = {'E','d','u','a','r','d','o','\0'};
    // char nombre[20]; // 19 caracteres útiles + '\0' (C-string). Hoy se prefiere std::string.
    string nombre;

    cout<<palabra<<endl;
    cout<<palabra2<<endl;

    cout<<"Dígite su nombre: ";
    
    /*
    El detalle que tiene cin>>nombre; es que en cuánto encuentre un espacio deja de guardar
     Es decir, si captura 'Eduardo Cahuantzi', el cout>> únicamente mostrará 'Eduardo'
     (Esto aplica igual para char[] y para std::string cuando usas operador >>)
     cin>>nombre;
     */

    /*
    El problema de la función gets(nombre); es que almacena toda la cadena sin importar la memoria asignada y puede escribir fuera del arreglo (buffer overflow)
    Es decir, si asignamos nombre[20]; el gets puede capturar incorrectamente más espacios de memoria ya que NO limita lo que está leyendo
    Por eso se considera insegura y en C moderno fue eliminada; en C++ NO se recomienda o puede no estar disponible
    gets(nombre); // Evitar usar
    */

    /*
    El problema almacenar la cadena de caracteres con cin.getline(x,y,z) es que sigue siendo memoria asignada estática, equivalente a usar un arreglo char[] de tamaño fijo
    La sintaxis es -> cin.getline(variable,espacio de elementos,dónde debe de terminar)
    cin.getline(nombre,20,'\n'); // Sólo 20 espacios de memoria, lee hasta 19 chars + '\0' o hasta encontrar '\n'
    Importante -> cin.getline(...) NO se usa con std::string, se usa con arreglos tipo char[]
     */

    /*
    getline(cin, var) Es más seguro y flexible ya que no tiene memoria asignada, std::string maneja memoria dinámica internamente
    (Aun así, los acentos dependen también de la codificación/configuración de la consola).

    Importante -> Si antes usaste cin >> algo, queda un '\n' pendiente y getline podría leer una línea vacía.
    En ese caso se suele hacer:
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    */

    getline(cin, nombre); // Puedo almacenar mi nombre completo con espacios y acentos sin preocuparme por la memoria asignada
    cout << "Hola, " << nombre << endl; // Puedo imprimir mi nombre completo como "Hola, Eduardo Cahuantzi Jiménez"
    
    getch();
    return 0;
}
