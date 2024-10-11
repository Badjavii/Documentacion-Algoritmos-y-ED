#include <iostream>
using namespace std;

struct NodeSL
{
    int value;
    NodeSL *prox;
};

void insertSL(NodeSL **list, int x)
{
    NodeSL *t = new NodeSL;
    t->value = x;
    t->prox = *list;
    *list = t;
};

void printSL(NodeSL *list)
{
    NodeSL *t = list;
    cout << "\n\tP";

    while (t)
    {
        cout << "->[" << t->value << "]";
        t = t->prox;
    }

    cout << "->NULL\n";
};

void deleteSL(NodeSL **list, int x)
{
    NodeSL *t = *list;
    NodeSL *prev = NULL;

    while ((t) && (t->value != x))
    {
        prev = t;
        t = t->prox;
    };

    if (!t)
    {
        cout << "Value not found in the list.\n";
        return;
    };

    if (!prev)
        *list = t->prox;
    else
        prev->prox = t->prox;

    delete t;
    cout << "Node with value " << x << " deleted.\n";
};

void searchSL(NodeSL *list, int x)
{
    NodeSL *t = list;
    int times = 0;

    while (t)
    {
        if (t->value == x)
            times++;
        t = t->prox;
    }

    if (!times)
        cout << "Value not found in the list.\n";
    else
        cout << "Value found " << times << " times in the list.\n";
};

void main()
{

    int op = -1, x = 0;
    NodeSL *p = NULL, *s;

    while (op)
    {

        /* Show menu */
        system("cls");
        cout << "\n\n\t\tHANDLING SINGLY LINKED LISTS MENU\n\n";
        cout << "1. Insert\n";
        cout << "2. Print\n";
        cout << "3. Delete\n";
        cout << "4. Search\n";
        cout << "0. LOG OFF\n\n";

        /* Select option */
        cout << ">> ";
        cin >> op;

        switch (op)
        {
        case 1:
            /* Insert */
            cout << "\nEnter an integer for the list: ";
            cin >> x;
            insertSL(&p, x);
            break;

        case 2:
            /* Print */
            printSL(p);
            break;

        case 3:
            /* Delete */
            cout << "\nEnter an integer to delete: ";
            cin >> x;
            deleteSL(&p, x);
            break;

        case 4:
            /* Search */
            cout << "\nEnter an integer to search: ";
            cin >> x;
            searchSL(p, x);
            break;

        default:
            break;
        }
        system("pause");
        cout << "\n__________________________________________";
        cout << "\nProudly Designed by Badjavii, junior dev.";
        cout << "\n__________________________________________";
    }
}