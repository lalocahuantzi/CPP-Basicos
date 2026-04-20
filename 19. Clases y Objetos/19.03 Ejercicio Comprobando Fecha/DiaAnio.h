/*Implementacion de la clase DiaAnio*/

class DiaAnio{ // Definimos la clase DiaAnio
    private: // Atributos (sólo accesibles dentro de la clase)
        int dia,mes; // Declaramos las variables de tipo entero para almacenar el día y mes
    public: // Métodos (accesibles desde fuera de la clase)
        DiaAnio(int _dia,int _mes){ // Declaramos un constructor que recibe valores para inicializar el día y el mes
            dia = _dia; // Asignamos el valor recibido al atributo dia
            mes = _mes; // Asignamos el valor recibido al atributo mes
        }

        bool igual(DiaAnio& d); // Declaramos el método igual()
        void visualizar(); // Declaramos el método visualizar()

};