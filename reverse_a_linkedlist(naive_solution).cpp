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

node *reverselist(node *head)
{
    vector<int>arr;
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        arr.push_back(curr->data);
    }
    for(node *curr=head;curr!=NULL;curr=curr->next)
    {
        curr->data=arr.back();
        arr.pop_back();
    }
    return head;
}

int main()
{
    node *head=new node(10);
    head->next=new node(20);
    head->next->next=new node(30);
    head->next->next->next=new node(40);
    printlist(head);
    cout<<endl;
    head=reverselist(head);//or reverselist(head);
    printlist(head);
    return 0;
}

