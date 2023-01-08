#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* link;
};
void count_of_node(struct Node* head)
{
    int count = 0;
    if(head == NULL)
    {
        cout<<"Link_list is empty"<<"\n";
    }
    struct Node* ptr = NULL;
    ptr = head;
    while(ptr != NULL)//Time complexity : O(n) --> n : how many time node are here in this link_list
    {
        count++;
        cout<<ptr -> data<<" ";
        ptr = ptr -> link;
    }
    cout<<"Node : "<<count<<" ";
}
void add_in_end(int value,struct Node* head)
{
    struct Node *ptr,*temp;
    ptr = head;
    temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = value;
    temp -> link = NULL;

    while(ptr -> link != NULL)
    {
        ptr = ptr -> link;
    }
    ptr -> link = temp;
}
struct Node* del_last(struct Node* head)
{
    if(head == NULL)
    {
        cout<<"List is already empty"<<"\n";
    }
    else if(head -> link == NULL)
    {
        free(head);
        head = NULL;
    }
    else
    {
        struct Node *temp = head;
        struct Node *temp2 = head;
        while(temp -> link != NULL)
        {
            temp2 = temp;
            temp = temp -> link;
        }
        temp2 -> link = NULL;
        free(temp);
        temp = NULL;
    }
    return head;
}
int main()
{
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 45;
    head -> link = NULL;
    add_in_end(98,head);
    add_in_end(3,head);
    add_in_end(8,head);


    head = del_last(head);

    struct Node* ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr -> link;
    }
    cout<<"\n";
    return 0;
}
