#include <iostream>

using namespace std;

int fun(int arr[],int low,int high,int x)
{
    if(low>high)
    return -1;
    int mid=(low+high)/2;
    if(x>arr[mid])
    return fun(arr,mid+1,high,x);
    else if(x<arr[mid])
    return fun(arr,low,high-1,x);
    else
    {
        if(mid==0||arr[mid-1]!=arr[mid])
        return mid;
        else
        return fun(arr,low,mid-1,x);
    }
}
int main()
{
    int arr[]={1,2,3,3,3,4,5};
    cout<<fun(arr,0,7,3);

    return 0;
}
