#include <iostream>

using namespace std;

void fun(int arr[],int n,int x)
{
    for(int i=0;i<n;++i)
    {
        if(arr[i]==x)
        {
        cout<<i;
        break;
        }
    }
    
}
int main()
{
    int arr[]={1,2,3,3,3,4,5};
    fun(arr,sizeof(arr),3);

    return 0;
}
