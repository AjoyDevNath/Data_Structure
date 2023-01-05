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
void add_at_pos(struct Node* head,int data,int position)
{
    struct Node* ptr = head;
    struct Node* ptr2 = (struct Node*)malloc(sizeof(struct Node));
    ptr2 -> data = data;
    ptr2 -> link = NULL;
    position--;//2
    while(position != 1)
    {
        ptr = ptr -> link;
        position--;//1
    }
    ptr2 -> link = ptr -> link;
    ptr -> link = ptr2;
}
int main()
{
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 45;
    head -> link = NULL;
    add_in_end(98,head);
    add_in_end(3,head);

    count_of_node(head);
    int data = 67,position = 3;

    add_at_pos(head,data,position);
    add_at_pos(head,100,2);
    count_of_node(head);

    return 0;
}