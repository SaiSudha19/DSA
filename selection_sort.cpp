#include <iostream>

using namespace std;
void selectSort(int arr[],int n)
{
    
    for(int i=0;i<n-1;i++)
    {
        int min_ind=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min_ind])
            min_ind=j;
        }
        swap(arr[min_ind],arr[i]);
        
    }
    
}
int main()
{
    int n=4;
    int arr[]={1,4,2,3};
    selectSort(arr,n);
    for(int i=0;i<n;i++)
    cout<<arr[i];
    return 0;
}
