#include <iostream>

using namespace std;

int main()
{
   
    int pos;
    int cap;
    cout<<"capacity:";
    cin>>cap;
    int a[cap];
    int ind;
    int x;
    int n;
    cout<<"enter n:";
    cin>>n;
    cout<<"enter the elements:\n";
    for(int i=0;i<n;++i)
    {
        cin>>a[i];
    }
    if(n!=cap)
    {
    cout<<"position:";
    cin>>pos;
    cout<<"enter x:";
    cin>>x;
    ind=pos-1;
    for(int i=cap-1;i>=ind;i--)
    {
    a[i+1]=a[i];
    }
    a[ind]=x;
    
    }
    for(int i=0;i<cap;i++)
    {
        cout<<a[i];
    }
    return 0;
}
