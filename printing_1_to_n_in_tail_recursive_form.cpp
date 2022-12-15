//printing 1 to n
#include <iostream>

using namespace std;

void fun(int n,int k=1)
{
   
    if(n==0)
    return;
    else
    {
        cout<<k;
        fun(n-1,k+1);
        
    }
}
int main()
{
    fun(8);

    return 0;
}
