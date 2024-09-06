// Ejercicio 3: Cálculo del Factorial de un Número usando una Función

#include <iostream>
using namespace std;

// Definir una función entera para calcular el factorial de un número.
int factorial(int n)
{
    // Declaración de una variable.
    int f = 1;

    // Calcular el factorial de 'n' usando un ciclo 'while'.
    while (n > 1)
    {
        f *= n;
        n--;
    }

    // Retornar el valor del factorial calculado.
    return f;
}

int main()
{

    int x, f;
    cout << "\n\nIntroduzca un número: ";
    cin >> x;

    // Llamar a la función 'factorial' y asignar el resultado a la variable 'f'.
    f = factorial(x);

    // Mostrar el resultado del factorial.
    cout << "El factorial de " << x << " es " << f << "\n\n";

    return 0;
}
