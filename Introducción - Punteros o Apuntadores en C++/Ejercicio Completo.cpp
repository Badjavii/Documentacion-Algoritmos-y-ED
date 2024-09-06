#include <iostream>
using namespace std;

int main()
{

    int x = 10; // Declaración de una variable de tipo entero.
    int *p;     // Declaración de un puntero a un entero.
    p = &x;     // 'p' ahora contiene la dirección de memoria de 'x'.

    // Imprime el valor de 'x'.
    cout << "El valor de x es: " << x << endl;

    // Imprime la dirección de memoria de 'x'.
    cout << "La dirección de x es: " << &x << endl;

    // Imprime la dirección almacenada en 'p' (dirección de memoria de 'x').
    cout << "El valor de p es: " << p << endl;

    // Imprime el valor al que apunta 'p' (valor de 'x').
    cout << "El valor al que apunta p es: " << *p << endl;

    return 0;
}