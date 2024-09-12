// Ejercicio 4: Llenado de un Vector (Array) en C++

#include <iostream>
using namespace std;

int main()
{
    // Declaración de un vector de tipo entero con 10 posiciones.
    int A[10];

    int tam, i;
    cout << "Indique un tamaño de vector: ";
    cin >> tam;

    // Llenar el vector con valores ingresados por el usuario.
    for (i = 0; i < tam; i++)
    {
        cout << "\nA[" << i << "]= ";
        cin >> A[i]; // Entrada de datos en la posición "i" del vector.
    };

    system("pause");

    // Imprimir los valores del vector.
    cout << "\n\nEscritura de vectores";
    for (i = 0; i < tam; i++)
    {
        cout << "\nA[" << i << "]= " << A[i];
    };

    system("pause");

    return 0;
}
