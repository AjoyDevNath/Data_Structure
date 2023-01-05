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
        cout<<ptr -> data<<"\n";
        ptr = ptr -> link;
    }
    cout<<"Node : "<<count<<"\n";
}
struct Node* adding_node_at_first(struct Node* head,int value)
{
    struct Node* ptr = NULL;
    ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = value;
    ptr -> link = head;
    struct Node* ptr_2 = ptr;
    while(ptr != NULL)
    {
        cout<<ptr -> data<<" ";
        ptr = ptr -> link;
    }
    cout<<"\n";
    return ptr_2;
}
int main()
{
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 45;
    head -> link = NULL;

    struct Node* current = (struct Node*)malloc(sizeof(struct Node));
    current -> data = 98;
    current -> link = NULL;

    head -> link = current;

    current = (struct Node*)malloc(sizeof(struct Node));
    current -> data = 3;
    current -> link = NULL;

    head -> link -> link = current;
    //count_of_node(head);
    struct Node *ptr =  adding_node_at_first(head,4000);
    count_of_node(ptr);


    return 0;
}
