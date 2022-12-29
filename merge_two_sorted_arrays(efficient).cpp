#include <bits/stdc++.h>

using namespace std;
void mergeSort(int a[],int b[],int m,int n)
{
       int i=0,j=0;
       while(i<m&&i<n)
       {
           if(a[i]<b[j])
           cout<<a[i++];
           else
           cout<<b[j++];
       }
       while(i<m)
       cout<<a[i++];
       while(j<n)
       cout<<b[j++];
}//O(m+n)
int main()
{
    int a[]={1,2,3,4};
    int b[]={5,6,7,8};
    mergeSort(a,b,4,4);

    return 0;
}
