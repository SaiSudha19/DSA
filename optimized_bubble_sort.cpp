#include <iostream>

using namespace std;
void bubbleSort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int swapped=false;
        for(int j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
    if(swapped==false)
    break;
    }
}

int main()
{
    int n=5;
    int arr[]={1,4,2,5,3};
bubbleSort(arr,n);
for(int i=0;i<n;i++)
{
    cout<<arr[i];
}
    return 0;
}

