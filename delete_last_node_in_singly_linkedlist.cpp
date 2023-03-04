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

node *deletelast(node *head)
{
    if(head->next==NULL)
    {   
        delete head;
        return NULL;
    }
    else
    {
        node *curr=head;
        while(curr->next->next!=NULL)
        {
            curr=curr->next;
        }
        delete(curr->next);
        curr->next=NULL;
        return head;
    }
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printlist(head);
    cout<<endl;
    head=deletelast(head);
    printlist(head);
    return 0;
}
