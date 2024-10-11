# Pointers

Computer architecture is primarily based on a "data bus", which consists of communication channels that allow data transfer between the CPU, memory and input/output devices. These buses enable system components to exchange information with each other.

As we know, a variable is a main memory address associated with a name, a value, and a type of variable. This is graphically represented as a container (a box).

Meanwhile, a pointer is a variable whose content is a memory address, meaning it stores the address of a container (a variable).

## Operators for Handling Pointers

The following operators are used for handling pointers:

- **Ampersand `&`**: Placing an ampersand before a variable is used to obtain the physical address of the variable.

    ```cpp
    int x = 10;
    int *p;
    p = &x; // 'p' now contains the memory address of 'x'
    ```
- **Asterisk `*`**: The asterisk has two different uses depending on the context:
    - Placing an asterisk before a variable being declared indicates that the variable is actually a pointer. In other words, a pointer is being declared.

        ```cpp
        int *p; // Declaration of a pointer to an integer
        ```

    - Placing an asterisk before a variable that is not being declared indicates dereferencing. So it goes to the address stored in the pointer and takes its content.

        ```cpp
        int x = 10;
        int *p = &x;
        int y = *p; // 'y' now contains the value of 'x', which is 10
        ```



[!NOTE]
**Dereferencing:** It is the process of accessing the value stored at the memory address to which a pointer points. This is achieved using the dereferencing aperator `*`. In other words, the `*` operator allows "dereferencing" a pointer, obtaining the value of the variable it points to.