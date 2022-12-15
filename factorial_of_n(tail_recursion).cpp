#include <iostream>

using namespace std;
int factorial(int n,int val=1)
{
    if(n==0)
    return val;
    else
    {
        return factorial(n-1,n*val);
    }
}
int main()
{
    cout<<factorial(4);

    return 0;
}
