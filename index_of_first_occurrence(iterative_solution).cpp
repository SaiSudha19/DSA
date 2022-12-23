#include <iostream>

using namespace std;

int fun(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
    int mid=(low+high)/2;
    if(arr[mid]>x)
    high=mid-1;
    else if(arr[mid]<x)
    low=low+1;
    else 
    {
        if(mid==0||arr[mid-1]!=arr[mid])
        return mid;
        else
        high=mid-1;
    }
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,3,3,4,5};
    cout<<fun(arr,7,3);

    return 0;
}
