# Punteros o Apuntadores

La arquitectura del computador se basa principalmente en un "bus de datos" que se constituye por canales de comunicación que permiten la transferencia de datos entre la CPU, la memoria y los dispositivos de entrada/salida. Estos buses permiten a los componentes del sistema intercambiar información entre ellos.

Como bien se sabe, una variable es una dirección de memoria principal asociada a un nombre, un valor y un tipo de variable. Esto se representa gráficamente como un contenedor (una caja).

Mientras tanto, un apuntador es una variable cuyo contenido es una dirección de memoria, es decir, almacena la dirección de un contenedor (una variable).

## Operadores para el Manejo de Punteros

Para el manejo de los punteros se hace uso de los siguientes operadores:

- **Ampersand `&`**: Colocar Ampersand delante de una variable sirve para obtener la dirección física de la variable.

    ```cpp
    int x = 10;
    int *p;
    p = &x; // 'p' ahora contiene la dirección de memoria de 'x'
    ```

- **Asterisco `*`**: El Asterisco tiene dos usos diferentes dependiendo del contexto:
    - Colocar Asterisco delante de una variable que está siendo declarada indica que esa variable es en realidad un apuntador. En otras palabras, se está declarando un apuntador.

        ```cpp
        int *p; // Declaración de un puntero a un entero
        ```

    - Colocar Asterisco delante de una variable que no está siendo declarada señala indireccionamiento. Es decir, va a la dirección que guarda el puntero y toma su contenido.

        ```cpp
        int x = 10;
        int *p = &x;
        int y = *p; // 'y' ahora contiene el valor de 'x', que es 10
        ```

## 

**Indireccionamiento:** Es el proceso de acceder al valor almacenado en la dirección de memoria a la que apunta un puntero. Esto se logra utilizando el operador de indireccionamiento `*`. En otras palabras, el operador `*` permite "desreferenciar" un puntero, obteniendo el valor de la variable a la que apunta.
