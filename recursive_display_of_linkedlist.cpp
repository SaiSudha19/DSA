#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    node *next;
    node(int x)
    {
        data=x;
        next=NULL;
    }
};

void rprintlist(node *head)
{
    if(head==NULL)
    return;
    cout<<head->data<<" ";
    rprintlist(head->next);
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    rprintlist(head);
    return 0;
}
