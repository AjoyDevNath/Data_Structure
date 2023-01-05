#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* link;
};
void add_in_end(int value,struct Node* head,int position)
{
    struct Node *ptr = head;
    struct Node *ptr2 = (struct Node*)malloc(sizeof(struct Node));
    ptr2 -> data = value;
    ptr2 -> link = NULL;
    pos--;
    while(ptr != 1)
    {
        ptr = ptr -> link;
        pos--;
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

    int data = 67,position = 3;
    struct Node *ptr = head;

    while(ptr != NULL)
    {
        cout<<ptr -> data<<"\n";
        ptr = ptr -> link;
    }
    return 0;
}
