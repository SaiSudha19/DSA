#include <bits/stdc++.h>

using namespace std;

int getLargest(int a[],int n)
{
    int l; 
    l=a[0];
    int i;
    for(i=0;i<n;i++)
    {
        if(a[i]>l)
        {
            l=a[i];
            return i;
        }
    }
    return 0;
}
int main()
{
    int a[]={23,1,45,3};
    cout<<getLargest(a,4);
   
}
