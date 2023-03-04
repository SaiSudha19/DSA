#include <bits/stdc++.h>

using namespace std;

struct node
{
   int data;
   node *next;
   node (int x)
   {
      data=x;
      next=NULL;
   }
};
int main()
{
    node *head=new node(10);
    node *temp1=new node(20);
    node *temp2=new node(30);
    head->next=temp1;
    temp1->next=temp2;
    cout<<head<<endl;
    cout<<head->data<<endl;
    cout<<temp1->data<<endl;
    return 0;
}

