#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head;
struct Node *first;
struct node *second;

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

// insert at the beginning of the linked list
struct Node *insertAtBeginning(struct Node *head, int data)
{
    Node *ptr = new Node;
    ptr->next = head;
    ptr->data = data;
    return ptr;
}

struct Node *insertInBetween(struct Node *head, int data, int index)
{
    Node *ptr = new Node;
    struct Node *p = head;
    int i = 0;
    while (i != index - 1)
    {
        p = p->next;
        i++;
    }

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}

struct Node *insertAtEnd(struct Node *head, int data)
{
    Node *ptr = new Node;
    ptr->data = data;
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }

    p->next = ptr;
    ptr->next = NULL;

    return head;
}

struct Node *insertAfterNode(struct Node *head,struct Node *prevNode, int data){
    Node *ptr = new Node;
    ptr->data = data;

    ptr->next = prevNode->next;
    prevNode->next = ptr;

    return head;
}

int main()
{
    system("cls");
    Node *head = new Node;
    Node *first = new Node;
    Node *second = new Node;

    head->data = 79;
    head->next = first;

    first->data = 99;
    first->next = second;

    second->data = 90;
    second->next = NULL;

    cout << "Original List" << endl;
    linkedListTraversal(head);
    // head = insertAtBeginning(head, 89);
    // cout << "After insertAtBeginning " << endl;
    // linkedListTraversal(head);
    // head = insertInBetween(head, 999, 2);
    // cout << "After insertInBetween " << endl;
    // linkedListTraversal(head);
    // head = insertAtEnd(head, 890);
    // cout << "After insertAtEnd " << endl;
    // linkedListTraversal(head);
    head = insertAfterNode(head,first, 8990);
    cout << "After insertAfterNode " << endl;
    linkedListTraversal(head);
}