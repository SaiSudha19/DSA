#include <bits/stdc++.h>

using namespace std;
void merge(int arr[],int l,int m,int h)
{
    int n1=m-l+1,n2=h-m;
    int a[n1],b[n2];
    for(int i=0;i<n1;i++)
    a[i]=arr[l+i];
    for(int j=0;j<n2;j++)
    b[j]=arr[m+1+j];
       int i=0,j=0,k=l;
       while(i<n1&&j<n2)
       {
           if(a[i]<=b[j]) 
           arr[k++]=a[i++];
           else
           arr[k++]=b[j++];
       }
       while(i<n1)
       arr[k++]=a[i++];
       while(j<n2)
       arr[k++]=b[j++];
}
void mergeSort(int arr[],int l,int h)
{
    if(h>l)
    {
        int m=l+(h-l)/2;
        mergeSort(arr,l,m);
        mergeSort(arr,m+1,h);
        merge(arr,l,m,h);
    }
}
int main() 
{
    int arr[]={5,7,10,15,30};
    mergeSort(arr,0,4);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}

