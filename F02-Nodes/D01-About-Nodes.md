# Nodes

Data structures are mainly composed of nodes. Nodes are structures developed according to our convenience and can be seen graphically as a box.

That box can contain, for example, an integer data type. In that case, the node will remain as a box that can only store an integer data type.

![This is an image](/resources/node-theory-interger.png)

However, if we define a node with an integer data and a string data, then the node will look like a box with two compartments that separate the part of the box that stores the integer data from the other side that stores the string data.

![This is an image](/resources/node-theory-string.png)

In the same way that we previously defined a node with two attributes, we can also define a node with as many attributes and types as we want and need. It is also important to note that adding too many attributes to a node can negatively impact the program's performance.

## Example of a Node with Multiples Attributes

```cpp
struct Nodo {
    int value;          // Integer data
    string name;      // String data
};
```

In this example, the node has to attributes: an integer value and a string name.

## Operators for Handling Information within a Node

To handle information within a node, especially when working the pointers to node, the `->` operator is used. This operator allows access to the members of a structure through a pointer.

```cpp
int value = Node->value;                    
cout << "The value of the node " << Node->name << " is: " << value;
```

## Nodes with Pointers to Other Nodes

Understanding this functionality, we can consider additing a pointer to another node as an attribute of a node. For example, if we define a node with the attributes of an integer value called "value" and a pointer to another node called "friend", we are allowing the node to have a value and the memory address of a "friend node". Having the memory address of another node within a node graphically establishes a connection between two different boxes. The original node has its "friend node", but that "friend node" can have its own "friend node", which the original node cannot access without first going through its friend node.

![This is an image](/resources/node-theory-pointers.png)