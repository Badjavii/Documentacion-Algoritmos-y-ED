// Ejercicio 1: Entradas y Salidas de Datos en C++

#include <iostream>
using namespace std;

int main()
{
    // Declaración de una variable de tipo entero.
    // Otra alternativa: "int x = 0;".
    int x;
    x = 0;

    // Imprimir un mensaje en pantalla.
    // "\n" representa un salto de línea en la impresión.
    cout << "Hola mundo\n\nIntroduzca un número: ";

    // Entrada de datos por el usuario.
    // Similar a "x = input()" en Python.
    cin >> x;

    // Imprimir el doble del número ingresado.
    // En Python: "print("El doble de ", x, " es ", 2*x, "\n\n")".
    cout << "El doble de " << x << " es " << 2 * x << "\n\n";

    // Pausar la ejecución del programa.
    system("pause");

    // Buena práctica para terminar la función main.
    // Nota: Esto solo se aplica para "int main()".
    return 0;
}