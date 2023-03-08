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

void printlist(node *head)
{
    if(head==NULL)
    return;
    cout<<(head->data)<<" ";
    for(node *p=head->next;p!=head;p=p->next)
    cout<<(p->data)<<" ";
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    printlist(head);
    return 0;
}


