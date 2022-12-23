#include <iostream>

using namespace std;

int binarysearch(int arr[],int low,int high,int x)
{
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(arr[mid]==x)
    return mid;
    else if(arr[mid]>x)
    return binarysearch(arr,low,mid-1,x);
    else if(arr[mid]<x)
    return binarysearch(arr,low+1,mid,x);
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    cout<<binarysearch(arr,0,sizeof(arr),2);

    return 0;
}
