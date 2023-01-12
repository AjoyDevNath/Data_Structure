/*
    insertion of empty link list
    time complexity : O(1) = linear complexity
*/
#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *previous;
    Node *next; 
};

Node *adding_node(Node *head,int data)
{
    Node *temp = NULL;
    temp = new Node();
    temp -> previous = NULL;
    temp -> data = data;
    temp -> next = NULL;

    head = temp;
    return head;
}

int main()
{
    Node* head = NULL;
    head = adding_node(head,45);
    cout<<head -> data<<"\n";
    return 0;
}
