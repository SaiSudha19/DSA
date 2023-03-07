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
    node *curr=head;
    while(curr!=NULL)
    {
        cout<<curr->data<<" ";
        curr=curr->next;
    }
    
}

void printmiddle(node *head)
{
    if(head==NULL)
    return ;
    int count=0;
    node *curr;
    for(curr=head;curr!=NULL;curr=curr->next)
        count++;
    curr=head;
    for(int i=0;i<count/2;i++)
        curr=curr->next;
    cout<<curr->data;
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    head->next->next->next->next=new node(50);
    printlist(head);
    cout<<endl;
    printmiddle(head);
    return 0;
}


