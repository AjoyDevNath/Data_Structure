#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *previous;
    Node *next;
};

Node *add_to_end(Node *head,int data)
{
    Node *temp = NULL;
    temp = new Node();
    temp -> previous = NULL;
    temp -> data = 45;
    temp -> next = NULL;

    head = temp;
    return head;
}
Node *add_to_begin(Node *head,int data)
{
    Node *temp = NULL;
    temp = new Node();
    temp -> previous = NULL;
    temp -> data = data;
    temp -> next = head;

    head -> previous = temp;
    head = temp;

    return head;
}

int main()
{
    Node* head = NULL;
    head = add_to_end(head,45);
    head = add_to_begin(head,53);
    head = add_to_begin(head,59);
    Node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr -> data<<" ";
        ptr = ptr -> next;
    }
    return 0;
}
