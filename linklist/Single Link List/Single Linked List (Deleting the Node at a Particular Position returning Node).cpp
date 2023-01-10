#include<bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node* link;
};
void count_of_node(Node* head)
{
    int count = 0;
    if(head == NULL)
    {
        cout<<"Link_list is empty"<<"\n";
    }
    Node* ptr = NULL;
    ptr = head;
    while(ptr != NULL)//Time complexity : O(n) --> n : how many time node are here in this link_list
    {
        count++;
        cout<<ptr -> data<<" ";
        ptr = ptr -> link;
    }
    cout<<"Node : "<<count<<" ";
}
void add_in_end(int value,Node* head)
{
    Node *ptr,*temp;
    ptr = head;
    temp = new Node();
    temp -> data = value;
    temp -> link = NULL;

    while(ptr -> link != NULL)
    {
        ptr = ptr -> link;
    }
    ptr -> link = temp;
}
Node* del_at_pos(Node* head,int pos)
{
    Node* current = new Node();
    Node* previous = new Node();
    current = head;
    previous = head;
    if(current == NULL)
    {
        cout<<"List is already empty"<<"\n";
    }
    else if(pos == 1)
    {
        head = current -> link;
        free(current);
        current = NULL;
    }
    else
    {
        while(pos != 1)
        {
            previous = current;
            current = current -> link;
            pos--;
        }
        previous -> link = current -> link;
        free(current);
        current = NULL;
    }
    return head;
}

int main()
{
    Node* head = NULL;
    head = new Node();
    head -> data = 45;
    head -> link = NULL;
    add_in_end(98,head);
    add_in_end(3,head);
    add_in_end(87,head);
    int pos = 4;
    Node *ptr = NULL;
    ptr = del_at_pos(head,pos);
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr -> link;
    }
    return 0;
}

