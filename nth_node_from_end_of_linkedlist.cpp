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
    int len=0;
    for(node *curr=head;curr!=NULL;curr=curr->next)
        len++;
    if(len<n)
        return;
    node *curr=head;
    for(int i=1;i<len-n+1;i++)
        curr=curr->next;
    cout<<curr->data;
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

