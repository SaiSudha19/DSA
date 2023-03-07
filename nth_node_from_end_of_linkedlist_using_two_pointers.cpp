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

void printNthfromend(node *head,int n)
{
    if(head==NULL)
    return;
    node *first=head;
    for(int i=0;i<n;i++)
    {
        if(first==NULL)
        return;
        first=first->next;
    }
    node *second=head;
    while(first!=NULL)
    {
        second=second->next;
        first=first->next;
    }
    cout<<second->data;
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printNthfromend(head,3);
    return 0;
}

