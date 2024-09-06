#include <iostream>
using namespace std;

void leervector(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "\nA[" << i << "]= ";
        cin >> A[i];
    };
};

void escribevector(int A[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "\nA[" << i << "]= " << A[i];
    };
    // Nota: En C++, cuando los ciclos iterativos y los condicionales tienen
    // una sola instrucción, se puede obviar el uso de llaves "{}".
};

int main()
{

    int m[10], tam, i;
    cout << "\n\nLectura de Vectores\n\n";
    cout << "Indique el tamaño del vector: ";
    cin >> tam;

    // Llamar a la función 'leervector'.
    leervector(m, tam);

    system("pause");
    cout << "\n\nEscritura de vectores";

    // Llamar a la función 'escribirvector'.
    escribevector(m, tam);

    system("pause");
    return 0;
}