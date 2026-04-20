#include <iostream>
#include "Cuadrilatero.h"
using namespace std;

float Cuadrilatero::obtenerPerimetro(){ // Definición del método obtenerPerimetro() para calcular el perímetro
    float perimetro = 2*(lado1+lado2); // Calculamos el perímetro sumando los lados y multiplicando por 2
    return perimetro; // Retornamos el valor del perímetro
}

float Cuadrilatero::obtenerArea(){ // Definición del método obtenerArea() para calcular el área
    float area = (lado1*lado2); // Calculamos el área multiplicando ambos lados
    return area; // Retornamos el valor del área
}