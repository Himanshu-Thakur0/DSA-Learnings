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
struct Node *third;

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

struct Node * deletionFirstNode(struct Node * head){
    struct Node *ptr = head;
    struct Node *p = head;

    while (p->next != head)
    {
        p=p->next;
    }
    p->next = head->next;
    head = head->next;
    delete ptr;

    return head;    
}

struct Node * deletionAtIndex(struct Node * head, int index){
    struct Node * ptr = head;
    

    int i=0;
    while (i!=index-1)
    {
        ptr = ptr->next;
        i++;
    }
    struct Node * del_p = ptr->next ;
    ptr->next = del_p->next;

    delete del_p;

    return head;
    

}

struct Node * deletionLastNode(struct Node *head){
    struct Node *ptr= head;
    struct Node *del_p= head;
    

    while (del_p->next != head)
    {
        del_p = del_p->next;
    }
    while (ptr->next != del_p)
    {
        ptr = ptr->next;
    }
    ptr->next = head;
    delete del_p;

    return head;
    
}

struct Node * deletionByValue(struct Node *head,int data){
    struct Node *ptr= head;
    struct Node *del_ptr= head;

   while (del_ptr->data != data)
   {
    del_ptr = del_ptr->next;
   }
   while (ptr->next != del_ptr)
   {
    ptr = ptr->next;
   }
   ptr->next = del_ptr->next;

   delete del_ptr;

   return head;
    
    
}

int main()
{
    system("cls");
    Node *head = new Node;
    Node *first = new Node;
    Node *second = new Node;
    Node *third = new Node;

    head->data = 79;
    head->next = first;

    first->data = 99;
    first->next = second;

    second->data = 90;
    second->next = third;

    third->data = 93;
    third->next = head;

    cout << "Original List" << endl;
    linkedListTraversal(head);

    // head = deletionFirstNode(head);
    // cout << "After deletion Of first node " << endl;
    // linkedListTraversal(head);

    // head = deletionAtIndex(head,1);
    // cout << "After deletion at give index " << endl;
    // linkedListTraversal(head);

    // head = deletionLastNode(head);
    // cout << "After deletion of last node " << endl;
    // linkedListTraversal(head);

    head = deletionByValue(head,93);
    cout << "After deletion by give value " << endl;
    linkedListTraversal(head);

   
}