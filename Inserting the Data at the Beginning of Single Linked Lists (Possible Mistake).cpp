
//author : AJOY_C191040_IIUC_CSE-48

#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

void add_beg(struct Node** head,int data)
{
    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = data;
    ptr -> link = NULL;

    ptr -> link = *head;
    *head = ptr;
}

int main()
{
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));
    head -> data = 45;
    head -> link = NULL;

    struct Node* ptr = (struct Node*)malloc(sizeof(struct Node));
    ptr -> data = 98;
    ptr -> link = NULL;

    head -> link = ptr;

    int data = 3;

    add_beg(&head,data);//pass by reference--->important line of code
    ptr = head;
    while(ptr != NULL)
    {
        cout<<ptr -> data<<" ";
        ptr = ptr -> link;
    }
    cout<<"\n";
    return 0;
}