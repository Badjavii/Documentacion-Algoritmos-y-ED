# Listas Enlazadas

Siguiendo la idea de usar nodos con apuntadores a otros nodos, se crea una estructura de datos que consiste en una serie sucesiva de nodos en los que cada uno apunta al siguiente. Este tipo de estructura de datos se ve gráficamente como una lista.

Para poder manejar una lista enlazada, tenemos que tener en cuenta lo siguiente:

1- Una lista enlazada inicia con un nodo cabeza que se refiere al primer nodo de la lista. Este nodo cabeza es el nodo de entrada a la estructura.

2- Una lista enlazada termina con un nodo cola que se refiere al último nodo de la lista. Este nodo cola es el nodo de salida de la estructura.

3- Cada nodo de una lista enlazada generalmente contiene dos características: un valor (o dato) y un apuntador al siguiente nodo. Sin embargo, se le pueden agregar más características siempre que cumpla con tener el apuntador al siguiente nodo.

### Ejemplo

<div align="center">
    <img src="">
</div>

Una lista enlazada de 5 nodos se recorre ingresando por el nodo cabeza para luego acceder al nodo siguiente del nodo actual, redefiniendo al nodo siguiente como el nuevo nodo actual. De esta forma, pasamos del primer nodo al segundo.

```cpp
while (NodoLista){
    /* Operaciones usando los datos de los nodos */
    NodoLista = NodoLista->prox;
}
```

<div align="center">
    <img src="">
</div>

Si repetimos dicha acción, pasaremos al tercer nodo hasta llegar al quinto nodo. Si intentamos acceder al nodo siguiente del nodo cola, el programa dará error, ya que el quinto nodo no tiene nodo siguiente.

## Tipos de Listas Enlazadas

La estructura de las listas enlazadas se divide en 3 tipos básicos: listas simplemente enlazadas, listas doblemente enlazadas y listas circulares.

### Listas Simplemente Enlazadas

Las listas simplemente enlazadas son el modelo más típico y sencillo de la estructura de las listas enlazadas.

Los nodos que componen a las listas simplemente enlazadas se caracterizan por contener un solo apuntador a un nodo siguiente. Esto hace que esta estructura se refleje gráficamente como una sucesión de nodos que se apuntan entre sí en un solo sentido, es decir, cada nodo solo apunta a un nodo siguiente.

```cpp
struct NodoLS{
    int valor;
    NodoLS *prox;
}
```

*Pregunta: Si una lista simplemente enlazada solo se puede recorrer en un solo sentido, ¿qué se podría hacer para regresar a un nodo previo del nodo actual?*

De inicio, esta tarea no se podrá llevar a cabo manejando los nodos. En cambio, se hace uso de un puntero auxiliar el cual, mientras el puntero principal va recorriendo la estructura, el puntero auxiliar se mantendrá guardando la dirección de un nodo previo (ya sea el nodo cabeza o el nodo previo al nodo actual).

```cpp
*aux = *actu;        // Inicializacion de un puntero auxiliar
```

<table align="center">
    <td>
        <img src="">
    </td>
    <td>
        <img src="">
    </td>
</table>