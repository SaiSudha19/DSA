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
    node *p=head;
    do{
        cout<<p->data<<" ";
        p=p->next;
    }while(p!=head);
}

node *insertend(node *head,int x)
{
    node *temp=new node(x);
    if(head==NULL)
    return temp;
    else
    {
        node *curr=head;
        while(curr->next!=head)
        curr=curr->next;
        curr->next=temp;
        temp->next=head;
    }
    return head;
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=head;
    printlist(head);
    head=insertend(head,5);
    cout<<endl;
    printlist(head);
    return 0;
}




