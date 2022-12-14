#include <bits/stdc++.h>

using namespace std;

void reverse(int a[],int n)
{
    int b=0;
    int c=n-1;
    while(b<c)
    {
        int temp=a[b];
        a[b]=a[c];
        a[c]=temp;
        b++;
        c--;
    }
}
int main()
{
    int n=5;
    int a[5]={1,2,3,4,5};
    reverse(a,n);
    for(int i=0;i<n;i++)
    {
        cout<<a[i];
    }
    return 0;
}
