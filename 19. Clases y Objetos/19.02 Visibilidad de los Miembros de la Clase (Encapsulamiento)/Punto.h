/*Declaración de una Clase*/

class Punto{ // Definimos la clase Punto
    public: // Atributos (Ahora accesibles desde fuera de la clase)
        int x,y; // Declaramos las variables de tipo entero para almacenar las coordenadas X y Y del punto
    public: // Métodos (accesibles desde fuera de la clase)
        Punto(int _x,int _y){  // Declaramos un constructor que recibe valores para inicializar las coordenadas X y Y
            x = _x; // Asignamos el valor recibido al atributo x
            y = _y; // Asignamos el valor recibido al atributo y
        }
        Punto(){ // Declaramos un constructor que inicializa las coordenadas en (0,0)
            x = y = 0; // Asignamos 0 tanto a x como a y
        }

        void setX(int valorX); // Declaramos el método setX() para establecer el valor de X
        void setY(int valorY); // Declaramos el método setY() para establecer el valor de Y
        int getX(); // Declaramos el método getX() para obtener el valor de X
        int getY(); // Declaramos el método getY() para obtener el valor de Y
};