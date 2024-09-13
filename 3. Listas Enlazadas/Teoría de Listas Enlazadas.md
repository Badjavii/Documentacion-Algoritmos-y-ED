# Listas Enlazadas

Siguiendo la idea de usar nodos con apuntadores a otros nodos, se crea una estructura de datos que consiste en una serie sucesiva de nodos en los que cada uno apunta al siguiente. Este tipo de estructura de datos se ve gráficamente como una lista.

Para poder manejar una lista enlazada, tenemos que tener en cuenta lo siguiente:

1- Una lista enlazada inicia con un nodo cabeza que se refiere al primer nodo de la lista. Este nodo cabeza es el nodo de entrada a la estructura.

2- Una lista enlazada termina con un nodo cola que se refiere al último nodo de la lista. Este nodo cola es el nodo de salida de la estructura.

3- Cada nodo de una lista enlazada generalmente contiene dos características: un valor (o dato) y un apuntador al siguiente nodo. Sin embargo, se le pueden agregar más características siempre que cumpla con tener el apuntador al siguiente nodo.

### Ejemplo

<div align="center">
    <img src="https://github.com/Badjavii/Documentacion-Algoritmos-y-ED/blob/main/Imagenes%20(Hacer%20caso%20omiso)/quinto%20diagrama.png">
</div>

Una lista enlazada de 5 nodos se recorre ingresando por el nodo cabeza para luego acceder al nodo siguiente del nodo actual, redefiniendo al nodo siguiente como el nuevo nodo actual. De esta forma, pasamos del primer nodo al segundo.

```cpp
while (NodoLista){
    /* Operaciones usando los datos de los nodos */
    NodoLista = NodoLista->prox;
}
```

<div align="center">
    <img src="https://github.com/Badjavii/Documentacion-Algoritmos-y-ED/blob/main/Imagenes%20(Hacer%20caso%20omiso)/sexto%20diagrama.png">
    <p>
    Ahora en adelante, las ilustraciones ya no mostraran direcciones de memorio sino solo muestras graficas del comportamiento de las estructuras. Esto con el fin de optimizar la carga de trabajo para el administrador del repositorio.
    </p>
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
NodoLS *aux = *actu;        // Inicializacion de un puntero auxiliar a un nodo
```

<table align="center">
    <td>
        <img src="">
    </td>
    <td>
        <img src="">
    </td>
</table>

Puedes ver las operaciones básicas y algunos ejemplos más complejos del manejo de esta estructura en “Manejo Práctico-Teórico de Listas Simplemente Enlazadas”.

### Listas Doblemente Enlazadas

Las listas doblemente enlazadas representan un modelo un poco más dinámico de la estructura de las listas enlazadas.

Los nodos que componen las listas doblemente enlazadas se caracterizan por contener dos apuntadores: uno dirigido a un nodo siguiente y el otro dirigido a un nodo previo. Esto hace que esta estructura se refleje gráficamente como una sucesión de nodos que se apuntan entre sí en ambos sentidos, es decir, cada nodo apunta a un nodo siguiente y a un nodo previo.

```cpp
struct NodoLD{
    int valor;
    NodoLD *prox;
    NodoLD *prev;
}
```

<div align="center">
    <img src="">
</div>

En las listas doblemente enlazadas, incluso el nodo cabeza tiene un apuntador a un nodo previo; sin embargo, al referirnos al nodo cabeza de la lista, su nodo previo será nulo, ya que no existe.

Al tratarse de una estructura que va en doble sentido, no es necesario usar un puntero auxiliar para acceder a nodos previos al nodo actual. Bastaría con usar:

```cpp
NodoLD = NodoLD->prev;
```

La implementación de operaciones básicas y el manejo de las listas doblemente enlazadas tiene sus ventajas y sus contras en términos de manejo del desarrollador. Puedes revisarlo a detalle en “Manejo Práctico-Teórico de Listas Doblemente Enlazadas”.

### Listas Circulares

Las listas circulares son la versión más compleja de la estructura de listas enlazadas.

```cpp
/* Ejemplo de una lista simplemente circular */
struct NodoLC{
    int valor;
    NodoLC *prox;
}
```

En sí, es indiferente si los nodos que componen una lista circular tienen un doble o un único sentido. Lo importante a tener en cuenta es que la arquitectura de una lista circular tiene como condición obligatoria que el nodo siguiente del nodo cola sea el nodo cabeza. Esto puede llegar a ser un poco contradictorio, ya que el hecho de que el nodo siguiente del nodo cola no sea un nodo nulo significa realmente que las listas circulares no cuentan con un nodo cola, es decir, las listas circulares no tienen fin y es eso lo que hace que gráficamente podamos representarlo como una sucesión de nodos con forma circular.

<table align="center">
    <td>
        <img src="">
    </td>
    <td>
        <img src="">
    </td>
</table>

Técnicamente hablando, también se podría decir que las listas circulares tampoco tienen nodos cabeza, pero eliminar este concepto haría una complicación para comunicarnos en espacios de desarrollo. Por tal motivo, podemos usar técnicas adicionales para identificar al nodo cabeza de las listas circulares. Técnicas como el uso de un puntero auxiliar u otras.

Las operaciones básicas y el manejo de las listas circulares es mucho más complicado. Puedes revisarlo a detalle en “Manejo Práctico-Teórico de Listas Circulares”.

## Otros Tipos de Listas Enlazadas

Los profesores de instituciones de formación academica usualmente usan otros tipos de listas enlazadas cuya complejidad es mucho más elevada para sus evaluaciones y practicas