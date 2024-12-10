#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;
struct Node *second;
struct Node *third;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}
int main()
{
    system("cls");

    // Allocate memory dynamically for nodes of the linked list in the heap
    Node *head = new Node;
    Node *second = new Node;
    Node *third = new Node;

    // Link first and second nodes
    head->data = 74;
    head->next = second;

    // Link second and third nodes
    second->data = 70;
    second->next = third;

    // terminate list at the third node
    third->data = 78;
    third->next = NULL;

    linkedListTraversal(head);
    return 0;
}