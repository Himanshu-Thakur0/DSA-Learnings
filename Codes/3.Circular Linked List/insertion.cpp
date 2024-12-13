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
struct Node *second;

void linkedListTraversal(struct Node *head)
{
    struct Node *ptr = head;
    do
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    } 
    while (ptr != head);  
    
}

struct Node * insertAtBegining(struct Node * head,int value){
    struct Node *ptr = new Node;
    struct Node *p = head->next;

    ptr->data = value;
    while (p->next!=head)
    {
        p=p->next;
    }
    p->next = ptr;
    ptr->next = head;

    return ptr;    
}

struct Node * insertAtIndex(struct Node * head,int value,int index){
    struct Node *ptr = new Node;
    struct Node *p = head;
    struct Node *p1 = head;

    ptr->data = value;
    int i=0;
    while (i!=index-1)
    {
        p=p->next;
        i++;
    }
    ptr->next = p->next;
    p->next = ptr;

    return head;
}

struct Node * insertAtEnd(struct Node * head,int value){
    struct Node *ptr = new Node;
    ptr->data = value;
    struct Node *p = head;

    while (p->next!=head)
    {
        p=p->next;
    }
    p->next = ptr;
    ptr->next = head;
    return head;
}

struct Node * insertAfterNode(struct Node * head,struct Node * index, int value){
    struct Node *ptr = new Node;
    ptr->data = value;
    struct Node *p = head;

    while (p!=index)
    {
        p=p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
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
    second->next = head;

    cout << "Original List" << endl;
    linkedListTraversal(head);

    // head = insertAtBegining(head, 89);
    // cout << "After insertAtBeginning " << endl;
    // linkedListTraversal(head);

    // head = insertAtIndex(head, 999, 1);
    // cout << "After insertInBetween " << endl;
    // linkedListTraversal(head);

    // head = insertAtEnd(head, 890);
    // cout << "After insertAtEnd " << endl;
    // linkedListTraversal(head);

    head = insertAfterNode(head,second, 8990);
    cout << "After insertAfterNode " << endl;
    linkedListTraversal(head);
}