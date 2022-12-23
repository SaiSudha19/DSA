#include <iostream>

using namespace std;

int binarysearch(int arr[],int n,int x)
{
    int low=0;
    int high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==x)
        return mid;
        else if(arr[mid]>x)
        high=mid-1;
        else
        low=mid+1;
    }
    return -1;
}
int main()
{
    int arr[]={1,2,3,4,5,6,7};
    cout<<binarysearch(arr,7,2);

    return 0;
}

