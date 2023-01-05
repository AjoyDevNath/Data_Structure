#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node* link;
};

int main()
{
    struct Node *head = NULL;
    head = (struct Node* )malloc(sizeof(struct Node));
    head -> data = 45;
    head -> link = NULL;

    struct Node *current = NULL;
    current = (struct Node*)malloc(sizeof(struct Node));
    current -> data = 98;
    current -> link = NULL;

    head -> link = current;

    current = (struct Node*)malloc(sizeof(struct Node));
    current -> data = 3;
    current -> link = NULL;

    head -> link -> link = current;

    cout<<head -> data<<"\n";
    cout<<head -> link<<"\n";

    cout<<head -> link -> data<<"\n";
    cout<<head -> link -> link<<"\n";

    cout<<head -> link -> link -> data<<"\n";
    cout<<head -> link -> link -> link<<"\n";
}
