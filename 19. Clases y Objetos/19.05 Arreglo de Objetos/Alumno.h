/*Implementación de la clase Alumno*/

class Alumno{ // Definimos la clase Alumno
    private: // Atributos (sólo accesibles dentro de la clase)
        float calMate, calProgra; // Declaramos las variables de tipo flotante para almacenar las calificaciones del alumno
    public: // Métodos (accesibles desde fuera de la clase)
        Alumno(float _calMate,float _calProgra){ // Declaramos un constructor que recibe las calificaciones de Matemáticas y Programación
            calMate = _calMate; // Asignamos el valor recibido al atributo calMate
            calProgra = _calProgra; // Asignamos el valor recibido al atributo calProgra
        }

        Alumno(){ // Declaramos el constructor por defecto
        
        }

        void pedirDatos(); // Declaramos el método pedirDatos() para capturar las calificaciones del alumno
        void mostrarNotas(); // Declaramos el método mostrarNotas() para mostrar las calificaciones y el promedio
};