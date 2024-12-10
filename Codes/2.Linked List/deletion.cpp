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

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        cout << "Element : " << ptr->data << endl;
        ptr = ptr->next;
    }
}

struct Node* deletionFirstNode(struct Node *head){
    struct Node *ptr = head;
    head = head->next;

    delete ptr; // deleting the memory of first node
    return head;
}

struct Node* deletionAtIndex(struct Node *head ,int index){
    struct Node *ptr = head;
    int i=0;
    while(i!=index-1){
        ptr = ptr->next;
        i++;
    }
    struct Node *del_ptr = ptr->next;
    ptr->next = del_ptr->next;

    delete del_ptr; // deleting the memory of first node
    return head;
}

struct Node* deletionOfLastNOde(struct Node *head){
    struct Node *ptr1 = head;
    struct Node *ptr2 = head;
    while(ptr1->next!=NULL){
        ptr1 = ptr1->next;
    }
    while(ptr2->next!=ptr1){
        ptr2 = ptr2->next;
    }
    ptr2->next = NULL;

    delete ptr1;
    return head;
}

struct Node* deletionByValue(struct Node *head, int value){
    struct Node *ptr1 = head;
    struct Node *ptr2 = head;
    while(ptr1->data!=value){
        ptr1 = ptr1->next;
    }
    while(ptr2->next!=ptr1){
        ptr2 = ptr2->next;
    }
    ptr2->next = ptr1->next;

    delete ptr1;
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

    third->data = 95;
    third->next = NULL;

    cout << "Original List" << endl;
    linkedListTraversal(head);

    // head = deletionFirstNode(head);
    // cout << "Deletion of First Node " << endl;
    // linkedListTraversal(head);

    // head = deletionAtIndex(head,3);
    // cout << "Deletion At Index " << endl;
    // linkedListTraversal(head);

    // head = deletionOfLastNOde(head);
    // cout << "Deletion Of Last Node " << endl;
    // linkedListTraversal(head);

    head = deletionByValue(head,99);
    cout << "Deletion By Value " << endl;
    linkedListTraversal(head);

}