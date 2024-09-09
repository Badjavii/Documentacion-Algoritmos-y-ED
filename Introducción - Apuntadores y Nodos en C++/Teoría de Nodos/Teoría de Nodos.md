# Nodos

Las estructuras de datos se componen principalmente por los nodos. Los nodos son estructuras desarrolladas a rasgos de nuestra conveniencia y se pueden ver gráficamente como una caja.

Dicha caja puede contener, por ejemplo, un dato de tipo entero. En ese caso, el nodo se mantendrá como una caja que solo puede almacenar un dato de tipo entero.

Sin embargo, si definimos un nodo con un dato de tipo entero y un dato de tipo cadena de caracteres, entonces el nodo se verá como una caja con dos compartimientos que separan la parte de la caja que almacena el dato de tipo entero del otro lado que almacena el dato de tipo cadena de caracteres.

<img src="https://github.com/Badjavii/Documentacion-Algoritmos-y-ED/blob/main/Imagenes%20(Hacer%20caso%20omiso)/segundo%20diagrama.png">

De tal forma, como anteriormente definimos un nodo con dos características, también podemos definir un nodo con la cantidad y tipo de características que deseemos y necesitemos. Aunque, hay que tomar en cuenta que la acción de agregar muchas características a un nodo puede resultar en un efecto negativo al rendimiento del programa.

### Ejemplo de Nodo con Múltiples Características

```cpp
struct Nodo {
    int valor;          // Dato de tipo entero
    string nombre;      // Dato de tipo cadena de caracteres
};
```

En este ejemplo, el nodo tiene dos características: un valor entero y un nombre de tipo cadena de caracteres.

## Operadores para Manejar la Información dentro de un Nodo

Para manejar la información dentro de un nodo, especialmente cuando se trabaja con punteros a nodos, se utiliza el operador `->`. Este operador permite acceder a los miembros de una estructura a través de un puntero.

[[EJEMPLO DE USO DEL OPERADOR PARA MANEJAR NODOS]]

## Nodos con Apuntadores a Otros Nodos

Ya entendiendo el funcionamiento, podemos plantearnos la idea de agregar un apuntador a otro nodo como una característica de un nodo. Por ejemplo, si definimos un nodo con las características de un valor entero llamado “valor” y un apuntador a otro nodo llamado “amigo”, entonces estamos permitiendo que el nodo tenga un valor y la dirección de memoria de un “nodo amigo”. Tener la dirección de memoria de otro nodo dentro de un nodo establece gráficamente una conexión entre dos cajas diferentes. El nodo original tiene su “nodo amigo”, sin embargo, ese “nodo amigo” puede tener su propio “nodo amigo”, al cual el nodo original no puede acceder sin haber pasado antes por su nodo amigo.

[[DIAGRAMA DEL EJEMPLO]]
