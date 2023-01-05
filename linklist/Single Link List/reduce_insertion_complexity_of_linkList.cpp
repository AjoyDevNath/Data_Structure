//time complexity : O(1) = linear time
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* link;
};

void debug()
{
    cout<<"#####"<<"\n";
}

struct Node* add_in_end(struct Node* ptr,int data)
{
    struct Node *temp = (struct Node*)malloc(sizeof(struct Node));
    temp -> data = data;
    temp -> link = NULL;

    ptr -> link = temp;
    return temp;//5000
}
void count_of_node(struct Node* head)
{
    int cnt = 0;
    struct Node *ptr = NULL;
    ptr = head;
    while(ptr != NULL)
    {
        cnt++;
        cout<<ptr -> data<<" "<<ptr -> link<<"\n";
        ptr = ptr -> link;
    }
    cout<<"Total Node : "<<cnt-1<<"\n";
}
int main()
{
    struct Node* head = NULL;
    head = (struct Node*)malloc(sizeof(struct Node));

    struct Node* ptr = head;
    ptr = add_in_end(ptr,98);//(1000,98) //5000
    ptr = add_in_end(ptr,37);//(5000,37) //6000
    ptr = add_in_end(ptr,63);//(6000,63)//7000

    count_of_node(head);

    return 0;
}
