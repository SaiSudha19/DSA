#include <bits/stdc++.h>

using namespace std;
void mergeSort(int a[],int b[],int p,int q)
{
    int r=p+q;
    int c[r];
    for(int i=0;i<p;i++)
    {
        c[i]=a[i];
    }
    for(int i=0;i<q;i++)
    {
        c[p+i]=b[i];
    }
    // for(int i=0;i<r-1;i++)
    // {
    //     for(int j=0;j<r-i-1;j++)
    //     if(c[i]>c[i+1])
    //     {
    //         swap(c[i],c[i+1]);
    //     }
    // }
    
    sort(c,c+r);//O(r*log(r))
    for(int i=0;i<r;i++)
    {
        cout<<c[i];
    }
}
int main()
{
    int a[]={1,2,3,4};
    int b[]={5,6,7,8};
    mergeSort(a,b,4,4);

    return 0;
}
