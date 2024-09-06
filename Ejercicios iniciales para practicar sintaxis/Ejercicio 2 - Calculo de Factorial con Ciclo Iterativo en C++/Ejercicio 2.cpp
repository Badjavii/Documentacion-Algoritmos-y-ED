// Ejercicio 2: Cálculo del Factorial de un Número usando Ciclos Iterativos

#include <iostream>
using namespace std;

int main()
{
    // Declaración de variables enteras.
    int f = 1, n, old;

    // Solicitar al usuario que introduzca un número.
    cout << "\n\nIntroduzca un número: ";
    cin >> n;

    // Guardar el valor original de 'n' en 'old'.
    old = n;

    // Calcular el factorial de 'n' usando un ciclo 'while'.
    while (n > 1)
    {
        f = f * n; // Otra forma de escribir esto: "f *= n;".
        n--;       // Decrementar el valor de 'n' en 1.
    }

    // Mostrar el resultado del factorial.
    cout << "El factorial de " << old << " es " << f << "\n\n";

    return 0;
}
