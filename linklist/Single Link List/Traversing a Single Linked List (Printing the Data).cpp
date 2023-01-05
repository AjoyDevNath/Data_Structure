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
    while(ptr != NULL)//Time complexity : O(n) --> n : how many time node are here in this linklist
    {
        count++;
        cout<<ptr -> data<<"\n";
        ptr = ptr -> link;
    }
    cout<<"Node : "<<count<<"'\n";
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

    count_of_node(head);
    return 0;
}
