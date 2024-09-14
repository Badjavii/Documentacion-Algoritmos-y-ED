# Linked Lists

Following the idea of ​​using nodes with pointers to other nodes, a data structure is created that consists of a successive series of nodes in which each one points to the next. This type of data structure is graphically seen as a list.

In order to handle a linked list, we have to take into account the following:

1- A linked list starts with a head node that refers to the first node of the list. This head node is the input node to the structure.

2- A linked list ends with a tail node that refers to the last node of the list. This tail node is the output node of the structure.

3- Each node of a linked list generally contains two characteristics: a value (or data) and a pointer to the next node. However, more characteristics can be added as long as it complies with having the pointer to the next node.

### Example

![This is an image](/resources/linked-lists-base.png)

A linked list of 5 nodes is traversed by entering the head node and then accessing the next node of the current node, redefining the next node as the new current node. In this way, we go from the first node to the second.

```cpp
while (NodoLista){
/* Operations using the data of the nodes */
NodoLista = NodoLista->prox;
}
```

![This is an image](/resources/linked-lists-path.png)

From now on, the illustrations will no longer show memory addresses but only graphical samples of the behavior of the structures. This is in order to optimize the workload for the repository administrator.

If we repeat this action, we will go to the third node until we reach the fifth node. If we try to access the next node of the tail node, the program will give an error, since the fifth node has no next node.

## Types of Linked Lists

The structure of linked lists is divided into 3 basic types: Singly-linked lists, doubly linked lists and circular lists.

### Singly-Linked Lists

Singly-linked lists are the most typical and simplest model of the linked list structure.

The nodes that compose the Singly-linked lists are characterized by containing a singly pointer to a following node. This causes this structure to be reflected graphically as a succession of nodes that point to each other in only one direction, i.e., each node only points to one next node.

```cpp
struct NodeLS{
    int value;
    NodeLS *prox;
}
```

*Question: If a Singly-linked list can only be traversed in one direction, what could be done to return to a previous node from the current node?

Initially, this task cannot be accomplished by handling nodes. Instead, use is made of an auxiliary pointer which, while the main pointer is traversing the structure, the auxiliary pointer will keep storing the address of a previous node (either the head node or the node before the current node).

```cpp
NodeLS *aux = *actu; // Initialization of an auxiliary pointer to a node.
```

<table align=“center”>
    <td>
        <img src=“/resources/linked-lists-auxiliaty-pointer-1.png”>
    </td>
    <td>
        <img src=“/resources/linked-lists-auxiliaty-pointer-2.png”> <td> <img src=“/resources/linked-lists-auxiliaty-pointer-2.png”>
    </td>
</table>

You can see the basic operations and some more complex examples of handling this structure in [Handling Singly-linked lists](/S03-Linked-Lists/F02-Handling-Singly-Linked-Lists/).

### Doubly Linked Lists

Doubly linked lists represent a slightly more dynamic model of the linked list structure.

The nodes that compose doubly linked lists are characterized by containin two pointers: one directed to a next node and the other directed to a previous node. This causes this structure to be graphically reflected as a succession of node pointing to each other in both directions, meaning each node points to the next node and the previous node.

```cpp
struct NodeLD{
    int value;
    NodeLD *prox;
    NodeLD *prev;
}
```

![This is an image](/resources/linked-lists-doubly.png)

In doubly linked lists, even the head node has a pointer to a previous node; however, when referring to the head node of the list, its previous node will be null since it does not exist.

Since this structure is bidirectional, it is not necessary to use an auxiliary pointer to access node prior of the current node. You must use:

```cpp
NodoLD = NodoLD->prev;
```

The implementation of basic operations and the management of doubly linked lists have their advantages and disadvantages in terms of developer handling. You can review it in detail at [Handling Doubly Linked Lists](/S03-Linked-Lists/F03-Handling-Doubly-Linked-Lists/).

### Circular Linked Lists

Circular linked lists are the most complex version of the linked list structure.

```cpp
/* Example of a simple circular list */
struct NodoLC{
    int valor;
    NodoLC *prox;
}
```

It doesn't matter whether the node in a circular list are doubly or singly linked. The key point is that in a circular linked list, the next node of the tail node must be the head node. Thhis might seem contradictory because the fact that the next node of the tail node is not null means that circular linked lists technically don't have a tail node. In other words, circular linked lists have no end, which is why they can be graphically represented as a sequence of nodes in a circular shape.

<table align="center">
    <td>
        <img src="/resources/linked-lists-circular-1.png">
    </td>
    <td>
        <img src="/resources/linked-lists-circular-2.png">
    </td>
</table>

Technically speaking, we could also say that circular linked lists do not have a head node either, but removing this concept would complicate communication in development environments. Therefore, we can use additional techniques to identify the head ndoe of circular linked lists, such as using an auxiliary pointer or other methods.

The basic operations and management of circular linked lists are much more complicated. You can review them in detail at [Handling Circular Linked Lists](/S03-Linked-Lists/F04-Handling-Circular-Linked-Lists/).

## Other Types of Linked Lists

Professors in academic institutions often use other types of linked lists with much higher complexity for their evaluations and practice exercises.

The main purpose of these types of lists is simply to serve as practice for developing logical thinking in training developers.

Most of these other types of linked lists are not used in real-world development environments, for example: the dipole, the doubly circular linked list, among others. You can review these complex structures in detail at [Handling Others Linked Lists](/S03-Linked-Lists/F05-Handling-Others-Linked-Lists/).