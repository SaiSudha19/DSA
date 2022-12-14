#include <bits/stdc++.h>

using namespace std;
void moveend(int a[],int n)
{
    int count=0;
    for(int i=0;i<n;++i)
    {
        if(a[i]!=0)  
        {
            swap(a[i],a[count]); 
            count++;
        }
    }
}
int main()
{
    int n=4;
    int a[4]={1,0,0,4};
    moveend(a,n);
    for(int i=0;i<n;++i)
    {
        cout<<a[i];
    }
}
