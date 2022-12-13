#include <iostream>

using namespace std;

int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    int key;
    int a[n];
    cout<<"enter the elements:\n";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"enter the key:";
    cin>>key;
    cout<<endl;
    for(int i=0;i<n;++i)
    {
        if(key==a[i])
        {
            cout<<i;
            return 0;
        }
    }
    cout<<"not found";
    
    return 0;
}

